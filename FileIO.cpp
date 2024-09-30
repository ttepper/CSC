#include "FileIO.h"
#include <fstream> // fstream, ifstream (like cin), ofstream (like cout) (file, input, output stream)
#include <iostream>
#include <string>
using namespace std;

void FileIO::writeToFile()
{
	/*string fileName;
	cout << "Enter the file name: ";
	cin >> fileName;*/

	// Steps: 
	// 1. create/open a steram to your file
	// 2. write to your file
	// 3. close the stream
	ofstream WriteToFile("myData.txt"); // step 1 done: created/opened a stream called fileIn to myData.txt file
	
	for (int i = 0; i < 10; i++)
	{
		WriteToFile << i << "Hi there 100 times!\n"; // step 2 done: wrote a msg to the file
		cout << i << "Hi there 100 times!\n"; // msg goes to console
	}
	WriteToFile.close(); //close the stream, i.e. clean up after yourself!
}

void FileIO::readFromFileWord()
{
	string temp = " ";
	// Steps: 
	// 1. create/open a steram to your file
	// 2. read from your file
	// 3. close the stream
	ifstream ReadFromFileWord("myData.txt"); // step 1 done: created/opened a stream called ReadFromFile to myData.txt file
	// myData.txt exists, otherwise error
	while (!(ReadFromFileWord.eof()))
	{
		ReadFromFileWord >> temp >> temp;
		cout << temp;
	}
	ReadFromFileWord.close();

}

void FileIO::readFromFileLine()
{
	string temp = " ";
	// Steps: 
	// 1. create/open a steram to your file
	// 2. read from your file
	// 3. close the stream
	ifstream ReadFromFileLine("myData.txt"); // step 1 done: created/opened a stream called ReadFromFile to myData.txt file
	// myData.txt exists, otherwise error
	while (!(ReadFromFileLine.eof()))
	{
		getline(ReadFromFileLine, temp);
		cout << temp;
	}
	ReadFromFileLine.close();
}

void FileIO::readFromFileChar()
{
	char temp = 'A';
	// Steps: 
	// 1. create/open a steram to your file
	// 2. read from your file
	// 3. close the stream
	ifstream ReadFromFileChar("myData.txt"); // step 1 done: created/opened a stream called ReadFromFile to myData.txt file
	// myData.txt exists, otherwise error
	while (!(ReadFromFileChar.eof())) // not reached end of filestream
	{
		temp = ReadFromFileChar.get();
		cout << temp;
	}
	ReadFromFileChar.close();
}