/***************************************************************
* Data Structures in C++ - 1D Array
* Scaler
***************************************************************/

#include <iostream>

using namespace std;

//Even element
int main()
{
    int a[7] = {4,1,7,5,10,11,15}; //2
    
    int count = 0;
    
    for(int i = 0; i < 7; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }
    
    cout << "The number of even elements = " << count << endl;

    return 0;
}