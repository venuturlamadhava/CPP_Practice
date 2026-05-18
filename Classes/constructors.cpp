#include<iostream>
using namespace std;

class point{
public:
double x,y;
point ()
{
    x=0.0, y=0.0;
    cout << "point instance called" << endl;
}
};

int main()
{
    point p;
}