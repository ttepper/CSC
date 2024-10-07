#include "NumberGame.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void NumberGame::displayMenu()
{
	randNum = rand() % 100 + 1;
	cout << "Random Number Guessing Game" << endl;
	cout << "Guess the number in the range 1-100." << endl;
}

void NumberGame::randomNumberGame()
{
	do
	{
		cout << "\nEnter your guess: ";
		cin >> guess;
		numGuesses++;

		if (guess < randNum)
		{
			cout << "Too low, try again.";
		}
		else if (guess > randNum)
		{
			cout << "Too high, try again.";
		}
		else
		{
			cout << "Congratulations, you guessed the right number!";
		}
	}
	while (guess != randNum); // While loop to keep the code running until correct number is guessed
}
