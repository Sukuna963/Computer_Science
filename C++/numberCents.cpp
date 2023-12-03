/***************************************************************
* Author: Leonardo Marques
* Beginning C++ Programming - From Beginner to Beyond
* Udemy
***************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int amount_cents {};

    cout << "Enter an amount in cents: ";
    cin >> amount_cents;

    cout << endl;

    if(amount_cents >= 0) 
    {
        cout << "You can provide change for this change as follows: " << endl;
        cout << "dollar: " << amount_cents / 100 << endl;
        amount_cents = amount_cents % 100;
        cout << "quarters: " << amount_cents / 25 << endl;
        amount_cents = amount_cents % 25;
        cout << "dimes: " << amount_cents / 10 << endl;
        amount_cents = amount_cents % 10;
        cout << "nickel: " << amount_cents / 5 << endl;
        amount_cents = amount_cents % 5;
        cout << "penny: " << amount_cents / 1 << endl;
    }

    return 0;
}