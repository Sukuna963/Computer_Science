/***************************************************************
* Data Structures in C++ - Sorting
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    cout << "The array before sorting is = ";
    for(int i=0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    for(int i=0; i < n-1; i++)
    {
        int min = a[i];
        int idx = i;
        
        for(int j=i+1; j < n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                idx = j;
            }
        }
        
        int temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }
    
    cout << "The array after sorting is = ";
    for(int i=0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {3,2,1,5,8,5};
    //sort this in ascending order using Selection Sort
    
    int n = sizeof(a)/sizeof(a[0]);
    
    selectionSort(a, n);

    return 0;
}