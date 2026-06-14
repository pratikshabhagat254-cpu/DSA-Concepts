/*
Problem:
Move Zeroes

Approach:
Use two pointers.
Place non-zero elements first,
fill remaining positions with zeroes.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void MoveZeroes(
    vector<int>& numbers
) {

    int position = 0;

    for (
        int value :
        numbers
    ) {

        if (value != 0) {

            numbers[position++] =
                value;
        }
    }

    while (
        position <
        numbers.size()
    ) {

        numbers[position++] = 0;
    }
}

int main() {

    vector<int> numbers = {
        0, 1, 0, 3, 12
    };

    MoveZeroes(numbers);

    for (int value : numbers) {

        cout << value << " ";
    }

    return 0;
}