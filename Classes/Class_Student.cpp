#include<iostream>
using namespace std;

class MITStudent
{
public:
    char *SName;
    int Sage;
};

int main()
{
    MITStudent student1;
    MITStudent student2;

    student1.SName = "Madhava";
    student1.Sage= 35;
    student2.SName = "Lohitha" ;
    student2.Sage= 4;

    cout << "student1 name is:" <<" " << student1.SName << endl;
    cout << "student1 age is:"  << " " << student1.Sage << endl;
    cout << "student2 name is:" <<" " << student2.SName << endl;
    cout << "student2 age is:"  << " " << student2.Sage << endl;


}

