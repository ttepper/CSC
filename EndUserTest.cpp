#include "Rectangle_V2.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Rectangle_V2 r1(11.1, 22.2), r2;
	double area = -1.0, perimeter = -1.0;
	double len = 1.1, w = 2.2;
	
	Circle c1(3), c2;
	double circumference = -1.0;
	double pi = 3.14, radius = -1.0;
	radius = 3;
	circumference = c2.calcCircleCircumference(radius);

	area = r2.calcArea(1.1, 2.2);
	perimeter = r2.calcPerimeter(1.1, 2.2);
	circumference = c2.calcCircleCircumference(3);

	cout << "Area of rectangle of length " << len << ", width " << w << ": " 
		<< area << " square units." << endl;
	
	cout << "Perimeter of rectangle of length " << len << ", width " << w << ": " 
		<< perimeter << " units." << endl;
	
	cout << "Circumference of circle with radius " << radius << ": "
		<< circumference << " units." << endl;

	return 0;
}