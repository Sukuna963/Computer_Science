/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Print array
void printArray(int a[], int n)
{
    cout << "The elements of the array are: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {1,3,2,4};
    
    //number of elements present in it = size of the array
    int n = sizeof(a)/sizeof(a[0]);
    
    cout << "The number of elements in array = " << n << endl;
    printArray(a, n);
    
    return 0;
}