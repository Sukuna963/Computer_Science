/***************************************************************
* Data Structures in C++ - 2D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Sum 2D array
int main()
{
    int a[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}}; 
    int b[4][4] = {{17,18,19,20}, {21,22,23,24}, {25,26,27,28}, {29,30,31,32}};
    
    int sum[4][4];
    
    //iterate over the rows
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    cout << "The matrix obtained by adding the two matrices is: " << endl;
    
    //iterating over the rows of the sum matrix
    for(int i = 0; i < 4; i++)
    {
        //iterating over the columns of the sum matrix
        for(int j = 0; j < 4; j++)
        {
            cout << sum[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}