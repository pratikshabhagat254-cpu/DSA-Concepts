/*
Problem:
Prefix Sum

Approach:
Store cumulative sums so that
range sum queries can be answered
efficiently.

Time Complexity:
O(n)

Space Complexity:
O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> BuildPrefixSum(
    const vector<int>& numbers
) {

    vector<int> prefix(
        numbers.size()
    );

    prefix[0] = numbers[0];

    for (
        int index = 1;
        index < numbers.size();
        index++
    ) {

        prefix[index] =
            prefix[index - 1]
            + numbers[index];
    }

    return prefix;
}

int main() {

    vector<int> numbers = {
        2, 4, 6, 8, 10
    };

    vector<int> prefix =
        BuildPrefixSum(numbers);

    for (int value : prefix) {

        cout << value << " ";
    }

    return 0;
}