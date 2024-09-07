#include "InterestEarned.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void InterestEarned::calcInterestEarned()
{
	// Enter values
	double rate = -1;
	int timesCompounded = -1;
	double principalAmt = -1;
	double interest = -1;
	double finalBalance = -1;
	double rateAmt;

	// User inputs
	cout << "Enter the Interest Rate (decimal form: 0.0425): ";
	cin >> rate;

	cout << "Enter how many times the interest is compounded (integer): ";
	cin >> timesCompounded;

	cout << "Enter the principal amount (starting balance): ";
	cin >> principalAmt;

	// Formula for the final balance, interest rate, and amount.
	finalBalance = principalAmt * pow(1 + (rate / timesCompounded), timesCompounded);
	interest = finalBalance - principalAmt;
	rateAmt = rate * 100;
	
	// Outputs
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nInterest Rate: " << rateAmt << "%" << endl;
	cout << "Times Compounded: " << timesCompounded << endl;
	cout << "Principal: $" << principalAmt << endl;
	cout << "Interest: $" << interest << endl;
	cout << "Final Balance: $" << finalBalance << endl;
}