/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Check if prime
int checkPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int n = 8;
    
    int flag = checkPrime(n);
    
    if(flag == 1)
    {
        cout << "Prime number";
    }
    else
    {
        cout << n << " is Not a prime number";
    }
}