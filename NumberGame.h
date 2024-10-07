#pragma once

class NumberGame
{
private:
	int randNum = -1;
	int guess = -1;
	int numGuesses = -1;

public:
	void displayMenu();
	void randomNumberGame();
};
