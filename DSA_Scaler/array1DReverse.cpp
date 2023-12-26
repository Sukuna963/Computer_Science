/***************************************************************
* Data Structures in C++ - 1D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Reverse array
int main()
{
    int a[7] = {4,1,7,5,10,11,15}; //output: 15 11 10 5 7 1 4
    
    int b[7];
    
    int j = 0; //traverse on the array b
    
    //to traverse on the array a
    for(int i = 6; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    
    for(int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
}