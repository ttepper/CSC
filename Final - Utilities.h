#pragma once
#include <iostream>
#include <string>
using namespace std;

class MyUtilities
{
private:

public:

	void readBinaryData();
	void writeBinaryData();
	//void SelectionSort(FancyCars*, int);
	//void LinearSearch(FancyCars*, int, string);
	void readData(); // read records from CarsData.txt
	void writeData(); // write records to binary file CarsData.dat
};
