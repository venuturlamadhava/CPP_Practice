#include<iostream>
using namespace std;

int main()
{
    int x=10;

    int *ptr=&x;

    cout << "x value:" << x << endl;
    cout << "x address:'" << &x << endl;
    cout << "ptr value:" << ptr << endl;
}