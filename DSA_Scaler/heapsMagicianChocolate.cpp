/***************************************************************
* Data Structures in C++ - Heaps
* Scaler
***************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int bag[] = {1,5,7,80}; //output: 80 + 40 + 20 = 140
    int a = 3;
    
    int chocolate = 0;
    
    priority_queue<int> max_heap;
    
    for(auto i : bag)
    {
        max_heap.push(i);
    }
    
    int curr = -1;
    
    while(a != 0)
    {
        curr = max_heap.top();
        chocolate += curr;
        max_heap.pop();
        max_heap.push(curr/2);
        a--;
    }
    
    cout << "The maximum number of chocolate = " << chocolate << endl;
    
    return 0;
}