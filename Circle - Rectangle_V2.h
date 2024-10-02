#pragma once
#include <iostream>
using namespace std;

class Rectangle_V2
{
private:
	double length = -1.0, width = -1.0;

public:
	Rectangle_V2() // default constructor
	{
		cout << "\nDefault constructor called.\n";
	}
	Rectangle_V2(double len, double w) // Overloaded constructor
	{
		cout << "\nOverloaded constructor called. \n";
		length = len;
		width = w;
	}
	~Rectangle_V2() // destructor
	{
		cout << "\nDefault constructor called.\n";
	}
	double calcArea(double len, double w);
	double calcPerimeter(double len, double w);

};
