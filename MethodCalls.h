#pragma once
#include <string>
using namespace std;

class MethodCalls
{
private:

public:
	string foo1(int n1); // pass by value
	char foo2(int& n1); // pass by reference
	double* foo3(int* n1); // pass by pointer
};