// 1. Person.h, add all getters and setters
// 2. Rectangle.h add all getters and setters
// 3. Create a default constructor for Person class that initializes name to " " and age = -1;
// 4. Create a default and overloaded constructor for Rectangle class that initializes width and height variables.
// 5. Create a utility class in Utility.h, and make the standalone functions as methods of the utility class.

// This program illustrates pointers to class objects
// and structures as parameters of functions.
#include <iostream> 
#include <string> 
#include "Rectangle.h"
#include "Person.h"
#include "Utility.h"
using namespace std;

//*********************************************
// Output the dimensions of a rectangle       *
//*********************************************
void Utility::output(Rectangle *pRect)
{
	cout << "width: " << pRect->width << " height: " 
         << pRect->height << endl;
}

//******************************************************
// Returns the number of characters in a person's name *
//******************************************************
int Utility::lengthOfName(Person *p)
{
   string name = p->getName();
   return name.length();
}

//******************************************************
// Stretch the width and height of a rectangle by      *
// a specified factor                                  *
//******************************************************
void Utility::magnify(Rectangle *pRect, int factor)
{
   pRect->width = pRect->width * factor;
   pRect->height = pRect->height * factor;
}
