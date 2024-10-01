#pragma once
#include <string>
using namespace std;

class Rainfall
{
public:
	bool calculateRainfall();
	void displayRainfall();

private:
	string startMonth;
	string endMonth;
	double totalRainfall = -1;
	double averageRainfall = -1;
	int monthCount = 0;
};
