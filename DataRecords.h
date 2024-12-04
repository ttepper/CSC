#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Records
{
public:
	// default constructor
	Records();
	//overloaded constructor
	Records(int* id, string* name, int* age, int recordCount);


    void readData();      // Read data from text file into arrays
    void writeData();     // Write data into a file (simplified)
    void readBinData();   // Read data back and display it
    void modifyRecord();  // Modify a record based on ID

// Getters a setters

	int getID(int i)
	{
		return *(ID+i);
	}
	string getName(int i)
	{
		return *(name+i);
	}
	int getAge(int i)
	{
		return *(age+i);
	}
	int getRecordCount()
	{
		return recordCount;
	}

	void setID(int i, int value)
	{
		*(ID+i) = value;
	}
	void setName(int i, string value)
	{
		*(name+i) = value;
	}
	void setAge(int i, int value)
	{
		*(age+i) = value;
	}
	void setRecordCount(int value)
	{
		recordCount = value;
	}
private:
    int ID[100];
    string name[100];
    int age[100];
    int recordCount = 0;  // Tracks how many records exist
};
