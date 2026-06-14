/*
Problem:
Linear Search

Description:
Search for a target element
by checking each element
one by one.

Approach:
Traverse the array from
left to right.

If target is found,
return its index.

Otherwise return -1.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

int LinearSearch(
    const vector<int>& numbers,
    int target
) {

    for (int index = 0;
         index < numbers.size();
         index++) {

        if (numbers[index] == target) {

            return index;
        }
    }

    return -1;
}

int main() {

    vector<int> numbers = {
        10, 20, 30, 40, 50
    };

    int target = 40;

    int result = LinearSearch(
        numbers,
        target
    );

    cout << "Index: "
         << result
         << endl;

    return 0;
}