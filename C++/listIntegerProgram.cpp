/***************************************************************
* Author: Leonardo Marques
* Beginning C++ Programming - From Beginner to Beyond
* Udemy
***************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char choice;
    vector<int> numbers;
    
    do 
    {
        cout << "------------------------------------------------------------------" << endl;
        cout << "\t P - Print numbers" << endl;
        cout << "\t A - Add a number" << endl;
        cout << "\t M - Display mean of the number" << endl;
        cout << "\t S - Display the smallest number" << endl;
        cout << "\t L - Display the largest number" << endl;
        cout << "\t Q - Quit" << endl;
        cout << "------------------------------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch((char)tolower(choice)) 
        {
            
            case 'p':
                if(numbers.empty()) 
                {
                    cout << "[] - the list is empty" << endl;
                    
                } 
                else 
                {
                    cout << "[ ";
                    for(auto n : numbers) {
                        cout << n << " ";
                    }
                    cout << "]";
                    cout << endl;
                }
                break;
                
            case 'a':
                int new_number;
                cout << "Add a number for list: ";
                cin >> new_number;
                
                numbers.push_back(new_number);
                cout << new_number<<" added" << endl;
                break;
                
            case 'm':
                if(numbers.empty()) 
                {
                    cout << "Unable to calculate the mean - no data" << endl;
                    
                } 
                else 
                {
                    int sum;
                    for(auto n : numbers) 
                    {
                        sum += n;
                    }
                    
                    cout << "Mean: " << (float)sum/numbers.size() << endl;
                }
                break;
                
            case 's':
                if (numbers.empty()) 
                {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                    
                } 
                else 
                {
                    int smallest{};
                    for(int i = 0; i < numbers.size()-1; i++) 
                    {
                        if(numbers.at(i) < numbers.at(i+1))
                         {
                            smallest = numbers.at(i);
                        } 
                        else 
                        {
                            smallest = numbers.at(i+1);
                        }
                    }
                    
                    cout << "The smallest number is: " << smallest << endl;
                }
                break;
                
            case 'l':
                if (numbers.empty()) 
                {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                    
                } 
                else 
                {
                    int largest{};
                    for(int i = 0; i < numbers.size()-1; i++) 
                    {
                        if(numbers.at(i) > numbers.at(i+1)) 
                        {
                            largest = numbers.at(i);
                        } 
                        else 
                        {
                            largest = numbers.at(i+1);
                        }
                    }
                    
                    cout << "The largest number is: " << largest << endl;
                }
                break;
                
            case 'q':
                cout << "Goodbye..." << endl;
        }
        
    } while((char)tolower(choice) != 'q');
}