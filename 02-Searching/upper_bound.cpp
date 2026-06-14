/*
Problem:
Upper Bound

Description:
Find the first element
strictly greater than target.

Approach:
Modified Binary Search.

Time Complexity:
O(log n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int UpperBound(
    const vector<int>& numbers,
    int target
) {

    int left = 0;

    int right =
        numbers.size();

    while (left < right) {

        int middle =
            left + (right - left) / 2;

        if (numbers[middle]
            <= target) {

            left = middle + 1;
        }

        else {

            right = middle;
        }
    }

    return left;
}

int main() {

    vector<int> numbers = {
        10, 20, 20, 30, 40
    };

    int target = 20;

    cout
        << UpperBound(
               numbers,
               target
           )
        << endl;

    return 0;
}