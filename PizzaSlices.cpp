#include "PizzaSlices.h"
#include <iostream>
#include <cmath>
using namespace std;

void PizzaSlices::calcPizzaSlices()
{
	double diameter = -1.0;
	double pi = 3.14;
	double sliceArea = 14.125;
	double radius;
	double pizzaArea;
	int numberOfSlices;

	cout << "Enter the diameter of the pizza in inches: ";
	cin >> diameter;

	radius = diameter / 2.0;
	pizzaArea = pi * radius * radius;
	numberOfSlices = round(pizzaArea / sliceArea);

	cout << "\nYou can cut the pizza into " << numberOfSlices << " slices" << endl;
}
