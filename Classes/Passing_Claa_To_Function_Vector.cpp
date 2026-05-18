#include<iostream>
using namespace std;

class point 
{
    public:
    double x,y;
};

class vector
{
    public:
    point start, end;
};

void offsetVector(vector &v,double offsetX,double offsetY)
{
    v.start.x +=offsetX;
    v.start.y +=offsetY;
    v.end.x +=offsetX;
    v.end.y +=offsetY;
}

void printVector(vector v)
{
    cout << "(" << v.start.x << "," << v.start.y << ")" << "==>" << "(" << v.end.x << "," << v.end.y << ")" << endl;
}

int main()
{
    vector vec;
    vec.start.x=1.0, vec.start.y=1.0, vec.end.x=5.0, vec.end.y=5.0;
    offsetVector(vec, 6.0, 6.0);
    printVector(vec);
}