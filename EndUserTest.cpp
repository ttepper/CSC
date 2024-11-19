#include <iostream>
#include "Utility.h"
#include "Invtry.h"

using namespace std;

int main()
{
    int choice;

    do 
    {
        cout << "\nInventory Management System\n";
        cout << "1. Create Empty Records\n";
        cout << "2. Display Records\n";
        cout << "3. Edit a Record\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            Utility::writeEmptyRecords();
            break;
        case 2:
            Utility::readRecords();
            break;
        case 3:
            Utility::editRecord();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please choose 1-4.\n";
        }
    } while (choice != 4);

    return 0;
}

