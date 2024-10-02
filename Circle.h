#pragma once
#include <iostream>
using namespace std;

class Circle
{
private:
	double pi = 3.14;
	double radius = -1.0;

public:
	Circle()
	{
		cout << "\nDefault constructor called.\n";
	}
	Circle(double r)
	{
		cout << "\nOverloaded constructor called. \n";
		radius = r;
	}
	~Circle() // destructor
	{
		cout << "\nDestructor called.\n";
	}

	double calcCircleArea(double radius);
	double calcCircleCircumference(double radius);
};
