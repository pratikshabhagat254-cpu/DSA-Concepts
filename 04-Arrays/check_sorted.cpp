/*
Problem:
Check If Array Is Sorted

Approach:
Compare adjacent elements.
If current element is greater
than the next element,
array is not sorted.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

bool IsSorted(
    const vector<int>& numbers
) {

    for (
        int index = 0;
        index < numbers.size() - 1;
        index++
    ) {

        if (
            numbers[index]
            >
            numbers[index + 1]
        ) {

            return false;
        }
    }

    return true;
}

int main() {

    vector<int> numbers = {
        10, 20, 30, 40, 50
    };

    if (IsSorted(numbers)) {

        cout << "Sorted";
    }

    else {

        cout << "Not Sorted";
    }

    return 0;
}