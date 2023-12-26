/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Print sum natural numbers
int printSum(int n)
{
    int sum = 0; //initialization
    
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
    //sum of all the natural numbers from 1 to n => n*(n+1)/2
}

int main()
{
    int n = 7;
    
    cout << "The sum = " << printSum(n);
}