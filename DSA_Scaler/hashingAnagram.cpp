/***************************************************************
* Data Structures in C++ - Hashing
* Scaler
***************************************************************/

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

//Find string that are anagrams
int main()
{
    string a[] = {"baba", "bbaa", "ccba", "bcac"};
    
    unordered_map<string, vector<int>> m;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    string s = "";
    for(int i = 0; i < n; i++)
    {
        s = a[i];
        sort(s.begin(), s.end());
        m[s].push_back(i);
    }
    
    for(auto elem : m)
    {
        for(auto j : elem.second)
        {
            cout << a[j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}