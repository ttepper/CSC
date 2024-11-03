#pragma once
// CorpData.h
#pragma once
#include <string>
using namespace std;

class CorpData {
private:
    string divisionName;
    double qtr1Sales, qtr2Sales, qtr3Sales, qtr4Sales;

public:
    // Constructor to initialize the data members
    CorpData(string name, double q1, double q2, double q3, double q4);

    // Function to display the sales data
    void displayDivisionSales() const;
};
