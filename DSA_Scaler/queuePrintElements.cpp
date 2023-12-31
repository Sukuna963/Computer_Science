/***************************************************************
* Data Structures in C++ - Queue
* Scaler
***************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    int a[] = {1,2,3,7,4};
    
    queue<int> q;
    
    for(int i=0; i < 5; i++)
    {
        q.push(a[i]);
    }
    
    cout << "The element of the queue are: ";
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}