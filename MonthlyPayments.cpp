#include "MonthlyPayments.h"
#include <iostream>
#include <cmath>
using namespace std;

void MonthlyPayments::calcMPL()
{
	double rate = -1.0; // monthly interest rate on the loan as decimal
	int n = -1; // number of payments, e.g. 3 years loan means 36 payments
	double loanAmt = -1.0; // AMT = AMOUNT, amount loaned, can be decimal
	double payment = -1.0;

	cout << "Enter monthly interest rate (in decimal, NOT %) "
		<< "number of monthly payments, " << "loan amount: ";
	cin >> rate >> n >> loanAmt; 

	// using formula from the assignment
	// break it into numerator/denominator * loanAMT
	double numerator = rate * pow((1 + rate), n);
	double denominator = pow((1 + rate), n) - 1;
	payment = numerator / denominator * loanAmt;

	// user supplied values from the kbd
	cout << "Loan Amount: $" << loanAmt << endl; // outputs the
	cout << "Monthly Interest Rate: " << rate * 100 << "%" << endl;
	cout << "Number of Payments: " << n << endl;
	
	// calculated values
	double amtPaidBack = payment * n;
	double intPaid = amtPaidBack - loanAmt;
	cout << "Monthly Payment: $" << payment << endl;
	cout << "Amount Paid Back: $" << amtPaidBack << endl;
	cout << "Interest Paid: $" << intPaid << endl;
}

void MonthlyPayments::calcMPL_V2()
{
	double yearlyRate = -1.0; // monthly interest rate on the loan as decimal
	int yearN = -1; // number of payments, e.g. 3 years loan means 36 payments
	double yearlyLoanAmt = -1.0; // AMT = AMOUNT, amount loaned, can be decimal
	double yearlyPayment = -1.0;

	cout << "Enter annual interest rate (in %), "
		<< "number of yearly payments, " << "loan amount: ";
	cin >> yearlyRate >> yearN >> yearlyLoanAmt;

	double rate = yearlyRate / 12 / 100;
	int n = yearN * 12;

	// using formula from the assignment
	// break it into numerator/denominator * loanAMT
	double numerator = yearlyRate * pow((1 + yearlyRate), yearN);
	double denominator = pow((1 + yearlyRate), yearN) - 1;
	yearlyPayment = numerator / denominator * yearlyLoanAmt;

	// user supplied values from the kbd
	cout << "Loan Amount: $" << yearlyLoanAmt << endl; // outputs the
	cout << "Annual Interest Rate: " << yearlyRate << "%" << endl;
	cout << "Number of Payments: " << yearN << endl;

	// calculated values
	double amtPaidBack = yearlyPayment * yearN;
	double intPaid = amtPaidBack - yearlyLoanAmt;
	cout << "Annual Payment: $" << yearlyPayment << endl;
	cout << "Amount Paid Back: $" << amtPaidBack << endl;
	cout << "Interest Paid: $" << intPaid << endl;

}

//quiz
//User enters annual interest rate in % instead of monthly interest rate
//User enters number of payments as years, not months
//Do not modify the method calcMPL() but create a new method called calcMPL_V2
