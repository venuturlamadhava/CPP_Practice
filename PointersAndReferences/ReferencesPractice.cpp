#include<iostream>
using namespace std;

int main()
{
    int x=11;
    
    int & ref=x;

    cout <<"ref valueis:" << ref << endl;
    cout <<"x value is:" << x << endl;
}