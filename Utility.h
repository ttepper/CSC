#pragma once
#include "Person.h"
#include "Rectangle.h"
class Utility
{
private:

public:
	// Prototypes
	void magnify(Rectangle* pRect, int mfactor);
	int lengthOfName(Person* p);
	void output(Rectangle* pRect);
};