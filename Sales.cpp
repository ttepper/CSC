#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ifstream inFile("division_sales.txt");
    if (!inFile)
    {
        cout << "Error opening file." << endl;
        return 0; // Return error if the file cannot be opened
    }

    string divisionName, temp;
    int quarter;
    double quarterlySales;
    double totalCorporateSales[4] = { 0 }; // Total sales for each quarter
    double totalYearlyCorporateSales = 0;
    double highestSales = 0;
    double lowestSales = 0;
    bool isFirstEntry = true; // To initialize highest and lowest sales

    // Read data from the file
    while (getline(inFile, temp, ':')) 
    { // Skip "Division"
        inFile >> divisionName; // Read division name
        getline(inFile, temp, ':'); // Skip "Quarter"
        inFile >> quarter; // Read quarter
        getline(inFile, temp, '$'); // Skip "Quarterly Sales: $"
        inFile >> quarterlySales; // Read quarterly sales
        inFile.ignore(); // Ignore the newline character

        if (isFirstEntry) 
        {
            highestSales = lowestSales = quarterlySales;
            isFirstEntry = false; // Reset the flag after first entry
        }
        else 
        {
            if (quarterlySales > highestSales) 
            {
                highestSales = quarterlySales;
            }
            if (quarterlySales < lowestSales) 
            {
                lowestSales = quarterlySales;
            }
        }

        int index = quarter - 1; // Convert 1-based quarter to 0-based index for arrays
        totalCorporateSales[index] += quarterlySales;
        totalYearlyCorporateSales += quarterlySales;
    }

    inFile.close();

    // Display the results
    cout << "Total Corporate Sales by Quarter:\n";
    for (int i = 0; i < 4; i++) 
    {
        cout << "Quarter " << (i + 1) << ": $" << totalCorporateSales[i] << endl;
    }

    cout << "\nTotal Yearly Corporate Sales: $" << totalYearlyCorporateSales << endl;
    cout << "Highest Quarterly Sales: $" << highestSales << endl;
    cout << "Lowest Quarterly Sales: $" << lowestSales << endl;

    return 0;
}


