#include<iostream>
using namespace std;

class point
{
public:
    double x;
    double y;
};

class Vector
{
public:
    point start, end;
};

int main()
{
    Vector vec1;
    vec1.start.x=1;
    vec1.start.y=1;
    vec1.end.x=10;
    vec1.end.y=10;

    cout << "(" << vec1.start.x << "," << vec1.start.y << ")" << "==>" << "(" << vec1.end.x << "," << vec1.end.y << ")" << endl;
}