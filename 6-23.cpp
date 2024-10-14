#include "PassByReference.h"
#include <iostream>
using namespace std;

int main() 
{
    PassByReference p;

    int value1 = 4;
    int value2 = 4;

    cout << "In main, value1 is " << value1 << endl;
    cout << "Now calling doubleNum (pass by reference)..." << endl;
    p.doubleByReference(value1);
    cout << "Now back in main, value1 is " << value1 << endl;

    cout << "\nIn main, value2 is " << value2 << endl;
    cout << "Now calling doubleNum (pass by pointer)..." << endl;
    p.doubleByPointer(&value2); // Pass the address of value2
    cout << "Now back in main, value2 is " << value2 << endl;

    return 0;
}