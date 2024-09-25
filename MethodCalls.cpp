#include "MethodCalls.h"
#include <iostream>
#include <string>
using namespace std;

string MethodCalls::foo1(int n1)
{
	n1++;
	cout << "Value of parameter n1: " << n1 << endl;

	return "foo1: n1 was incremented by 1, call by value. ";
}

char MethodCalls::foo2(int& n1)
{
	n1++;
	cout << "Value of parameter n1: " << n1 << endl;

	return 'A';
}

double* MethodCalls::foo3(int* n1)
{
	(*n1)++;
	
	cout << "Value of parameter n1: " << *n1 << endl;
	double* result = new double(1.0);
	return result;

	return 0;
}
