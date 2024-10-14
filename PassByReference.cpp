#include "PassByReference.h"

void PassByReference::doubleByReference(int& refVar)
{
	refVar *= 2;
}

void PassByReference::doubleByPointer(int* ptrVar)
{
	if (ptrVar != nullptr)
	{
		*ptrVar *= 2;
	}
	else
	{
		cout << "Null pointer passed to doubleByPointer." << endl;
	}
}
