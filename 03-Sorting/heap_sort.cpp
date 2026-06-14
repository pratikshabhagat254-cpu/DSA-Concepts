/*
Problem:
Heap Sort

Description:
Build a Max Heap
and repeatedly move
largest element to end.

Approach:
1. Build Max Heap.
2. Swap root with last element.
3. Heapify remaining heap.
4. Repeat.

Time Complexity:
O(n log n)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void Heapify(
    vector<int>& numbers,
    int size,
    int root
) {

    int largest = root;

    int leftChild =
        2 * root + 1;

    int rightChild =
        2 * root + 2;

    if (
        leftChild < size &&
        numbers[leftChild]
        > numbers[largest]
    ) {

        largest = leftChild;
    }

    if (
        rightChild < size &&
        numbers[rightChild]
        > numbers[largest]
    ) {

        largest = rightChild;
    }

    if (largest != root) {

        swap(
            numbers[root],
            numbers[largest]
        );

        Heapify(
            numbers,
            size,
            largest
        );
    }
}

void HeapSort(
    vector<int>& numbers
) {

    int size =
        numbers.size();

    for (
        int index = size / 2 - 1;
        index >= 0;
        index--
    ) {

        Heapify(
            numbers,
            size,
            index
        );
    }

    for (
        int index = size - 1;
        index > 0;
        index--
    ) {

        swap(
            numbers[0],
            numbers[index]
        );

        Heapify(
            numbers,
            index,
            0
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
        12, 11, 13, 5, 6, 7
    };

    cout << "Before Sorting:\n";

    PrintArray(numbers);

    HeapSort(numbers);

    cout << "\nAfter Sorting:\n";

    PrintArray(numbers);

    return 0;
}