# 04 - Arrays

## Why Do We Need Arrays?

Imagine you are storing marks of 100 students.

Instead of creating:

```cpp
int mark1;
int mark2;
int mark3;
...
```

you can store all values in a single structure:

```cpp
int marks[100];
```

Arrays help us store and access large amounts of related data efficiently.

They are one of the most fundamental data structures and form the foundation for many advanced DSA topics.

Applications of Arrays:

* Student records
* Product catalogs
* Leaderboards
* Game scores
* Image processing
* Database indexing

---

# What is an Array?

An Array is a collection of elements stored in contiguous memory locations.

Example:

```text
Index:  0   1   2   3   4

Array: 10  20  30  40  50
```

Each element can be accessed using its index.

Example:

```cpp
numbers[2]
```

Output:

```text
30
```

---

# Why Are Arrays Important?

Arrays appear everywhere in DSA.

Many advanced problems are actually array problems disguised in different forms.

Learning arrays properly helps in:

* Two Pointers
* Sliding Window
* Prefix Sum
* Hashing
* Binary Search
* Dynamic Programming

---

# Largest Element in Array

## Problem

Find the maximum element in an array.

Example:

```text
10 95 30 45 20
```

Output:

```text
95
```

---

## Approach

Traverse the array while maintaining the largest value seen so far.

### Visualization

```text
Largest = 10

95 > 10
Largest = 95

30 < 95

45 < 95

20 < 95
```

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Second Largest Element

## Problem

Find the second largest distinct element.

Example:

```text
10 95 30 45 20
```

Output:

```text
45
```

---

## Approach

Maintain:

```text
Largest
Second Largest
```

while traversing the array only once.

### Visualization

```text
Largest = 95

Second Largest = 45
```

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Reverse Array

## Problem

Reverse all elements of an array.

Example:

```text
10 20 30 40 50
```

Output:

```text
50 40 30 20 10
```

---

## Approach

Use Two Pointers.

```text
Left Pointer
↓

10 20 30 40 50

            ↑
      Right Pointer
```

Swap both elements and move inward.

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Check Sorted Array

## Problem

Determine whether an array is sorted in ascending order.

Example:

```text
10 20 30 40 50
```

Output:

```text
Sorted
```

---

## Approach

Compare every element with the next element.

If:

```text
Current > Next
```

the array is not sorted.

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Prefix Sum

## Why Prefix Sum?

Suppose we want the sum of:

```text
Index 2 to Index 6
```

Without Prefix Sum:

```text
Add every element again.
```

With Prefix Sum:

```text
Answer in O(1)
```

after preprocessing.

---

## Example

Array:

```text
2 4 6 8 10
```

Prefix Sum:

```text
2 6 12 20 30
```

Explanation:

```text
2

2 + 4 = 6

2 + 4 + 6 = 12

2 + 4 + 6 + 8 = 20

2 + 4 + 6 + 8 + 10 = 30
```

---

## Complexity

Building Prefix Sum:

```text
O(n)
```

Range Query:

```text
O(1)
```

---

# Frequency Count

## Problem

Count how many times each element appears.

Example:

```text
1 2 2 3 1 2
```

Output:

```text
1 → 2

2 → 3

3 → 1
```

---

## Approach

Use a Hash Map.

Store:

```text
Element → Frequency
```

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(n)
```

---

# Rotate Array

## Left Rotation

Example:

```text
1 2 3 4 5
```

Output:

```text
2 3 4 5 1
```

---

## Right Rotation

Example:

```text
1 2 3 4 5
```

Output:

```text
5 1 2 3 4
```

---

## Why Important?

Array rotation is a very common interview problem.

It introduces:

* Index Manipulation
* Modulo Arithmetic
* Reversal Technique

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Move Zeroes

## Problem

Move all zeroes to the end while maintaining the relative order of non-zero elements.

Example:

```text
0 1 0 3 12
```

Output:

```text
1 3 12 0 0
```

---

## Approach

Use Two Pointers.

Place all non-zero elements first.

Fill remaining positions with zeroes.

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Remove Duplicates From Sorted Array

## Problem

Remove duplicate values from a sorted array.

Example:

```text
1 1 2 2 3 4 4
```

Output:

```text
1 2 3 4
```

---

## Approach

Use Two Pointers.

Maintain:

```text
Unique Index
```

and place unique values at the beginning.

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Kadane's Algorithm

## Why Is It Important?

One of the most famous array algorithms.

Used to find:

```text
Maximum Subarray Sum
```

---

## Example

Array:

```text
-2 1 -3 4 -1 2 1 -5 4
```

Maximum Subarray:

```text
4 -1 2 1
```

Sum:

```text
6
```

---

## Approach

Maintain:

```text
Current Sum
Maximum Sum
```

If Current Sum becomes negative:

```text
Start New Subarray
```

---

## Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

# Common Array Patterns

Many interview problems are based on these patterns:

| Pattern            | Examples                   |
| ------------------ | -------------------------- |
| Traversal          | Largest Element            |
| Two Pointers       | Reverse Array, Move Zeroes |
| Prefix Sum         | Range Sum Queries          |
| Hashing            | Frequency Count            |
| Sliding Window     | Maximum Sum Problems       |
| Kadane's Algorithm | Maximum Subarray Sum       |

---

# Complexity Cheat Sheet

| Concept            | Time | Space |
| ------------------ | ---- | ----- |
| Largest Element    | O(n) | O(1)  |
| Second Largest     | O(n) | O(1)  |
| Reverse Array      | O(n) | O(1)  |
| Check Sorted       | O(n) | O(1)  |
| Prefix Sum         | O(n) | O(n)  |
| Frequency Count    | O(n) | O(n)  |
| Rotate Array       | O(n) | O(1)  |
| Move Zeroes        | O(n) | O(1)  |
| Remove Duplicates  | O(n) | O(1)  |
| Kadane's Algorithm | O(n) | O(1)  |

---

# Interview Tips

When solving array problems, ask yourself:

```text
Can Two Pointers help?

Can Prefix Sum help?

Can Hashing help?

Can Sliding Window help?

Can Kadane's Algorithm help?
```

Most medium-level array problems are based on these patterns.

---

# Key Takeaways

* Arrays store elements in contiguous memory.
* Array problems form the foundation of DSA.
* Prefix Sum optimizes range queries.
* Hashing helps with frequency counting.
* Two Pointers simplify many array problems.
* Kadane's Algorithm solves Maximum Subarray Sum efficiently.
* Arrays are heavily used in coding interviews and competitive programming.

---

## Next Topic

➡️ 05 - Strings
