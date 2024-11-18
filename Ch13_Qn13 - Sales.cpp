#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define a structure for storing division data
struct Division 
{
    string divisionName;
    int quarter;
    double quarterlySales;
};

int main() 
{
    // Array of division names
    const string divisions[4] = { "East", "West", "North", "South" };
    const int NUM_DIVISIONS = sizeof(divisions) / sizeof(divisions[0]);
    const int NUM_QUARTERS = 4;

    // Open the output file
    ofstream outFile("division_sales.txt");
    if (!outFile)
    {
        cout << "Error opening file." << endl;
        return 1; // Return error code 1
    }

    // Input and write data for each division and each quarter
    for (int i = 0; i < NUM_DIVISIONS; i++) 
    {
        for (int j = 1; j <= NUM_QUARTERS; j++) 
        {
            Division div;
            div.divisionName = divisions[i];
            div.quarter = j;

            // Prompt user for quarterly sales
            cout << "Enter the quarterly sales for " << div.divisionName << " division, quarter " << div.quarter << ": ";
            cin >> div.quarterlySales;

            // Write the data to the file
            outFile << "Division: " << div.divisionName
                << ", Quarter: " << div.quarter
                << ", Quarterly Sales: $" << div.quarterlySales << endl;
        }
    }

    // Close the file
    outFile.close();

    cout << "Data has been written to division_sales.txt" << endl;

    return 0;
}
