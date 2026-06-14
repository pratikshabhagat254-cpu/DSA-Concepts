/*
Problem:
Insertion Sort

Description:
Build the sorted array
one element at a time.

Approach:
1. Start from second element.
2. Store current element.
3. Shift larger elements right.
4. Insert element at correct position.
5. Repeat.

Time Complexity:
Worst Case  : O(n²)
Average Case: O(n²)
Best Case   : O(n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(
    vector<int>& numbers
) {

    int size = numbers.size();

    for (int index = 1;
         index < size;
         index++) {

        int currentValue =
            numbers[index];

        int previous =
            index - 1;

        while (
            previous >= 0 &&
            numbers[previous]
            > currentValue
        ) {

            numbers[previous + 1] =
                numbers[previous];

            previous--;
        }

        numbers[previous + 1] =
            currentValue;
    }
}

void PrintArray(
    const vector<int>& numbers
) {

    for (int value : numbers) {

        cout << value << " ";
    }

    cout << endl;
}

int main() {

    vector<int> numbers = {
        12, 11, 13, 5, 6
    };

    cout << "Before Sorting:\n";

    PrintArray(numbers);

    InsertionSort(numbers);

    cout << "\nAfter Sorting:\n";

    PrintArray(numbers);

    return 0;
}