/***************************************************************
* Data Structures in C++ - Recursion
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    //base condition
    if(n == 1)
    {
        return 1;
    }
    
    if(n == 2)
    {
        return 1;
    }
    
    //recursive call
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    // Fibonacci series = 1, 1, 2, 3, 5, -> 8 <-, 13 ...
    int n = 6;
    
    cout << "The " << n << "th term of the Fibonacci series is = " << fibonacci(n);
    
    return 0;
}