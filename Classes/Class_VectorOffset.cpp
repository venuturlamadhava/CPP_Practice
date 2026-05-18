#include<iostream>
using namespace std;

void vectorOffset(double &X0, double &Y0, double &X1, double &Y1, double OffsetX, double OffsetY)
{
    X0 += OffsetX;
    Y0 += OffsetY;
    X1 += OffsetX;
    Y1 += OffsetY;
}

void printVector(double X0, double Y0, double X1, double Y1)
{
    cout << "(" << X0 << "," << Y0 << ")" << "==>" << "(" << X1 << "," << Y1 << ")" << endl;
}

int main()
{
    double xStart = 0.1;
    double yStart =0.1;
    double xEnd=1.1;
    double yEnd=1.1;
    double X=10;
    double Y=10;

    vectorOffset(xStart,yStart,xEnd,yEnd,X,Y);
    printVector(xStart,yStart,xEnd,yEnd);

}
