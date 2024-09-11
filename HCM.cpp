#include "HCM.h"
#include <iostream>
#include <iomanip>
using namespace std;

void HCM::displayMenu()
{
// Display the menu and get the user's choice
	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "For how many months? ";
	cin >> months;
	

}

void HCM::calcHCMCharges()
{
	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Use the menu selection to execute the correct set of actions 
	if (!(choice == 4))
	{
		
		if (choice == 1)
		{
			charges = months * ADULT_RATE;
		}
		else if (choice == 2)
		{
			charges = months * CHILD_RATE;
		}
		else if (choice == 3)
		{
			charges = months * SENIOR_RATE;
		}
		cout << "\nThe total charges are $" << charges << endl;
	}

	else if (choice >= 5)
	{
		cout << "Enter a valid choice 1-4! ";
	}

}



