/***************************************************************
* Data Structures in C++ - Binary Search
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Search last element duplicate
int binarySearch(int a[], int l, int r, int k)
{
    int res = -1;
    
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
           res = mid;
           l = mid + 1;
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
    
    return res;
}

int main()
{
    int a[] = {1,2,3,3,3,8,9,11};
    
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    
    int index = binarySearch(a, 0, n-1, k);
    
    cout << "The last index at which the element " << k << " is present at index: " << index << endl;
}