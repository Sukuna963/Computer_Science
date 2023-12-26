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
    
    int l = 0;
    int r = 6;
    
    while(l < r)
    {
        // swap a[l] and a[r]
        
        int temp = a[r];
        a[r] = a[l];
        a[l] = temp;
        
        l++;
        r--;
    }
    
    for(int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}