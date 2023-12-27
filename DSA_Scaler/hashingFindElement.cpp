/***************************************************************
* Data Structures in C++ - Hashing
* Scaler
***************************************************************/

#include <iostream>
#include <unordered_map>

using namespace std;

// Find first repeat element
int findElement(int a[], int n)
{
    unordered_map<int, int> m;
    
    //creating the hashmap for the given array
    for(int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(m[a[i]] > 1)
        {
            return a[i];
        }
    }
    
    return -1;
}

int main()
{
    int a[7] = {1,2,2,3,4,4,5};
    // 2
    
    int n = sizeof(a)/sizeof(a[0]);
    
    cout << findElement(a, n);
    
    return 0;
}