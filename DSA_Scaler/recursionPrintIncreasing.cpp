/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void printIncreasing(int current, int n)
{
    //base condition
    if(current == n+1)
    {
        return;
    }
    
    //task
    cout << current << " ";
    
    //recursion call
    printIncreasing(current+1, n);
}

int main()
{
    int n = 7;
    int current = 1;
    
    printIncreasing(current,n);
    
    return 0;
}