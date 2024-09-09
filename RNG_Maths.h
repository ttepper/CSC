#pragma once
class RNG_Maths
{
private:
	int n[20] = { 0 };
	int total = 0;
	double myAverage = -1;
	int minValue = -1, maxValue = -1;

public:
	void askUserMinMax(); // ask the user for minValue and maxValue
	void generateRNs(); // generate 20 random numbers, and show it on the console

	// calculate the total and average of the random number
	// and cout on the console
	void calcTotalAverage();
};