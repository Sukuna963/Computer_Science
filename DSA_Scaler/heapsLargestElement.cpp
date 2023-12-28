/***************************************************************
* Data Structures in C++ - Heaps
* Scaler
***************************************************************/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int a[] = {1,44,5,7,99};
    int b = 3;

    //output b = 3 : 7 44 99

    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    for(auto i : a)
    {
        if(min_heap.size() < b)
        {
            min_heap.push(i);
        }
        else if(min_heap.top() < i)
        {
            min_heap.pop();
            min_heap.push(i);
        }
    }
    
    while(min_heap.size() != 0)
    {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }

    return 0;
}