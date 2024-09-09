#include "RNG_Maths.h"

int main()
{
	RNG_Maths m;

	m.askUserMinMax();
	m.generateRNs();
	m.calcTotalAverage();

	
	return 0;
}