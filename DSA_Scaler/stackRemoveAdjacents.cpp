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
   string s = "abbaca";
   
   stack<char> stack1;
   
   for(char c : s)
   {
       if(!stack1.empty() && stack1.top() == c)
       {
           stack1.pop();
       }
       else
       {
           stack1.push(c);
       }
   }
   
   stack<char> stack2;
   
   string ans = "";
   char c;
    
   while(!stack1.empty())
   {
       c = stack1.top();
       stack1.pop();
       stack2.push(c);
   }
   
   while(!stack2.empty())
   {
       ans += stack2.top();
       stack2.pop();
   }
   
   cout << "The reverse of the string " << s << " is " << ans;
   
   return 0;
}