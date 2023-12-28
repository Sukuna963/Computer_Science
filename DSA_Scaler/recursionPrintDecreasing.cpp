/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

void printRecursive(int n)
{
    //base condition
    if(n == 0)
    {
        return;
    }
    
    //task
    cout << n << " ";
    
    //recursive call
    printRecursive(n-1);
}

int main()
{
    int n = 7;
    
    printRecursive(n);
    
    return 0;
}