#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

double Circle::calcCircleArea(double radius)
{
	double area = -1.0;

	area = pi * radius * radius;
	return area;
}

double Circle::calcCircleCircumference(double radius)
{
	double circumference = -1.0;

	circumference = 2 * pi * radius;
	return circumference;
}
