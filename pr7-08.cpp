// This program uses a class with a Boolean function that determines
// if a new value sent to it is the largest value received so far.
#include <iostream>
using namespace std;

class SimpleStat          
{
  private: 
	int largest = -1;            // The largest number received so far  
	int sum = 0;                // The sum of the numbers received
	int count = 0;              // How many numbers have been received
	
	bool isNewLargest(int num); // This is a private class function
	
  public:
	
	SimpleStat();  // Default constructor
	SimpleStat(int la, int s, int c); // Overloaded constructor to initialize the private variables
	bool addNumber(int num);
	void addNumberV2(int main);
	double calcAverage();
	
	int getLargest() // Get methods
	{  return largest; }

	int getCount()
	{  return count; }

	int getSum()
	{
		return sum; 
	}

	void setLargest(int n) // Set methods
	{
		largest = n;
	}

	void setSum(int n)
	{
		sum = n;
	}

	void setCount(int n) // Set to a variable
	{
		count = n;
	}
};

// SimpleStat Class Implementation Code 

/*************************************
 *  SimpleStat Default Constructor   *
 *************************************/
SimpleStat::SimpleStat()
{
	cout << "Default constructor called.\n";
	largest = sum = count = 0;
}

SimpleStat::SimpleStat(int la, int s, int c)
{
	cout << "Overloaded constructor called.\n";
	largest = la;
	sum = s;
	count = c;
}

/*************************************
 *      SimpleStat::addNumber        *
 *************************************/
bool SimpleStat::addNumber(int num)
{   bool goodNum = true;
	if (num >= 0)              // If num is valid
	{
		sum += num;            // Add it to the sum
		count++;               // Count it
		if(isNewLargest(num))  // Find out if it is
			largest = num;     // the new largest
	}
	else                       // num is invalid
		goodNum = false;      

	return goodNum;
}

/*************************************
 *     SimpleStat::isNewLargest      *
 *************************************/
bool SimpleStat::isNewLargest(int num)
{
	if (num > largest)
		return true;
	else
		return false;
}

/*************************************
 *      SimpleStat::calcAverage      *
 *************************************/
double SimpleStat::calcAverage()
{  
	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}

/*************************************
 *      SimpleStat::addNumberV2        *
 *************************************/
void SimpleStat::addNumberV2(int num)
{
	sum += num;            // Add it to the sum
	count++;               // Count it
	if (isNewLargest(num))  // Find out if it is
		largest = num;     // the new largest
}

// Client Program

/*************************************
 *                main               *
 *************************************/
int main()
{
	int num;
	SimpleStat statHelper;
	SimpleStat s(100, 200, 10);
	cout << "count = " << s.getCount() << endl;
	cout << "largest = " << s.getLargest() << endl;
	cout << "sum = " << s.getSum() << endl;
	return 11;

	cout << "Please enter the set of non-negative integer \n"; 
	cout << "values you want to average. Separate them with \n";
	cout << "spaces and enter -1 after the last value. \n\n";

	cin >> num;
	while (num >= 0)
	{
		statHelper.addNumber(num);
		cin >> num;
	}
	cout << "\nYou entered " << statHelper.getCount() << " values. \n";
	cout << "The largest value was " << statHelper.getLargest()  << endl;
	cout << "The sum value was " << statHelper.getSum() << endl;
	cout << "The average value was " << statHelper.calcAverage() << endl;

	cout << "Resetting all object private values to default now: \n";
	statHelper.setCount(0);
	statHelper.setLargest(-1);
	statHelper.setSum(-1);

	cout << "The default values for this object are now: \n";
	cout << "count = " << statHelper.getCount() << endl;
	cout << "largest = " << statHelper.getLargest() << endl;
	cout << "sum = " << statHelper.getSum() << endl;

	return 0;
}
