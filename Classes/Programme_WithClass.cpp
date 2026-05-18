#include<iostream>
using namespace std;

void printVector(double X0,double Y0,double X1,double Y1)
{
    cout << "(" << X0 << "," << Y0 << ")" << "==>" << "(" << X1 << "," << Y1 << ")" << endl;

}

int main()
{
    double xStart=0.1;
    double yStart=0.1;
    double xEnd=1.1;
    double yEnd=1.1;

    printVector(xStart,yStart,xEnd,yEnd);
}
