/***************************************************************
* Data Structures in C++ - Binary Search
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Search element
int binarySearch(int a[], int l, int r, int k)
{
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] > k)
        {
            r = mid - 1;
        }
        else //a[mid] < k
        {
            l = mid + 1;
        }
    }
    
    return -1;
}

int main()
{
    int a[] = {1,3,6,8,9,11};
    
    int k = 8;
    int n = sizeof(a)/sizeof(a[0]);
    
    int index = binarySearch(a, 0, n-1, k);
    
    cout << "The element " << k << "is present at index: " << index << endl;
}