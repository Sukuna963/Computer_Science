/***************************************************************
* Data Structures in C++ - Sorting
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int a[], int n)
{
    cout << "The array before sorting is: ";
    for(int i=0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp =a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    cout << "The array after sorting using Bubble sort is: ";
    for(int i=0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3,2,1,5,8,5};
    //sort this in ascending order using Bubble Sort
    
    int n = sizeof(a)/sizeof(a[0]);
    
    bubbleSort(a, n);

    return 0;
}