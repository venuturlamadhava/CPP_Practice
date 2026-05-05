#include "pass_by_ref.h"

void increment(int &a) {a+=1;}

void swap(int &a, int&b)
{
    int t=a;
    a=b;
    b=t;
}