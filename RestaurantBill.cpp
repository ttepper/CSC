#include "RestaurantBill.h"
#include <iostream>
using namespace std;

void RestaurantBill::calcRestaurantBill()
{ // doubles for
	double purchase = -1.0;
	double salesTax = -1.0;
	double tipPercent = -1.0;
	double totalTax = -1.0;
	double totalPrice = -1.0;
	double taxAMT = -1.0, tipAMT = -1.0;
	

	cout << "Enter Meal Charge: $";
	cin >> purchase;

	cout << "Enter Tax Percentage (in decimal form of 6.75% or 0.0675): ";
	cin >> salesTax;

	cout << "Enter Tip Percentage (in decimal form of 15% or 0.15): ";
	cin >> tipPercent;

	taxAMT = purchase * salesTax;
	tipAMT = purchase * tipPercent;
	totalTax = taxAMT + tipAMT;
	totalPrice = purchase + totalTax;

	cout << "Purchase Price: " << purchase << endl;
	cout << "Tax Amount: " << taxAMT << endl;
	cout << "Tip Percentage: " << tipAMT << endl;
	cout << "Total Bill: " << totalPrice << endl;
}
