#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Define Variables
	string operation;
	double number1, number2;

	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter second number: ";
	cin >> number2;

	if (operation == "+")
	{
		cout << number1 + number2;
	}
	else if (operation == "-")
	{
		cout << number1 - number2;
	}
	else if (operation == "*")
	{
		cout << number1 * number2;
	}
	else if (operation == "/")
	{
		cout << number1 / number2;
	}
	else
	{
		cout << "Enter a valid operation!";
	}

	return 0;
}