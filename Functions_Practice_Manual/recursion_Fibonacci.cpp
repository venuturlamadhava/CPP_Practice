#include <iostream>
#include "recursion.h"
using namespace std;

int fibonacci(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

void printN(int i, int n)
{
    if(i>n) return;
    cout << i << " ";
    printN(i+1, n);
}

void printF(int i, int n)
{
    if(i>n) return;

    cout << fibonacci(i) << " ";
    printF(i+1, n);
}

int main()
{
int n=10;

cout<<"n: ";
printN(0,n);
cout<< endl;

cout << "f: ";
printF(0,n);
cout<< endl;

return 0;
}