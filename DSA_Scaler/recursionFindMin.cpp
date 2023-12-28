/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

int printMin(int a[], int size, int i, int mn)
{
    //base condition
    if(i == size)
    {
        return mn;
    }
    
    //task
    mn = min(mn, a[i]);
    
    //recursive call
    return printMin(a, size, i+1, mn);
}

int main()
{
    int a[] = {-1,2,3,-6,9};
    
    int n = sizeof(a)/sizeof(a[0]);
    int mn = a[0]; 
    
    cout << "The minimum element in the array is =  " << printMin(a, n, 0, mn);
    
    return 0;
}