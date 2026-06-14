/*
Problem:
Rotate Array Left By One

Approach:
Store first element,
shift remaining elements,
place first element at end.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void RotateLeft(
    vector<int>& numbers
) {

    int first =
        numbers[0];

    for (
        int index = 1;
        index < numbers.size();
        index++
    ) {

        numbers[index - 1] =
            numbers[index];
    }

    numbers.back() = first;
}

int main() {

    vector<int> numbers = {
        1, 2, 3, 4, 5
    };

    RotateLeft(numbers);

    for (int value : numbers) {

        cout << value << " ";
    }

    return 0;
}