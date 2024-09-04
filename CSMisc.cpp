#include "CSMisc.h"
#include <iostream>
#include <string>
using namespace std;

void CSMisc::getChars()
{
	char c = ' ';
	cout << "Enter some characrers: ";
	cin >> c;
	cout << "Character entered: " << c << endl;
}

void CSMisc::getEntireLine()
{
	string s = " ";

	cout << "Enter some text: ";
	// get entire line from the cin = kbd stream
	getline(cin, s);
	cout << "Here's the line you typed: \n"
		<< s << endl;
	cout << "Number of chars typed: " << s.length() << endl;
}

void CSMisc::getWord()
{
	string s = " ";

	cout << "Enter some text: ";
	cin >> s;
	cout << "Hers the line you typed: \n"
		<< s << endl;
}

void CSMisc::getEverything()
{
	char c = ' ';

	cout << "Enter some text: ";

	while (c != '\n')
		c = cin.get();
		cout << c;

}

void CSMisc::getFNLN_QUIZ()
{
	string first = " "; // strings for last name
	string last = " "; // string for last name

	cout << "Enter your first name and last name separated by space: ";
	cin >> first >> last;
	cout << "Here's your last name and first name separated by a comma: " << last << first << endl;
}

