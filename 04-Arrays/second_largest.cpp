/*
Problem:
Second Largest Element

Approach:
Maintain largest and
second largest values
while traversing once.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int SecondLargest(
    const vector<int>& numbers
) {

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int value : numbers) {

        if (value > largest) {

            secondLargest =
                largest;

            largest = value;
        }

        else if (
            value > secondLargest &&
            value != largest
        ) {

            secondLargest = value;
        }
    }

    return secondLargest;
}

int main() {

    vector<int> numbers = {
        10, 95, 30, 45, 20
    };

    cout
        << SecondLargest(numbers)
        << endl;

    return 0;
}