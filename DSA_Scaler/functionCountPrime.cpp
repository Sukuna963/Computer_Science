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

// Count Primes
void countPrime(int a[], int n )
{
    int prime_count = 0;
    
    for(int i = 0; i < n; i++)
    {
        int flag = checkPrime(a[i]);
        prime_count += flag;
    }
    
    cout << "The number of prime elements in array = " << prime_count << endl;
}

int main()
{
    int a[] = {2,4,9,8,13};
    //2
    
    int n = sizeof(a)/sizeof(a[0]);
    
    countPrime(a, n);
}