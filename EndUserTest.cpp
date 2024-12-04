#include "FancyCars.h"
#include "Utilities.h"

int main()
{
	FancyCars Cars[5]; // array size of 5
	FancyCars carsNew[5];
	// create MyUtilities object
	MyUtilities myUtilities;
	// call readBinaryData function
	myUtilities.readBinaryData();
	myUtilities.writeBinaryData();

	//call readData(); and writeData();


	return 0;

}