#include "Info.h"
using namespace std;

void Info::writeRecords() {
    Info person;
    char response;
    string input;

    fstream people("people.dat", ios::out | ios::binary);
    if (!people) {
        cout << "Error opening file. Program aborting.\n";
        return;
    }

    do {
        cout << "Enter person information:\n";
        cout << "Name: ";
        getline(cin, input);
        strcpy_s(person.name, input.c_str());
        cout << "Age: ";
        cin >> person.age;
        cin.ignore();
        cout << "Address line 1: ";
        getline(cin, input);
        strcpy_s(person.address1, input.c_str());
        cout << "Address line 2: ";
        getline(cin, input);
        strcpy_s(person.address2, input.c_str());
        cout << "Phone: ";
        getline(cin, input);
        strcpy_s(person.phone, input.c_str());
        people.write(reinterpret_cast<char*>(&person), sizeof(person));
        cout << "Do you want to enter another record? ";
        cin >> response;
        cin.ignore();
    } while (toupper(response) == 'Y');
    people.close();
}

void Info::readRecords() {
    Info person;
    char response;

    fstream people("people.dat", ios::in | ios::binary);
    if (!people) {
        cout << "Error opening file. Program aborting.\n";
        return;
    }

    cout << "Here are the people in the file:\n\n";
    people.read(reinterpret_cast<char*>(&person), sizeof(person));
    while (!people.eof()) {
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address line 1: " << person.address1 << endl;
        cout << "Address line 2: " << person.address2 << endl;
        cout << "Phone: " << person.phone << endl;
        cout << "\nStrike any key to see the next record.\n";
        cin.get(response);
        people.read(reinterpret_cast<char*>(&person), sizeof(person));
    }
    cout << "That's all the information in the file!\n";
    people.close();
}


// Quiz
// Part 1
// change struct to class, move it to its own header file Info.h
// create two methods (writeRecords, readRecords), 
// one for writing to file (like 13-12), one for reading from file (like 13-13)
// From EndUserTest, call writeRecords to write records into the binary file. 
// Then call readRecords to display records on the console.

// Part 2 (due Sunday midnight)
// Instead of using char arrays in Info, please use string variables. And make it work!
// Instead of entering records from the keyboard, create 4 records in data.txt file.