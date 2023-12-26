/***************************************************************
* Data Structures in C++ - 2D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Print 2D array
int main()
{
    int a[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    
    cout << "The matrix elements array:" << endl;
    
    //to iterate over the rows
    for(int i = 0; i < 5; i++)
    {
        //to iterate over the columns
        for(int j = 0; j < 4; j++)
        {
            //print the element present at the i,j cell
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}