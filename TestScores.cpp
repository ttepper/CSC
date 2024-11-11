#include "TestScores.h"
#include <iostream>
using namespace std;

void TestScores::sortScores(int* scores, int size) //selection sort
{
	int i, minIndex, minValue;

	for (i = 0; i < (size - 1); i++)
	{
		minIndex = i;
		minValue = scores[i];
		for (int index = i + 1; index < size; index++)
		{
			if (scores[index] < minValue)
			{
				minValue = scores[index];
				minIndex = index;
			}
		}
		scores[minIndex] = scores[i];
		scores[i] = minValue;
	}
	for (int i = 0; i < size; i++)
	{
		cout << scores[i] << " " << endl;
	}
}

double TestScores::averageScore(int* scores, int size) // average score
{
	int total = -1;

	for (int i = 0; i < size; i++)
	{
		total = total + scores[i];
	}
	if (size != 0)
	{
		return total / size;
	}
	else
	{
		cout << "No scores entered." << endl;
	}


	return 0;
}
