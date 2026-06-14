# 03 - Sorting

## Why Do We Need Sorting?

Imagine you have a list of exam scores:

```text
78 45 92 34 67 89
```

Finding the highest score, lowest score, or a particular score can be difficult when data is unordered.

Now imagine the same data sorted:

```text
34 45 67 78 89 92
```

Everything becomes easier.

Sorting is one of the most important operations in Computer Science and serves as the foundation for many advanced algorithms.

Applications of sorting:

* Organizing files and folders
* Ranking students by marks
* Displaying products by price
* Database indexing
* Search optimization
* Data analysis

---

# What is Sorting?

Sorting is the process of arranging data in a specific order.

Usually:

### Ascending Order

```text
10 20 30 40 50
```

### Descending Order

```text
50 40 30 20 10
```

---

# Types of Sorting Covered

In this chapter we will learn:

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Heap Sort

---

# Bubble Sort

## Real World Example

Imagine bubbles rising in water.

Larger bubbles rise to the top.

Similarly, larger elements move toward the end of the array after every pass.

---

## How Bubble Sort Works

Array:

```text
64 34 25 12
```

Pass 1:

```text
64 34 25 12

34 64 25 12

34 25 64 12

34 25 12 64
```

Largest element reaches its correct position.

---

## Approach

1. Compare adjacent elements.
2. Swap if they are in the wrong order.
3. Continue until the end.
4. Repeat for remaining elements.

---

## Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n)            |
| Average | O(n²)           |
| Worst   | O(n²)           |

Space Complexity:

```text
O(1)
```

---

# Selection Sort

## Real World Example

Imagine arranging books on a shelf.

You repeatedly find the smallest book and place it at the beginning.

---

## How Selection Sort Works

Array:

```text
64 25 12 22 11
```

Find minimum:

```text
11
```

Swap with first element:

```text
11 25 12 22 64
```

Repeat for remaining array.

---

## Approach

1. Assume current position contains minimum.
2. Search remaining array.
3. Find actual minimum.
4. Swap.
5. Repeat.

---

## Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n²)           |
| Average | O(n²)           |
| Worst   | O(n²)           |

Space Complexity:

```text
O(1)
```

---

# Insertion Sort

## Real World Example

Imagine sorting playing cards in your hand.

You pick one card at a time and insert it into its correct position.

---

## How Insertion Sort Works

Array:

```text
12 11 13 5 6
```

Insert:

```text
11
```

before:

```text
12
```

Result:

```text
11 12 13 5 6
```

Continue until all elements are placed correctly.

---

## Approach

1. Start from second element.
2. Store current element.
3. Shift larger elements right.
4. Insert element at correct position.
5. Repeat.

---

## Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n)            |
| Average | O(n²)           |
| Worst   | O(n²)           |

Space Complexity:

```text
O(1)
```

---

# Merge Sort

## Real World Example

Imagine splitting a large pile of papers into smaller piles.

Sort each small pile.

Merge them back together in order.

---

## Divide and Conquer

Merge Sort follows:

```text
Divide
↓
Conquer
↓
Merge
```

---

## Visualization

```text
38 27 43 3 9 82 10

        ↓

38 27 43      3 9 82 10

    ↓             ↓

38 27 | 43    3 9 | 82 10

        ↓

Merge Sorted Parts
```

---

## Approach

1. Divide array into halves.
2. Sort left half recursively.
3. Sort right half recursively.
4. Merge sorted halves.

---

## Complexity

Time Complexity:

```text
O(n log n)
```

Space Complexity:

```text
O(n)
```

---

# Quick Sort

## Real World Example

Imagine selecting a reference student in a class.

Place shorter students to the left.

Place taller students to the right.

Repeat.

---

## Pivot Concept

Quick Sort revolves around a:

```text
Pivot
```

Example:

```text
10 7 8 9 1 5
```

Pivot:

```text
5
```

After partition:

```text
1 5 10 7 8 9
```

Now sort both sides recursively.

---

## Approach

1. Choose pivot.
2. Place pivot correctly.
3. Partition remaining elements.
4. Sort left part.
5. Sort right part.

---

## Complexity

| Case    | Time Complexity |
| ------- | --------------- |
| Best    | O(n log n)      |
| Average | O(n log n)      |
| Worst   | O(n²)           |

Space Complexity:

```text
O(log n)
```

---

# Heap Sort

## Real World Example

Imagine repeatedly picking the tallest person from a group.

Each time the tallest is removed, the next tallest becomes available.

This is similar to Heap Sort.

---

## Heap Concept

Heap Sort uses:

```text
Max Heap
```

A Max Heap always keeps the largest element at the root.

Example:

```text
        90
       /  \
     50    40
    / \
   20 10
```

---

## Approach

1. Build Max Heap.
2. Move largest element to end.
3. Heapify remaining elements.
4. Repeat.

---

## Complexity

Time Complexity:

```text
O(n log n)
```

Space Complexity:

```text
O(1)
```

---

# Stable vs Unstable Sorting

## Stable Sorting

Maintains relative order of equal elements.

Examples:

* Bubble Sort
* Insertion Sort
* Merge Sort

Example:

```text
A(50) B(50)

After Sorting

A(50) B(50)
```

Order remains unchanged.

---

## Unstable Sorting

May change relative order.

Examples:

* Selection Sort
* Quick Sort
* Heap Sort

---

# In-Place vs Out-of-Place Sorting

## In-Place

Uses little extra memory.

Examples:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Quick Sort
* Heap Sort

Space Complexity:

```text
O(1)
```

or

```text
O(log n)
```

---

## Out-of-Place

Uses additional memory.

Example:

```text
Merge Sort
```

Space Complexity:

```text
O(n)
```

---

# Sorting Comparison Table

| Algorithm      | Best       | Average    | Worst      | Space    |
| -------------- | ---------- | ---------- | ---------- | -------- |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      | O(1)     |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)     |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) | O(1)     |

---

# Which Sorting Algorithm Should I Use?

| Scenario                | Preferred Algorithm    |
| ----------------------- | ---------------------- |
| Small Dataset           | Insertion Sort         |
| Nearly Sorted Data      | Insertion Sort         |
| Stable Sorting Required | Merge Sort             |
| General Purpose         | Quick Sort             |
| Guaranteed O(n log n)   | Merge Sort / Heap Sort |
| Memory Efficient        | Heap Sort              |

---

# Interview Tips

When solving interview problems, ask:

```text
Is the array already sorted?

Can sorting simplify the problem?

Do I need stable sorting?

Can I afford extra memory?
```

Sorting is often the first step in solving:

* Two Pointers
* Binary Search
* Greedy Problems
* Interval Problems
* Scheduling Problems

---

# Key Takeaways

* Sorting arranges data in a specific order.
* Bubble Sort repeatedly swaps adjacent elements.
* Selection Sort repeatedly selects the minimum element.
* Insertion Sort inserts elements into their correct position.
* Merge Sort uses Divide and Conquer.
* Quick Sort uses partitioning around a pivot.
* Heap Sort uses a Max Heap.
* O(n log n) sorting algorithms are generally preferred for large datasets.
* Sorting is one of the most important foundations of DSA.

---

## Next Topic

➡️ 04 - Arrays

