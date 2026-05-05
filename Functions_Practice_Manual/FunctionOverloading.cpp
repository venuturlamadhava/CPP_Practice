#include<iostream>
using namespace std;

void printOnNewLine(int x)
{
    cout<< "Integer:" << x << endl;
}

void printOnNewLine(const char *x)
{
    cout<< "String:" << x << endl;
}

int main()
{

    printOnNewLine(3);
    printOnNewLine("hello");

}