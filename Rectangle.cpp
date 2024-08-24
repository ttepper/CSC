#include "Rectangle.h"
#include <iostream> // cout, cin, endl
using namespace std;

void Rectangle::calcArea()
{
    int length = -1, width = -1;
    int area = -1;

    cout << "Enter length and width: ";
    cin >> length >> width;
    area = length * width;
    cout << "Area of Rectangle is: " << area << endl;

}