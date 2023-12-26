/***************************************************************
* Data Structures in C++ - 1D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Max element
int main()
{
    int a[5] = {-4,-1,-7,-5,-10};
    
    int mx = a[0]; //initialization
    
    for(int i = 0; i < 5; i++) 
    {
        if(a[i] > mx) 
        {
            mx = a[i];
        }
    }
    
    cout << "The maximum element in the array is = " << mx << endl;

    return 0;
}