/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void printArray(int a[], int size, int i)
{
    //base condition
    if(i == size)
    {
        return;
    }
    
    //task
    cout << a[i] << " ";
    
    //recursive call
    printArray(a, size, i+1);
}

int main()
{
    int a[] = {1,4,3,7,9};
    
    //number of elements present in array
    int n = sizeof(a)/sizeof(a[0]);
    
    cout << "The elements of the array are = ";
    printArray(a, n, 0);
    
    return 0;
}