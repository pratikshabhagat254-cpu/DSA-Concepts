/*
Problem:
Frequency Count

Approach:
Use a hash map to count
occurrences of each element.

Time Complexity:
O(n)

Space Complexity:
O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    vector<int> numbers = {
        1, 2, 2, 3, 1, 2
    };

    unordered_map<int, int>
        frequency;

    for (int value : numbers) {

        frequency[value]++;
    }

    for (
        auto element :
        frequency
    ) {

        cout
            << element.first
            << " -> "
            << element.second
            << endl;
    }

    return 0;
}