#pragma once
#include <iostream> 
#include <string> 
using namespace std;

// Person class
class Person
{
private:
	string name;
	int  age;
public:
	Person() // Default constructor
	{
		name = " ";
		age = -1;
	}
	Person(string name1, int age1) // Overloaded constructor
	{
		name = name1;
		age = age1;
	}
	int getAge() { return age; }
	string getName() { return name; }
	void setAge(int age1) { age = age1; }
	void setName(string name1) { name = name1; }
};
