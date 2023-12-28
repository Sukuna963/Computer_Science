/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

int factorial(int n)
{
    //base condition
    if(n == 0)
    {
        return 1;
    }
    
    //recursive call
    return n * factorial(n-1);
}

int main()
{
    int n = 5; 
    
    cout << "The factorial of number " << n;
    cout << " is = " << factorial(n);
    
    return 0;
}