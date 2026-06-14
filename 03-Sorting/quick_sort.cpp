/*
Problem:
Quick Sort

Description:
Choose a pivot,
place it in correct position,
sort remaining parts.

Approach:
1. Choose last element as pivot.
2. Place pivot correctly.
3. Recursively sort left part.
4. Recursively sort right part.

Time Complexity:
Average : O(n log n)
Worst   : O(n²)

Space Complexity:
O(log n)
*/

#include <iostream>
#include <vector>

using namespace std;

int Partition(
    vector<int>& numbers,
    int low,
    int high
) {

    int pivot =
        numbers[high];

    int smallerIndex =
        low - 1;

    for (
        int index = low;
        index < high;
        index++
    ) {

        if (
            numbers[index]
            < pivot
        ) {

            smallerIndex++;

            swap(
                numbers[smallerIndex],
                numbers[index]
            );
        }
    }

    swap(
        numbers[smallerIndex + 1],
        numbers[high]
    );

    return smallerIndex + 1;
}

void QuickSort(
    vector<int>& numbers,
    int low,
    int high
) {

    if (low < high) {

        int pivotIndex =
            Partition(
                numbers,
                low,
                high
            );

        QuickSort(
            numbers,
            low,
            pivotIndex - 1
        );

        QuickSort(
            numbers,
            pivotIndex + 1,
            high
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
        10, 7, 8, 9, 1, 5
    };

    cout << "Before Sorting:\n";

    PrintArray(numbers);

    QuickSort(
        numbers,
        0,
        numbers.size() - 1
    );

    cout << "\nAfter Sorting:\n";

    PrintArray(numbers);

    return 0;
}