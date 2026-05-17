#include<iostream>
using namespace std;

int main()
{
    int x=10;

    int &ref=x;
    ref=100;

    cout << x << endl;
}