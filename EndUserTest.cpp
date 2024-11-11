#include "TestScores.h"
#include <iostream>
using namespace std;

int main()
{
	int size = -1;
	cout << "Enter the number of test scores: ";
	cin >> size;
	int* scores = new int[size]; // dynamically allocate an array large enough to hold a user-defined number of test scores
	for (int i = 0; i < size; i++) // i is the starting point of the array, i is less than the size of the array, i increments
	{
		cout << "Enter test score " << i + 1 << ": "; // display "Enter test score " and the value of i + 1
		cin >> scores[i]; // user input for the value of the index
	}
	TestScores testScores;
	testScores.sortScores(scores, size);
	cout << "\nAverage score: " << testScores.averageScore(scores, size) << endl;
	delete[] scores; // deallocate the memory

	return 0;
}