#include<iostream>
using namespace std;

int square(int x)
{
    int squ=x*x;
    //cout << "the square of given number is:" << squ << endl;
    return squ;
}

int cube(int x)
{
    int cub=square(x)*x;
    cout << "the cube of the given number is:" << cub << endl;
    return cub;
}

int main()
{
    //square(5);
    cube(125);
}