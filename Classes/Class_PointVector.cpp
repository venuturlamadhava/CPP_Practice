#include<iostream>
using namespace std;

class point 
{
    public:
    double x,y;
};

class vector 
{
    public:
    point start, end;
};

int main()
{
    vector vec1;
    vec1.start.x=1.0;
    vec1.start.y=2.0;
    vec1.end.x=4.0;
    vec1.end.y=6.0;
    cout<<"Vector start point: ("<<vec1.start.x<<", "<<vec1.start.y<<")"<<endl;
    cout<<"Vector end point: ("<<vec1.end.x<<", "<<vec1.end.y<<")"<<endl;
  
    // vector vec2;
    // vec2.start.x=0.0;
    // vec2.start.y=0.0;
    // vec2.end.x=3.0;
    // vec2.end.y=4.0;
    // cout<<"Vector start point: ("<<vec2.start.x<<", "<<vec2.start.y<<")"<<endl;
    // cout<<"Vector end point: ("<<vec2.end.x<<", "<<vec2.end.y<<")"<<endl;   

    vector vec2;
    vec2.start = vec1.start; 

    return 0;


}

