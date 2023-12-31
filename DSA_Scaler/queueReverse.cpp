/***************************************************************
* Data Structures in C++ - Queue
* Scaler
***************************************************************/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() 
{
    int a[] = {1,4,5,8,2};
    
    stack<int> s1;
    for(int i=0; i < 5; i++)
    {
        s1.push(a[i]);
    }
    
    queue<int> s2;
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    
    cout << "The elements of the given array in FIFO order are: " << endl;
    while(!s2.empty())
    {
        cout << s2.front() << " ";
        s2.pop();
    }
    
    return 0;
}