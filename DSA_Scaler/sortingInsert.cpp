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
    
    for(int i=0; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = key;
    }
    
    cout << "The array after sorting using Insert Sort is: ";
    for(int i=0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3,2,1,5,8,5};
    //sort this in ascending order using Insert Sort
    
    int n = sizeof(a)/sizeof(a[0]);
    
    bubbleSort(a, n);

    return 0;
}