#include "LargerThanN.h"
#include <iostream>
using namespace std;

void LargerThanN::displayLargerThanN(int arr[], int size, int n)
{
	for (int i = 0; i < size; i++) // Loop for elements
	{
		if (arr[i] > n) // If greater than n
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}
