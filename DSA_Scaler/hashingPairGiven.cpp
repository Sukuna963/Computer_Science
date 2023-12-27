/***************************************************************
* Data Structures in C++ - Hashing
* Scaler
***************************************************************/

#include <iostream>
#include <unordered_map>

using namespace std;

//Find Pair with given difference
int main()
{
    int a[] = {1,2,3,4};
    unordered_map<int, int> m;
    
    int n = sizeof(a)/sizeof(a[0]);
    int diff = 3;
    
    int x = -1;
    int y = -1;
    int flag = 0;
    
    // the key y is present the map
    for(int i = 0; i < n; i++)
    {
        x = a[i];
        y = x - diff;
        
        if(m.find(y) != m.end())
        {
            flag = 1;
        }
        
        if(m.find(x) == m.end())
        {
            m[x]++;
        }
    }
    
    cout << flag;
    
    return 0;
}