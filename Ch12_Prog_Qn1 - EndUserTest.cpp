// EndUserTest.cpp

#include <iostream>
#include "WordCount.h"
using namespace std;

int main()
{
    WordCount wc;  // Create an instance of WordCount
    char string[100];  // Array to store the input string

    cout << "Enter a string: ";
    cin.getline(string, 100);  // Get user input
    cout << "Number of words in the string: " << wc.countWords(string) << endl;  // Display the number of words

    return 0;
}
