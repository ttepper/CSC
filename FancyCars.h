#pragma once
#include <iostream>
#include <string>
using namespace std;

class FancyCars
{
private:
	string owner;
	string model;
	int yearsOld;
	
public:
	FancyCars();// default constructor
	FancyCars(string, string, int);// overloaded constructor

	//Getters
	string getOwner();
	string getModel();
	int getYearsOld();

	// Setters
	void setOwner(string);
	void setModel(string);
	void setYearsOld(int);
};
