/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Sum of digits
int main()
{
    // 2+0+0+1 = 3
    int number = 2001;
    int sum = 0;
    int n = number;
    
    while(n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    
    cout << "The sum of all the digits of the number " << number << " is = " << sum << endl;
}