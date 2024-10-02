#include "Rectangle_V2.h"

double Rectangle_V2::calcArea(double len, double w)
{
    double area = -1.0;
    
    area = len * w;

    return area;
}

double Rectangle_V2::calcPerimeter(double len, double w)
{
    double p = -1.0; // perimeter

    p = 2 * (len + w); // double half-perimeter

    return p;
}
