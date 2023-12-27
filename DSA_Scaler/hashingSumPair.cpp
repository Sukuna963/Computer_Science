/***************************************************************
* Data Structures in C++ - Hashing
* Scaler
***************************************************************/

#include <iostream>
#include <unordered_map>

using namespace std;

//Find pair that are sum
int main()
{
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    
    int sum = 4;
    int x = -1;
    int y = -1;
    
    unordered_map<int, int> m;
    
    for(int i = 0; i < n; i++)
    {
        x = a[i];
        y = sum - x;
        
        if(m.find(y) != m.end())
        {
            cout << i << " " << m[y];
            break;
        }
        
        if(m.find(x) == m.end())
        {
            m[x] = i;
        }
    }
    
    return 0;
}