/***************************************************************
* Data Structures in C++ - Heaps
* Scaler
***************************************************************/

#include <iostream>
#include <queue>

using namespace std;

// Profit maximization
int main()
{
    int a[] = {1,3,7,10,2}; //output: 9 + 7 = 17
    int b = 2;
    
    priority_queue<int> max_heap;
    
    for(auto val : a)
    {
        max_heap.push(val);
    }
    
    int sum = 0;
    
    while(b != 0)
    {
        // max element present among currenly present elements
        sum += max_heap.top();
        max_heap.pop();
        b--;
    }
    
    cout << "Maximum profit = " << sum << endl;
    
    return 0;
}