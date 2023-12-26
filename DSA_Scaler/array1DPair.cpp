/***************************************************************
* Data Structures in C++ - 1D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Pairs with sum
int main()
{
    int a[7] = {4,1,7,5,10,11,15}; // 2
    
    int value = 12;
    int count = 0;
    
    //pick the first element of the pairs
    for(int i = 0; i < 7; i++)
    {
        //to pick the 2nd element of the pair along with a[i] 
        for(int j = i+1; j < 7; j++)
        {
            if(a[i] + a[j] == value)
            {
                count++;
            }
        }
    }
    
    cout << "The count of pairs having sum as " << value << " is = " << count << endl;
    return 0;
}
