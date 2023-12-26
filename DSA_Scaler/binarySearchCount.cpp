/***************************************************************
* Data Structures in C++ - Binary Search
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Count Frequency element
int findFirstOcurrenceBs(int a[], int l, int r, int k)
{
    int res = -1;
    
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
            //store current index (mid) in res, and keep looking on left
           res = mid;
           r = mid - 1;
        }
        else if(a[mid] > k)
        {
            //search on the left sub part
            r = mid - 1;
        }
        else //a[mid] < k
        {
            //search on the right sub part
            l = mid + 1;
        }
    }
    
    return res;
}

int findLastOccurenceBs(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    int res = -1;
    
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
            //store current index (mid) in res, and keep looking on right
           res = mid;
           l = mid + 1;
        }
        else if(a[mid] > k)
        {
            //search on the left sub part
            r = mid - 1;
        }
        else //a[mid] < k
        {
            //search on the right sub part
            l = mid + 1;
        }
    }
    
    return res;
}

int main()
{
    int a[] = {1,2,3,3,3,3,9,11};
    
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    
    int first_index = findFirstOcurrenceBs(a, 0, n-1, k);
    int last_index = findLastOccurenceBs(a, n, k);
    
    int freq;
    if(last_index == -1 || first_index == -1)
    {
        freq = 0;
    }
    else
    {
        freq = last_index - first_index + 1;
    }
    
    cout << "The frequency of the element " << k << " is = " << freq << endl;
}