#include "BoilFreezePoint.h"
#include <iostream>
using namespace std;

void BoilFreezePoint::menuBoilFreezePoint()
{
	cout << "List of Substances:\n \nEthyl Alcohol\nMercury\nOxygen\nWater\n";
	cout << "\nList of Temperatures (In Degrees Fahrenheit): -173, 172, -38, 676, -362, -306, 32, 212\n";
}

void BoilFreezePoint::displayBoilFreezePoint()
{
    cout << "\nEnter a temperature: ";
    cin >> temp;

    cout << "\nAt " << temp << "F, the following will occur:\n";

    // Check which substances freeze
    if (temp <= -362)
        cout << "- Oxygen will freeze\n";
    if (temp <= -173)
        cout << "- Ethyl Alcohol will freeze\n";
    if (temp <= -38)
        cout << "- Mercury will freeze\n";
    if (temp <= 32)
        cout << "- Water will freeze\n";

    // Check which substances boil
    if (temp >= -306)
        cout << "- Oxygen will boil\n";
    if (temp >= 172)
        cout << "- Ethyl Alcohol will boil\n";
    if (temp >= 212)
        cout << "- Water will boil\n";
    if (temp >= 676)
        cout << "- Mercury will boil\n";
}
