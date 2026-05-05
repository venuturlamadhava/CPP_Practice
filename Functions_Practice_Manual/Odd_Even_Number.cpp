#include<iostream>
using namespace std;

void printNumberIfEven(int num)
{
    if(num %2 == 1)
    {
        cout<< "Odd number" <<endl;
        return;
    }
    cout << "even number; number is" << num <<endl;
}

int main()
{
    int x=4;
    printNumberIfEven(x);

    int y=5;
    printNumberIfEven(y);
}

