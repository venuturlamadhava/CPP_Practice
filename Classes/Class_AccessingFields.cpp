#include<iostream>
using namespace std;

class MITStudent
{
    public:
    char *name;
    int StudentID;
};

int main()
{
MITStudent student1;
MITStudent student2;

student1.name = "Madhava V";
student1.StudentID = 12345;
student2.name = "Reddy V";
student2.StudentID = 67890;

cout << "Student 1 Name: " << student1.name << endl;
cout << "Student 1 ID: " << student1.StudentID << endl;
cout << "Student 2 Name: " << student2.name << endl;
cout << "Student 2 ID: " << student2.StudentID << endl;


}