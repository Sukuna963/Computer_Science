/***************************************************************
* Author: Leonardo Marques
* Beginning C++ Programming - From Beginner to Beyond
* Udemy
***************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    cout << "\t\t\tHello" << endl;
    cout <<"\tWelcome, Frank's Carpet Cleaning Service\n" << endl;

    cout << "How many small rooms would you like cleaned? ";
    int small_room;
    cin >> small_room;
    cout << "How many large rooms would you like cleaned? ";
    int large_room;
    cin >> large_room;

    cout << "\nEstimate for carpet cleaning service\n" << endl;

    const double cost_small_room {25.00};
    const double cost_large_room {35.00};
    const double tax {0.06};
    const int estimate_day {30};

    cout << "Number of small rooms: " << small_room << endl;
    cout << "Number of large rooms: " << large_room << endl;
    cout << "Price per small room: " << cost_small_room << endl;
    cout << "Price per large room: " << cost_large_room << endl;
    cout << "Cost: $" << (small_room * cost_small_room) + (large_room * cost_large_room) << endl;
    cout << "Tax: $" << ((small_room * cost_small_room) + (large_room * cost_large_room)) * tax << endl;

    cout << "=============================================================" << endl;
    cout << "Total estimate: $" << ((small_room * cost_small_room) + (large_room * cost_large_room)) + 
                                    (((small_room * cost_small_room) + (large_room * cost_large_room))* tax) << endl;

    cout << "This estimate is valid for " << estimate_day << " days";

    return 0;
}