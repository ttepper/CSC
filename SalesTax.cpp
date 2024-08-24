#include "SalesTax.h"
#include <iostream> //cout, cin, endl
using namespace std;

void SalesTax::calcSalesTax() //classes are in pascal notation
{
    int purchase = 95; // $95
    // tax rates in %
    double stateTaxRate = 6.5, countyTaxRate = 2/100;
    double stateSalesTax = stateTaxRate * purchase; //camel notation
    double countyTax = countyTaxRate * purchase;

    double totalTax = stateSalesTax + countyTax;
    double totalPrice = purchase + totalTax;

    cout << "Purchase Price: " << purchase << endl;
    cout << "Total tax: " << totalTax << endl;
    cout << "Total Price (including all taxes): " << totalPrice << endl;
}