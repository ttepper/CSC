#pragma once

class Midterm
{
private:
	int numbers[20]; // Array to store numbers
	int newNumbers[20]; // Array to store new numbers
	double averageArea = -1.0; // Initializing the doubles
	double averageCircumference = -1.0;

public:
	// Methods
	void generateNumbers();
	void writeNumbers();
	void readNumbers();
	void doCalc();
	void displayAnswers();
};
