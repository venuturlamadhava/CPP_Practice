#include<iostream>
using namespace std;

void printVectior(double x0, double x1, double y0, double y1)
{
    cout << "(" << x0 << "," << y0 << ")" << "==>" << "(" << x1 << "," << y1 << ")" << endl;
}

int main(){

    double xStart = 1.2;
    double xEnd=2.0;
    double yStart=2.8;
    double yEnd=3.5;

    printVectior(xStart,yStart,xEnd,yEnd);
}