#include <iostream>
#include <iomanip>
#include <string>
#include "Inventory.h"
#include "Utility.h"
using namespace std;

// main
int main()
{
    const int SIZE = 6;

    // dynamic, run-time alllcation on the heap for an array os SIZE
    // Inventory objects
    Inventory* silverware1 = new Inventory[SIZE]; // Dynamic allocation
    *(silverware1 + 0) = Inventory("S15", "soup spoon", 2.35);
    *(silverware1 + 1) = Inventory("S12", "teaspoon", 2.19);
    *(silverware1 + 2) = Inventory("F15", "dinner fork", 3.19);
    *(silverware1 + 3) = Inventory("F09", "salad fork", 2.25);
    *(silverware1 + 4) = Inventory("K33", "knife", 2.35);
    *(silverware1 + 5) = Inventory("K41", "steak knife", 4.15);

    Utility utility;

    // Display the inventory
    cout << "Here is the original data\n";
    utility.displayInventory(silverware1, SIZE);

    // Sort the objects by their itemCode
    utility.bubbleSort(silverware1, SIZE);

    // Display the inventory again
    cout << "\nHere is the sorted data\n";
    utility.displayInventory(silverware1, SIZE);

    delete[] silverware1; // Deallocate the memory allocated for the array

    return 0;
} // End main   