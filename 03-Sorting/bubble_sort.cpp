/*
Problem:
Bubble Sort

Description:
Repeatedly compare adjacent
elements and swap them
if they are in the wrong order.

Largest element moves to
its correct position after
every pass.

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

void BubbleSort(
    vector<int>& numbers
) {

    int size = numbers.size();

    bool swapped;

    for (int pass = 0;
         pass < size - 1;
         pass++) {

        swapped = false;

        for (int index = 0;
             index < size - pass - 1;
             index++) {

            /* Compare adjacent elements */

            if (numbers[index]
                >
                numbers[index + 1]) {

                /* Swap elements */

                swap(
                    numbers[index],
                    numbers[index + 1]
                );

                swapped = true;
            }
        }

        /* Array already sorted */

        if (!swapped) {

            break;
        }
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
        64, 34, 25, 12, 22, 11, 90
    };

    cout << "Before Sorting:" << endl;

    PrintArray(numbers);

    BubbleSort(numbers);

    cout << "\nAfter Sorting:" << endl;

    PrintArray(numbers);

    return 0;
}