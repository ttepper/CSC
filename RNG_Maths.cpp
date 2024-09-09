#include "RNG_Maths.h"
#include <iostream>
#include <cstdlib>       // Header file needed to use srand and rand
#include <ctime> // Header file needed to use time
#include <iomanip>
using namespace std;

void RNG_Maths::askUserMinMax()
{
	cout << " Enter the min value: ";
	cin >> minValue;

	cout << "Enter the max value: ";
	cin >> maxValue;
}

void RNG_Maths::generateRNs()
{	
	unsigned seed;
	int sizeOfArray = sizeof(n) / sizeof(int); // 80/4 = 20
	cout << "Size of array is: " << sizeOfArray << endl;

	seed = time(0);
	srand(seed);

	for (int i = 0; i < sizeOfArray; i++)
	{
		n[i] = (rand() % (maxValue - minValue + 1)) + minValue;
		cout << i << ": " << n[i] << endl;
		total = total + n[i]; // running total
	}
}

void RNG_Maths::calcTotalAverage()
{
	myAverage = static_cast<double>(total) / 20;
	
	cout << "Total is: " << total << endl;
	cout << "Average is: " << myAverage << endl;
}
