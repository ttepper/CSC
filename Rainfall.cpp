#include "Rainfall.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool Rainfall::calculateRainfall()
{
    ifstream inputFile("rainfall.txt");
    if (!inputFile) {
        return false; // Indicate failure to open file
    }

    if (!getline(inputFile, startMonth) or !getline(inputFile, endMonth)) {
        return false; // Indicate failure to read the months
    }

    double monthlyRainfall;
    totalRainfall = 0.0;
    monthCount = 0;

    while (inputFile >> monthlyRainfall) {
        totalRainfall += monthlyRainfall;
        monthCount++;
    }

    if (monthCount > 0) {
        averageRainfall = totalRainfall / monthCount;
    }

    inputFile.close();
    return true; // Indicate success
}


void Rainfall::displayRainfall()
{
	cout << fixed << setprecision(2);
	cout << "During the months of " << startMonth << " to " << endMonth << " the total rainfall was " << totalRainfall << " inches and the average rainfall was " << averageRainfall << " inches. " << endl;

}
