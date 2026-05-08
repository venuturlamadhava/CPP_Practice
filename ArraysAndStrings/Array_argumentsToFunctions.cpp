#include<iostream>
using namespace std;

int sum(const int array[], const int length)
{
    long sum=0;
    for(int i=0; i<length; sum+=array[i++]);
    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    cout << "Sum: " << sum(arr,8) << endl;
    

    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    cout << "Sum1: " << sum(arr1,10) << endl;
    return 0;

}