#include <iostream>
#include <fstream>
#include "Invtry.h"
#include "Utility.h"
using namespace std;

const int NUM_RECORDS = 5;

void Utility::writeEmptyRecords()
{
    Invtry record = { "N/A", 0, 0.0 };

    fstream inventory("invtry.dat", ios::out | ios::binary);
    if (!inventory) {
        cout << "Error opening file.";
        return; // Correctly exiting the function after an error.
    }

    for (int count = 0; count < NUM_RECORDS; count++) {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char*>(&record), sizeof(record));
    }

    inventory.close();
}

void Utility::readRecords()
{
    Invtry record;
    fstream inventory("invtry.dat", ios::in | ios::binary);
    if (!inventory) {
        cout << "Error in opening the file.";
        return; // Correctly exiting the function after an error.
    }

    while (inventory.read(reinterpret_cast<char*>(&record), sizeof(record))) {
        cout << "Description: " << record.desc << endl;
        cout << "Quantity: " << record.qty << endl;
        cout << "Price: " << record.price << endl << endl;
    }
    inventory.close();
}

void Utility::editRecord()
{
    Invtry record;
    long recNum;

    fstream inventory("invtry.dat", ios::in | ios::out | ios::binary);
    if (!inventory) {
        cout << "Error opening file.";
        return; // Correctly exiting the function after an error.
    }

    cout << "Which record do you want to edit? ";
    cin >> recNum;
    cin.ignore();

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

    cout << "Current Description: " << record.desc << endl;
    cout << "Current Quantity: " << record.qty << endl;
    cout << "Current Price: " << record.price << endl;

    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char*>(&record), sizeof(record));

    inventory.close();
}

void Utility::quit()
{
    cout << "Goodbye!";
    exit(0);
}
