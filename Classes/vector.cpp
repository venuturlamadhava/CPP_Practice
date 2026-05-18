#include<iostream>
#include "vector.h"
using namespace std;

void point::offset(double offsetX,double offsetY)
{
    x += offsetX;
    y += offsetY;
}

void point::print()
{
    cout << "(" << "x" << "," << "y" << ")" << endl;
}

void vector::offset(double offsetX, double offsetY)
{
    start.offset(offsetX,offsetY);
    start.offset(offsetX,offsetY);
}

void vector::print()
{
    start.print();
    cout << "-->";
    end.print();
    cout << endl;
}
