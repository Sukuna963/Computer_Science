/***************************************************************
* Data Structures in C++ - 2D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Search in sorted 2D array
int main()
{
    int a[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}}; 
    
    int x = 11;
    int flag = 0;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(a[i][j] == x)
            {
                flag = 1;
                
                cout << "The element " << x << " is present: " << endl;
                cout << "The row number is = " << i << endl;
                cout << "The column number is = " << j << endl;
            }
        }
    }
    
    if(flag == 0)
    {
        cout << "Element doesn't exist" << endl;
    }
    
    return 0;
}