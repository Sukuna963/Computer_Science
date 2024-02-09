#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int> numbers;
    int number{};

    for (size_t i = 0; i < 3; i++)
    {
        cin >> number;
        numbers.push_back(number);
    }

    int sum{};
    for (size_t i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }

    cout << sum;

    return 0;
}