/* This program uses the "enhanced" bubble sort algorithm to sort an array
of Inventory objects in ascending order by their itemCode. Once no swaps 
occur on a pass, the algorithm recognizes that the array is fully sorted, 
so the outer loop is exited to prevent unneeded additional iterations. 
*/ 
#include "Inventory.h"
#include "Utility.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// End Inventory class declaration

// PROGRAM THAT USES THE INVENTORY CLASS




/*******************************************************
*               displayInventory                      *
* This function displays the entire array.            *
*******************************************************/
void Utility::displayInventory(const Inventory* object, int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << setw(5) << left << (*(object + index)).getCode()
            << setw(13) << left << (*(object + index)).getDescription()
            << "$" << right << (*(object + index)).getPrice() << endl;
    }
} // End displayInventory

/*********************************************************
 *                      bubbleSort                       *
 * This function performs a bubble sort on Inventory     *
 * objects, arranging them in ascending order by their   *
 * itemCode. Note that when the itemCodes of two objects *
 * are out of order, the entire two objects are swapped. *
 *********************************************************/
void Utility::bubbleSort(Inventory* array, int size)
{
    bool madeAswap = true;      // This allows the for loop to begin iterating

    for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
    {
        madeAswap = false;       // No swaps have occurred yet on this pass

        for (int index = 0; index < maxElement; index++)
        {
            if (array[index].getCode() > array[index + 1].getCode())
            {
                swap(array[index], array[index + 1]);
                madeAswap = true;
            }
        }
    }
} // End bubbleSort
                           
                               


//Swap
 // This function swaps objects a and b in memory.

 void swap(Inventory &a, Inventory &b)
{
   Inventory temp = a;
   a = b;
   b = temp;
}

// 1. Inventory.h
// 2. Add setter methods for private variables
// 3. Create a Utility.h -- move displayInventory and bubbleSort to the Utility class
// 4. Only use * notation, no array operator []
// 5. Use dynamic memory array
// 6. Sort on price