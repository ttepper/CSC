#include "Midterm.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

void Midterm::generateNumbers()
{
	for (int i = 0; i < 20; i++) // Generate 20 random numbers
	{
		numbers[i] = rand() % 101 + 100; // Generate random num
	}
}

void Midterm::writeNumbers()
{
	ofstream file("numbers.txt"); // Open file to write numbers
	if (file) // If file is open
	{
		for (int i = 0; i < 20; i++) // For loop to write numbers to file
		{
			file << numbers[i] << endl; // Write numbers to file
			cout << numbers[i] << endl; // Terminal
		}
	}
	file.close(); // Close file
}

void Midterm::readNumbers()
{
	ifstream file("numbers.txt");
	if (file)
	{
		for (int i = 0; i < 20; i++) // For loop to read numbers from file
		{
			file >> newNumbers[i]; // Read numbers from file
			newNumbers[i] = newNumbers[i] + 30; // Add 30 to each number
		}
	}
	file.close();
}

void Midterm::doCalc()
{
	double area[20]; // Array to store area of circles
	double circumference[20]; // Array to store circumference of circles
	double sumArea = -1; // Variable to store sum of area
	double sumCircumference = -1; // Variable to store sum of circumference
	for (int i = 0; i < 20; i++) // For loop to calculate area and circumference of circles
	{
		area[i] = newNumbers[i] * newNumbers[i] * 3.14; // Calculate area of circle
		circumference[i] = newNumbers[i] * 2 * 3.14; // Calculate circumference of circle
		sumArea = sumArea + area[i]; // Add area to sum
		sumCircumference = sumCircumference + circumference[i]; // Add circumference to sum
	}
	
	// Calculate averages
	averageArea = sumArea / 20;
	averageCircumference = sumCircumference / 20;
}

void Midterm::displayAnswers()
{
	ofstream file("answers.txt"); // Open file
	if (file)
	{
		file << fixed << setprecision(2) << endl;
		file << "Average Area: " << averageArea << endl; // Write average area to file
		file << "Average Circumference: " << averageCircumference << endl; // Write average circumference to file
		
		cout << fixed << setprecision(2) << endl;
		cout << "Average Area: " << averageArea << endl; // To Terminal
		cout << "Average Circumference: " << averageCircumference << endl; //To Terminal
		
	}
	file.close();
}
