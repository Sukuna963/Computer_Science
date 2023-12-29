/***************************************************************
* Data Structures in C++ - Stacks
* Scaler
***************************************************************/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> st;
    
    string s = "abc";
    //output: cba;
    
    for(char c : s)
    {
        st.push(c);
    }
    
    int n = s.length();
    for(int i=0; i < n; i++)
    {
        s[i] = st.top();
        st.pop();
    }
    
    cout << "The reverse of the given string is = " << s;
    
    return 0;
}