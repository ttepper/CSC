#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 1. Read dataIn.txt into a dynamic array of characters
    ifstream fileChar("dataIn.txt");
    if (!fileChar) 
    {
        cout << "Error opening file dataIn.txt.";
        return 0;
    }

    char* bufferChar = new char[6]; // Allocate memory for 5 characters + null terminator
    fileChar.read(bufferChar, 5);
    bufferChar[5] = '\0'; // Null-terminate the string
    fileChar.close();

    cout << "Read from dataIn.txt: " << bufferChar << endl;

    // 2. Write the data to a binary file dataIn.dat
    ofstream fileOutChar("dataIn.dat", ios::binary);
    if (!fileOutChar) 
    {
        cout << "Error opening file dataIn.dat.";
        return 0;
    }

    fileOutChar.write(bufferChar, 5);
    fileOutChar.close();

    // 3. Read dataIndouble.txt into a dynamic array of doubles
    ifstream fileDouble("dataIndouble.txt");
    if (!fileDouble) 
    {
        cout << "Error opening file dataIndouble.txt.";
        return 0;
    }
    
    double* bufferDouble = new double[3]; // Allocate memory for 3 doubles
    for (int i = 0; i < 3; i++) 
    {
        fileDouble >> *(bufferDouble + i);
    }
    fileDouble.close();

    cout << "Read from dataIndouble.txt: ";
    for (int i = 0; i < 3; i++) 
    {
        cout << *(bufferDouble + i) << " ";
    }
    cout << endl;

    // 4. Write the double data to a binary file dataDouble.dat
    ofstream fileOutDouble("dataDouble.dat", ios::binary);
    if (!fileOutDouble) 
    {
        cout << "Error opening file dataDouble.dat.";
        return 0;
    }

    fileOutDouble.write(reinterpret_cast<char*>(bufferDouble), sizeof(double) * 3);
    fileOutDouble.close();

    // 5. Read back from both binary files and display
    ifstream fileInChar("dataIn.dat", ios::binary);
    ifstream fileInDouble("dataDouble.dat", ios::binary);
    char* readChars = new char[6];
    double* readDoubles = new double[3];

    fileInChar.read(readChars, 5);
    readChars[5] = '\0'; // Null-terminate the string
    fileInDouble.read(reinterpret_cast<char*>(readDoubles), sizeof(double) * 3);

    cout << "Contents of dataIn.dat: " << readChars << endl;
    cout << "Contents of dataDouble.dat: ";
    for (int i = 0; i < 3; i++)
    {
        cout << *(readDoubles + i) << " ";
    }
    cout << endl;

    // Cleanup
    delete[] bufferChar;
    delete[] bufferDouble;
    delete[] readChars;
    delete[] readDoubles;
    fileInChar.close();
    fileInDouble.close();

    return 0;
}


////This program uses the write and read functions. 
//#include <iostream> 
//#include <fstream>
//using namespace std;
//
//int main()
//{
//    // File object used to access file
//    fstream file("nums.dat", ios::out | ios::binary);
//    if (!file)
//    {
//        cout << "Error opening file.";
//        return 0;
//    }
//
//    // Integer data to write to binary file
//    int buffer[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // could hard code 10 [10] instead of line 22
//    int bufferNew[10] = { -1 };
//	int* bufferNew = new int[10]; // dynamic array
//	char* bufferChar = new char[10]; // dynamic array
//	double bufferDouble[] = { 11.1, 22.2, 33.3 };
//    int size = sizeof(buffer) / sizeof(buffer[0]);
//	
//    for (int i = 0; i < 10; i++)
//	{
//		bufferNew[i] = -1;
//	}
//
//	ifstream fileIn("dataIn.txt");
//    if (!fileIn)
//    {
//		cout << "Error opening file.";
//		return 0;
//    }
//	file.read(reinterpret_cast<char*>(bufferChar), sizeof(bufferChar));
//
//	ifstream fileInDouble("dataIndouble.txt");
//    if (!fileInDouble)
//    {
//        cout << "Error opening file.";
//        return 0;
//    }
//	file.read(reinterpret_cast<char*>(bufferDouble), sizeof(bufferDouble));
//    
//    
//
//    // Write the data and close the file
//    cout << "Now writing the data to the file.\n";
//    file.write(reinterpret_cast<char*>(buffer), sizeof(buffer));
//    file.close();
//
//    // Open the file and use a binary read to read
//    // contents of the file into an array
//    file.open("nums.dat", ios::in); // use ios::in or out instead of ifstream or ofstream
//    if (!file)
//    {
//        cout << "Error opening file.";
//        return 0;
//    }
//
//    
//    cout << "Now reading the data back into memory.\n";
//    file.read(reinterpret_cast<char*>(bufferNew), sizeof(buffer));
//
//    // Write out the array entries
//    cout << "Contents of buffer array: \n";
//    for (int count = 0; count < size; count++)
//    {
//        cout << buffer[count] << " ";
//    }
//
//    cout << "\nContents of bufferNew: \n";
//    for (int count = 0; count < size; count++)
//    {
//        cout << *(bufferNew + count) << " ";
//    }
//    cout << endl;
//
//	delete[] bufferNew; // delete dynamic array
//	bufferNew = nullptr; // set pointer to null
//    // Close the file	
//    file.close();
//    return 0;
//};

// 1. Read dataIn.txt into an dynamic array of characters. Also cout this array to verify you read correctly.
// 2. Write the data to a binary file using system call. Call your binary file dataIn.dat. (size 5 array).
// 3. Do the same for dataIndouble.txt. So, read into a dynamic array of doubles (size 3 array).
// 4. Use read system call to read both binary files into memory and dump the contents onto console using cout. Show the output as:
// a b c d e
// 11.1 22.2 33.3
