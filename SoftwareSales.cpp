#include "SoftwareSales.h"
#include<iostream>
#include <cmath>
using namespace std;

void SoftwareSales::menuSoftwareSales()
{
	cout << "Software Sales Menu: ";
	cout << "\nHow many units will you be purchasing? ";
	cin >> unitAMT;

	while (unitAMT <= 0)
	{
		cout << "\n No, please enter a valid value: ";
		cin >> unitAMT;
	}
}

void SoftwareSales::calcSoftwareSales()
{
	int packagePrice = 199;
	double totalCost = -1.0;

	if (unitAMT >= 100)
	{
		discount = 0.5;
	}
	else if (unitAMT >= 50)
	{
		discount = 0.4;
	}
	else if (unitAMT >= 20)
	{
		discount = 0.3;
	}
	else if (unitAMT >= 10)
	{
		discount = 0.2;
	}
	else
	{
		discount = 0.0;
	}

	totalCost = unitAMT * packagePrice * (1- discount);
	cout << "The total cost for " << unitAMT <<  " unit(s) "  "is: $" << totalCost << endl;

}


