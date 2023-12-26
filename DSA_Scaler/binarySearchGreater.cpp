/***************************************************************
* Data Structures in C++ - Binary Search
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Smallest character greater than element
int solveBs(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    
    int res = -1;
    
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        
        if(a[mid] == k)
        {
            //keep searching on the right sub-part as you need smallest val greater
           l = mid + 1; 
        }
        else if(a[mid] > k)
        {
            //if come across a value greater than k, store it as it can be a value
            //keep looking for another > k such that its the min among all greater
            res = a[mid];
            r = mid - 1;
        }
        else //a[mid] < k
        {
            //keep searching on the right sub-part as you need smallest val greater
            l = mid + 1;
        }
    }
    
    return res;
}


int main()
{
    int a[] = {1,2,3,3,3,3,9,11};
    
    int k = 1;
    int n = sizeof(a)/sizeof(a[0]);
    
    int val = solveBs(a, n, k);
    
    if(val == -1)
    {
        cout << "No much element exit" << endl;
    }
    else
    {
        cout << "The smallest element greater than " << k << " is = " << val;
    }
}