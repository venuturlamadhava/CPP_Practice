#include<iostream>
using namespace std;

class point{
    public:
    double x;
    double y;
};

void offsetPoint(point &p,double x,double y)
{
    p.x +=x;
    p.y +=y;
}

int main()
{
    point p;
    p.x =3.0;
    p.y =4.0;
    offsetPoint(p,1.0,2.0);

    cout << p.x << "and" << p.y << endl;
}