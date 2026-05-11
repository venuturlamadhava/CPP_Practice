#include <iostream>
using namespace std;

void swap(int a,int b)
{
    cout << "Before swapping: a=" << a << " b=" << b << endl;
    int  temp=a;;
    a=b;
    b=temp;
    cout << "After swapping: a=" << a << " b=" << b << endl;
}

int main()
{
    swap(10,20);
    return 0;
}