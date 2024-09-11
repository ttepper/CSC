#pragma once
class HCM // HCM = Health Club Membership
{
private:
	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice = -1;           // Menu choice
	int months = -1;           // Number of months
	double charges = -1;

public:
	void calcHCMCharges();
	void displayMenu();
	//move all the variables to private
};

//2. When you enter anything other than choice 1-4, cout message "Enter a valid choice 1-4!\n";