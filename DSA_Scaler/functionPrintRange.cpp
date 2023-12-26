/***************************************************************
* Data Structures in C++ - Functions
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

// Print range array
void printRange(int start, int end)
{
    while(start <= end)
    {
        cout << start << " ";
        start++;
    }
}

int main()
{
    int start = 10;
    int end = 20;
    
    printRange(10,20);
    
    return 0;
}