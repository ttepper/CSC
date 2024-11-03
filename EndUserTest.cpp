// EndUserTest.cpp
#include "CorpData.h"

int main() {
    // Create CorpData instances for each division
    CorpData east("East", 15000.75, 12000.50, 13000.80, 16000.20);
    CorpData west("West", 14000.65, 11000.40, 12500.30, 15500.10);
    CorpData north("North", 13000.55, 12500.25, 13500.90, 14500.35);
    CorpData south("South", 13500.75, 11500.45, 14000.60, 15000.25);

    // Display sales data for each division
    east.displayDivisionSales();
    west.displayDivisionSales();
    north.displayDivisionSales();
    south.displayDivisionSales();

    return 0;
}
