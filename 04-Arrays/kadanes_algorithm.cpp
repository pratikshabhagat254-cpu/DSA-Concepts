/*
Problem:
Maximum Subarray Sum

Approach:
Maintain current sum.
If current sum becomes negative,
start a new subarray.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int KadanesAlgorithm(
    const vector<int>& numbers
) {

    int currentSum = 0;

    int maximumSum =
        numbers[0];

    for (
        int value :
        numbers
    ) {

        currentSum =
            max(
                value,
                currentSum + value
            );

        maximumSum =
            max(
                maximumSum,
                currentSum
            );
    }

    return maximumSum;
}

int main() {

    vector<int> numbers = {
        -2, 1, -3, 4,
        -1, 2, 1, -5, 4
    };

    cout
        << KadanesAlgorithm(
               numbers
           );

    return 0;
}