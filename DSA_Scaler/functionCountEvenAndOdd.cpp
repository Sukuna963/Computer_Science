/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Count Even and Odd numbers
void coutEvenOdd(int a[], int n)
{
    int even_count = 0;
    int odd_count = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    
    cout << "The count of even elements = " << even_count << endl;
    cout << "The count of odd elements = " << odd_count << endl;
}

int main()
{
    int a[] = {1,3,2,4};
    //even = 2
    //odd = 2
    
    //number of elements present in it = size of the array
    int n = sizeof(a)/sizeof(a[0]);
    
    coutEvenOdd(a, n);
    
    return 0;
}