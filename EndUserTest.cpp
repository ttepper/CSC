#include "MethodCalls.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	MethodCalls m;
	int aNumber = 5;
	string s = " ";
	char c = ' ';
	double* d;

	s = m.foo1(aNumber);
	cout << "Address of aNumber after calling main:foo1():" << aNumber << endl; // expect 5
	cout << "Message received from foo1: \n";
	cout << s << endl;

	c = m.foo2(aNumber);
	cout << "Address of aNumber after calling main: foo2(): " << aNumber << endl; // expect 6
	cout << "Message received from foo2: \n";
	cout << c << endl;

	d = m.foo3(&aNumber);
	cout << "Address of aNumber after calling main: foo3(): " << aNumber << endl; // expect 7
	cout << "Message received from foo3: \n";
	cout << d << endl;

	return 0;
}