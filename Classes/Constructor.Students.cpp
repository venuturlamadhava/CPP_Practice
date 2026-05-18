#include<iostream>
using namespace std;

class MITStudent
{
    public:
        int id;
        char *name;
    MITStudent()
    {
        id= 0;
        name ="";
    }

};

int main()
{
    MITStudent student1;
    student1.id=99;
    char n[]="foo";
    student1.name=n;
    MITStudent student2=student1;
    student2.id=100;
    student2.name[0]='b';

    cout << student1.name << endl;

}