/*
Problem:
Reverse Array

Approach:
Use two pointers.
Swap elements from both ends
until pointers meet.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void ReverseArray(
    vector<int>& numbers
) {

    int left = 0;

    int right =
        numbers.size() - 1;

    while (left < right) {

        swap(
            numbers[left],
            numbers[right]
        );

        left++;
        right--;
    }
}

int main() {

    vector<int> numbers = {
        10, 20, 30, 40, 50
    };

    ReverseArray(numbers);

    for (int value : numbers) {

        cout << value << " ";
    }

    return 0;
}