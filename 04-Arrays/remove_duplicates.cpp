/*
Problem:
Remove Duplicates
From Sorted Array

Approach:
Use two pointers.
Maintain unique elements
at the beginning.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int RemoveDuplicates(
    vector<int>& numbers
) {

    if (numbers.empty()) {

        return 0;
    }

    int uniqueIndex = 0;

    for (
        int index = 1;
        index < numbers.size();
        index++
    ) {

        if (
            numbers[index]
            !=
            numbers[uniqueIndex]
        ) {

            uniqueIndex++;

            numbers[uniqueIndex] =
                numbers[index];
        }
    }

    return uniqueIndex + 1;
}

int main() {

    vector<int> numbers = {
        1, 1, 2, 2, 3, 4, 4
    };

    int length =
        RemoveDuplicates(
            numbers
        );

    cout
        << "Unique Elements: "
        << length;

    return 0;
}