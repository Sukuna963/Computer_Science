/***************************************************************
* Data Structures in C++ - 2D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Print diagonal 2D array
int main()
{
    int a[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}}; 
    
    cout << "The principal diagonal elements are: " << endl;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }
    
    cout << "\n The secondary diagonal elements are: " << endl;
    
    int k = 3;
    
    for(int i = 0; i < 4; i++)
    {
        cout << a[i][k] << " ";
        k--;
    }
    
    return 0;
}