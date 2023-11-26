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
    vector <int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nVector1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The vector1 contains " << vector1.size() << " elements" << endl;

    vector <int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVector2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The vector2 contains " << vector2.size() << " elements" << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nVector 2D" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "The vector2 contains " << vector_2d.size() << " elements" << endl;

    cout << "*****************************************************************" << endl;

    vector1.at(0) = 1000;

    cout << "Vector 2D Modified" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "The vector2 contains " << vector_2d.size() << " elements" << endl;

    cout << "\nVector1 Modified" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The vector1 contains " << vector1.size() << " elements" << endl;

}