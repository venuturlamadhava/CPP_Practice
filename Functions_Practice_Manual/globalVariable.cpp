#include<iostream>
using namespace std;

int numCalls = 0;

void foo()
{
    ++numCalls;
}

int main()
{
    foo();
    foo();
    foo();

    cout << numCalls << endl;
}