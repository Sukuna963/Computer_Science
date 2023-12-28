/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void printArrayReverse(int a[], int size, int i)
{
    //base condition
    if(i == -1)
    {
        return;
    }
    
    //task
    cout << a[i] << " ";
    
    //recursive call
    printArrayReverse(a, size, i-1);
}

int main()
{
    int a[] = {1,4,3,7,9};
    
    //number of elements present in array
    int n = sizeof(a)/sizeof(a[0]);
    int current = n-1;
    
    cout << "The elements of the array in reverse are = ";
    printArrayReverse(a, n, current);
    
    return 0;
}