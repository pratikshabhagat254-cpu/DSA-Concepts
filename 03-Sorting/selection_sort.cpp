/*
Problem:
Selection Sort

Description:
Find the smallest element
from the unsorted portion
and place it at its correct
position.

Approach:
1. Assume current index is minimum.
2. Search remaining array.
3. Find actual minimum.
4. Swap with current index.
5. Repeat.

Time Complexity:
Worst Case  : O(n²)
Average Case: O(n²)
Best Case   : O(n²)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int>& numbers) {

    int size = numbers.size();

    for (int current = 0;
         current < size - 1;
         current++) {

        int minimumIndex = current;

        for (int index = current + 1;
             index < size;
             index++) {

            if (numbers[index]
                < numbers[minimumIndex]) {

                minimumIndex = index;
            }
        }

        swap(
            numbers[current],
            numbers[minimumIndex]
        );
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
        64, 25, 12, 22, 11
    };

    cout << "Before Sorting:\n";

    PrintArray(numbers);

    SelectionSort(numbers);

    cout << "\nAfter Sorting:\n";

    PrintArray(numbers);

    return 0;
}