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
   string a = "(()))";
   
   stack<char> s;
   
   for(int i=0; i < 4; i++)
   {
       if(s.size() != 0 && s.top() == '(' && a[i] == ')')
       {
           s.pop();
       }
       else
       {
           s.push(a[i]);
       }
   }
   
   if(s.size() == 0)
   {
       cout << "balanced";
   }
   else
   {
       cout << "Not Balanced";
   }
   
   return 0;
}