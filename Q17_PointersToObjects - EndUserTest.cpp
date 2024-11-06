#include <iostream> 
#include <string> 
#include "Rectangle.h"
#include "Person.h"
#include "Utility.h"
using namespace std;

int main()
{
	Utility util;
	
	// Create, then magnify a rectangle by a factor of 3
	Rectangle rect; // Using default constructor
	rect.width = 4;
	rect.height = 2;
	cout << "Initial size of  rectangle is ";
	util.output(&rect);
	util.magnify(&rect, 3);
	cout << "Size of Rectangle after magnification is ";
	util.output(&rect);

	// Create a Person object and find the length of the person's name
	Person* pPerson = new Person("Susan Wu", 32);
	cout << "The name " << pPerson->getName()
		<< " has length " << util.lengthOfName(pPerson) << endl;

	delete pPerson; // return memory to the heap
	pPerson = nullptr; // avoid dangling pointer

	return 0;
}
