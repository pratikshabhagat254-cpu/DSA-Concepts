/*
Problem:
Binary Search

Description:
Search a target element
inside a sorted array.

Approach:
Compare target with middle element.

Discard half of the array
after every comparison.

Time Complexity:
O(log n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(
    const vector<int>& numbers,
    int target
) {

    int left = 0;

    int right =
        numbers.size() - 1;

    while (left <= right) {

        int middle =
            left + (right - left) / 2;

        if (numbers[middle]
            == target) {

            return middle;
        }

        if (numbers[middle]
            < target) {

            left = middle + 1;
        }

        else {

            right = middle - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> numbers = {
        10, 20, 30, 40, 50
    };

    int target = 40;

    int result =
        BinarySearch(
            numbers,
            target
        );

    cout << "Index: "
         << result
         << endl;

    return 0;
}