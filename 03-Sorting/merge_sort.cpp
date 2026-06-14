/*
Problem:
Merge Sort

Description:
Divide array into halves,
sort each half,
then merge them.

Approach:
1. Divide array.
2. Recursively sort left half.
3. Recursively sort right half.
4. Merge sorted halves.

Time Complexity:
O(n log n)

Space Complexity:
O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

void Merge(
    vector<int>& numbers,
    int left,
    int middle,
    int right
) {

    vector<int> temporary;

    int leftPointer = left;
    int rightPointer = middle + 1;

    while (
        leftPointer <= middle &&
        rightPointer <= right
    ) {

        if (
            numbers[leftPointer]
            <=
            numbers[rightPointer]
        ) {

            temporary.push_back(
                numbers[leftPointer]
            );

            leftPointer++;
        }

        else {

            temporary.push_back(
                numbers[rightPointer]
            );

            rightPointer++;
        }
    }

    while (leftPointer <= middle) {

        temporary.push_back(
            numbers[leftPointer]
        );

        leftPointer++;
    }

    while (rightPointer <= right) {

        temporary.push_back(
            numbers[rightPointer]
        );

        rightPointer++;
    }

    for (
        int index = left;
        index <= right;
        index++
    ) {

        numbers[index] =
            temporary[index - left];
    }
}

void MergeSort(
    vector<int>& numbers,
    int left,
    int right
) {

    if (left >= right) {

        return;
    }

    int middle =
        left + (right - left) / 2;

    MergeSort(
        numbers,
        left,
        middle
    );

    MergeSort(
        numbers,
        middle + 1,
        right
    );

    Merge(
        numbers,
        left,
        middle,
        right
    );
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
        38, 27, 43, 3, 9, 82, 10
    };

    cout << "Before Sorting:\n";

    PrintArray(numbers);

    MergeSort(
        numbers,
        0,
        numbers.size() - 1
    );

    cout << "\nAfter Sorting:\n";

    PrintArray(numbers);

    return 0;
}