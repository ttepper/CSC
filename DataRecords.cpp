#include "DataRecords.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Records::Records()
{
	recordCount = 0;
}

Records::Records(int* id, string* name, int* age, int recordCount)
{
	for (int i = 0; i < recordCount; i++)
	{
		ID[i] = id[i];
		this->name[i] = name[i];
		this->age[i] = age[i];
	}
	this->recordCount = recordCount;
}

// 1.
void Records::readData()
{
	// Open the file for reading
    ifstream file("data.txt");
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    int i = 0;
    while (file >> *(ID+i) >> *(name+i) >> *(age+i)) // Read each record
    {
        i++;
    }
    recordCount = i; // Update the total number of records
    file.close();
    cout << "Data successfully read from file." << endl;
}


// 2.
void Records::writeData()
{
	// Open the file for writing
    ofstream file("data.bin");
    if (!file)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    for (int i = 0; i < recordCount; i++) // Write all records as plain text
    {
        file << *(ID + i) << " " << *(name + i) << " " << *(age + i) << endl;
    }
    file.close();
    cout << "Data successfully written to file." << endl;
}


// 3.
void Records::readBinData()
{
	// Open the file for reading
    ifstream file("data.bin");
    if (!file)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    int i = 0;
    while (file >> *(ID + i) >> *(name + i) >> age[i]) // Read all records
    {
        cout << *(ID + i) << " " << *(name + i) << " " << *(age + i) << endl;
        i++;
    }
    file.close();
}

// 4.
void Records::modifyRecord()
{
	// Ask the user for the ID of the record to modify
    int idToModify;
    cout << "Enter the ID of the record you want to modify: ";
    cin >> idToModify;

    for (int i = 0; i < recordCount; i++)
    {
        if (*(ID + i) == idToModify) // Find the matching ID
        {
            cout << "Enter new name: ";
            cin >> *(name + i);
            cout << "Enter new age: ";
            cin >> *(age + i);

            cout << "\nRecord updated!" << endl;

            // Write updated data back to the file
            writeData();

            return;
        }
    }

    cout << "Record with ID " << idToModify << " not found!" << endl;
}

