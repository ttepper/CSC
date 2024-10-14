#pragma once
#include <iostream>
using namespace std;

class PassByReference
{
public:
	void doubleByReference(int& refVar);
	void doubleByPointer(int* ptrVar);

private:

};