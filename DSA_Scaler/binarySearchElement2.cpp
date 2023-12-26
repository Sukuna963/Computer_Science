/***************************************************************
* Data Structures in C++ - Binary Search
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Search element
int binarySearch(int a[], int l, int r, int k)
{
    if(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] > k)
        {
            return binarySearch(a, l, mid-1, k);
        }
        else //a[mid] < k
        {
            return binarySearch(a, mid+1, r, k);
        }
    }
    
    return -1;
}

int main()
{
    int a[] = {1,3,6,8,9,11};
    
    int k = 12;
    int n = sizeof(a)/sizeof(a[0]);
    
    int index = binarySearch(a, 0, n-1, k);
    
    cout << "The element " << k << " is present at index: " << index << endl;
}