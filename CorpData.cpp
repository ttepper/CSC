// CorpData.cpp
#include <iostream>
#include "CorpData.h"
using namespace std;

// Constructor implementation
CorpData::CorpData(string name, double q1, double q2, double q3, double q4)
    : divisionName(name), qtr1Sales(q1), qtr2Sales(q2), qtr3Sales(q3), qtr4Sales(q4) {}

// Function to display sales data
void CorpData::displayDivisionSales() const {
    double annualSales = qtr1Sales + qtr2Sales + qtr3Sales + qtr4Sales;
    double averageSales = annualSales / 4;

    cout << "Division: " << divisionName << endl;
    cout << "Annual Sales: $" << annualSales << endl;
    cout << "Quarterly Average Sales: $" << averageSales << endl;
    cout << "-------------------------------" << endl;
}
