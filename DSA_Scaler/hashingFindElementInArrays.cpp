/***************************************************************
* Data Structures in C++ - Hashing
* Scaler
***************************************************************/

#include <iostream>
#include <unordered_map>

using namespace std;

//Find element repeat 2 or 3 times in arrays
int main()
{
    int a[] = {1,2,3};
    int b[] = {4,5,6,7};
    int c[] = {2,4,5,8};
    //output : 5, 4, 2
    
    unordered_map<int, int> m;
    
    for(auto i : a)
    {
        m[i]++;
    }
    
    for(auto i : b)
    {
        m[i]++;
    }
    
    for(auto i : c)
    {
        m[i]++;
    }
    
    for(auto element : m)
    {
        if(element.second >= 2)
        {
            cout << element.first << " ";
        }
    }
    
    return 0;
}