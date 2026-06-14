/*
Problem:
Rotate Array Right By One

Approach:
Store last element,
shift elements right,
place last element at start.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void RotateRight(
    vector<int>& numbers
) {

    int last =
        numbers.back();

    for (
        int index =
        numbers.size() - 2;
        index >= 0;
        index--
    ) {

        numbers[index + 1] =
            numbers[index];
    }

    numbers[0] = last;
}

int main() {

    vector<int> numbers = {
        1, 2, 3, 4, 5
    };

    RotateRight(numbers);

    for (int value : numbers) {

        cout << value << " ";
    }

    return 0;
}