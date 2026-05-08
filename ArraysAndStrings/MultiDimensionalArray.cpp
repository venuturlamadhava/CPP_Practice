#include<iostream>
using namespace std;

int main()
{
    //int twoDimenArray[2][4];
    // twoDimenArray[0][0]=6;
    // twoDimenArray[0][1]=7;
    // twoDimenArray[0][2]=8;
    // twoDimenArray[0][3]=9;
    // twoDimenArray[1][0]=10;
    // twoDimenArray[1][1]=11;
    // twoDimenArray[1][2]=12;
    // twoDimenArray[1][3]=13; 
    //int twoDimArray[2][4] = { 6, 0, 9, 6, 2, 0, 1, 1 };

    int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };

    for (int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << twoDimArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}