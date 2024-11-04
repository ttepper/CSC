#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Inventory class declaration
class Inventory
{
private:
    string itemCode;
    string description;
    double price;

public:
    Inventory()                             // Default constructor
    {
        itemCode = "XXX";  description = " ";  price = 0.0;
    }

    Inventory(string c, string d, double p) // 3 argument constructor
    {
        itemCode = c;
        description = d;
        price = p;
    }

    // Add methods setCode, setDescription, and setPrice here.

    // Functions to retrieve member variable values
    string getCode() const
    {
        string code = itemCode;
        return code;
    }

    string getDescription() const
    {
        string d = description;
        return d;
    }

    double getPrice() const
    {
        return price;
    }

	void setCode(string c)
	{
		itemCode = c;
	}

	void setDescription(string d)
	{
		description = d;
	}

	void setPrice(double p)
	{
		price = p;
	}
};

// 1. Inventory.h
// 2. Add setter methods for private variables CHECK!
// 3. Create a Utility.h -- move displayInventory and bubbleSort to the Utility class
// 4. Only use * notation, no array operator []
// 5. Use dynamic memory array
// 6. Sort on price
