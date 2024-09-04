#pragma once
class CSMisc
{
private:

public:
	void getChars(); //  get characters from the kbd
	void getEntireLine(); // get entire line until '\n' character
	void getWord(); // word means until a space character
	void getEverything(); // copy everything user types
	void getFNLN_QUIZ();
};

/*
Input: Enter your firstname and lastname spearated by space: John Doe
Output: Here's your lastname and firstname separated by comma: Doe, John!
*/