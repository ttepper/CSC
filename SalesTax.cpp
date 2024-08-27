#include "SalesTax.h"
#include <iostream>
using namespace std;

void SalesTax::calcSalesTax()
{
	int purchase = -1;
	//tax rates in %
	double stateTaxRate = -1.0, countyTaxRate = -1.0;
	double stateSalesTax = -1.0;
	double countyTax = -1.0;
	double totalTax = -1.0;
	double totalPrice = -1.0;

	cout << "Enter Purchase Price: $";
	cin >> purchase;

	cout << "Enter State Tax: ";
	cin >> stateTaxRate;

	cout << "Enter County Tax: ";
	cin >> countyTaxRate;

	stateSalesTax = stateTaxRate * purchase;
	countyTax = countyTaxRate * purchase;
	totalTax = stateSalesTax + countyTax;
	totalPrice = purchase + totalTax;

	cout << "Purchase Price: " << purchase << endl;
	cout << "Total Tax: " << totalTax << endl;
	cout << "State Tax: " << stateTaxRate << endl;
	cout << "County Tax: " << countyTaxRate << endl;
	cout << "Total Price (including all taxes): " << totalPrice << endl;
}
