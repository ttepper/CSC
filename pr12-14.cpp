#include <iostream>
#include <string>
using namespace std;

void nameSlice(char *name, string& firstName, string& lastName);

int main()
{
    const int NAME_LENGTH = 41; // The maximum length of a name
    char name[NAME_LENGTH]; // This will store the user's full name

    // Ask for the user's name
    cout << "Enter your first and last names, separated by a space:\n";
    cin.getline(name, NAME_LENGTH); // Reads a line of text into 'name'

    string firstName, lastName;

    // Slice the last name off and also get last name separately
    nameSlice(name, firstName, lastName);

    // Add Hi
    string hi = "Hi " + firstName + " " + lastName;
    string mr = "Hi Mr. " + lastName;
    cout << hi << endl; // Outputs: Hi Tyler Tepper

    // Create greeting using initial of first name and full last name
    string initialHi = "Hi " + firstName.substr(0, 1) + "." + lastName;
    cout << initialHi << endl; // Outputs: Hi T.Tepper

    // Re-output the full name greeting
    cout << mr << endl; // Outputs again: Hi Tyler Tepper

    return 0;
}

// This function modifies the given character array to extract first and last names separately
void nameSlice(char *name, string& firstName, string& lastName)
{
    int i = 0; // Start at the beginning of the array
    while (*(name+i) != ' ' && name[i] != '\0')
    {
        i++; // Move to the next character
    }
    *(name+i) = '\0'; // Replace the space with a null character, ending the string
    firstName = string(name); // First name is up to the null character
    lastName = string(name + i + 1); // Last name starts after the null character
}


/*// This program uses the function nameSlice
// to "cut" off the last name of a string that
// contains the user's first and last names. 
#include <iostream>
#include <string>
using namespace std;

void nameSlice(char *name, string& firstName, string& lastName); // Function prototype // * instead of [] is the same as char userName[]
 
int main() 
{
    // Define array of char to hold name
    const int NAME_LENGTH = 41;
    char name[NAME_LENGTH]; // Character array

    // Get user's first and last names
    cout << "Enter your first and last names, separated ";
    cout << "by a space:\n";
    cin.getline(name, NAME_LENGTH); // Converts character array to C-string from 14

    // Slice off the last name and print what is left
    string firstName;
    nameSlice(name); // Call the function
    string lastName;
        cout << "Hi " << name << endl;
    cout << "Hi " << firstName << " " << lastName << endl;
    
    // append Hi <first name> <last name> => Hi Tyler Tepper
    // replace <first name> with initial and. => Hi T.Tepper
    // last, output => Hi Tyler Tepper
    
    return 0;
}

//*****************************************************
// Definition of function nameSlice. This function    *
// accepts a character array as its argument. It      *
// scans the array looking for a space. When it finds *
// one, it replaces it with a null terminator.        *
//*****************************************************
void nameSlice(char *userName) // final how to get rid of array operator
{
    // Look for the end of the first name, indicated
    // by a space or a null terminator
    int k = 0;
    while (*(userName + k) != ' ' && *(userName + k) != '\0')
        k++;

    // Insert null terminator	
    if (*(userName + k) == ' ')
        *(userName + k) = '\0'; // First\0Last\0
}*/
