/*
Problem:
Largest Element in Array

Approach:
Traverse the array while
tracking the maximum value.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int LargestElement(
    const vector<int>& numbers
) {

    int largest =
        numbers[0];

    for (int value : numbers) {

        if (value > largest) {

            largest = value;
        }
    }

    return largest;
}

int main() {

    vector<int> numbers = {
        10, 95, 30, 45, 20
    };

    cout
        << LargestElement(numbers)
        << endl;

    return 0;
}