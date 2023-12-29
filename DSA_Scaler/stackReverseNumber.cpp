/***************************************************************
* Data Structures in C++ - Stacks
* Scaler
***************************************************************/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
   stack<int> st;
   
   int n = 743124;
   //output: 421347
   
   int digit = 0;
   while(n != 0)
   {
       digit = n % 10;
       st.push(digit);
       
       n /= 10;
   }
   
   int n_reverse = 0;
   int multiplier = 1;
   int temp = 0;
   
   while(!st.empty())
   {
       digit = st.top();
       st.pop();
       temp = digit * multiplier;
       n_reverse += temp;
       multiplier = multiplier * 10;
   }
   
   cout << "The reverse of the given number is " << n_reverse;
    
    return 0;
}