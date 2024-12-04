#include "FancyCars.h"
#include "Utilities.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void MyUtilities::readBinaryData() // read from binary file

{
	FancyCars car;
	ifstream inFile;
	inFile.open("CarsData.dat", ios::binary);
	if (!inFile)
	{
		cout << "Error";
		return;
	}
	while (inFile.read(reinterpret_cast<char*>(&car), sizeof(car)))
	{
		cout << "Owner: " << car.getOwner() << endl;
		cout << "Model: " << car.getModel() << endl;
		cout << "Years Old: " << car.getYearsOld() << endl;
	}
	inFile.close();
}

void MyUtilities::writeBinaryData() // write to binary file
{
	FancyCars car;
	ofstream outFile;
	outFile.open("CarsData.dat", ios::binary);
	if (!outFile)
	{
		cout << "Error";
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		string owner;
		string model;
		int yearsOld;
		cout << "Owner: ";
		cin >> owner;
		cout << "Model: ";
		cin >> model;
		cout << "Years Old: ";
		cin >> yearsOld;
		
		car.setOwner(owner);
		car.setModel(model);
		car.setYearsOld(yearsOld);
		outFile.write(reinterpret_cast<char*>(&car), sizeof(car));
	}
	outFile.close();
}

void MyUtilities::readData()
{
	FancyCars car;
	ifstream inFile;
	inFile.open("CarsData.txt");
	if (!inFile)
	{
		cout << "Error";
		return;
	}
	while (inFile) >> car.getOwner() >> car.getModel() >> car.getYearsOld())
	{
		cout << "Owner: " << car.getOwner() << endl;
		cout << "Model: " << car.getModel() << endl;
		cout << "Years Old: " << car.getYearsOld() << endl;
	}
	inFile.close();
}

void MyUtilities::writeData()
{
	FancyCars car;
	ofstream outFile;
	outFile.open("CarsData.txt");
	if (!outFile)
	{
		cout << "Error";
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		string owner;
		string model;
		int yearsOld;
		cout << "Owner: ";
		cin >> owner;
		cout << "Model: ";
		cin >> model;
		cout << "Years Old: ";
		cin >> yearsOld;
		car.setOwner(owner);
		car.setModel(model);
		car.setYearsOld(yearsOld);
		outFile << car.getOwner() << " " << car.getModel() << " " << car.getYearsOld() << endl;
	}
	outFile.close();

}

// Constructors
FancyCars::FancyCars()
{
	owner = "";
	model = "";
	yearsOld = 0;
}

FancyCars::FancyCars(string, string, int)
{
	owner = "";
	model = "";
	yearsOld = 0;
}

string FancyCars::getOwner()
{
	return string();
}

string FancyCars::getModel()
{
	return string();
}

int FancyCars::getYearsOld()
{
	return 0;
}

void FancyCars::setOwner(string)
{
}

void FancyCars::setModel(string)
{
}

void FancyCars::setYearsOld(int)
{
}
