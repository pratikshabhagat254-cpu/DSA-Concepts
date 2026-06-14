/*
Problem:
Lower Bound

Description:
Find the first position
where target can be inserted
without disturbing sorting.

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

int LowerBound(
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
            < target) {

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
        << LowerBound(
               numbers,
               target
           )
        << endl;

    return 0;
}