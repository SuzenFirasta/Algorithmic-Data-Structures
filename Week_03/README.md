# Week 3: Sorting Algorithms and String Matching

## Overview

In Week 3, we explore fundamental algorithms in computer science, focusing on sorting techniques and string matching. The understanding and implementation of these algorithms are crucial for various applications, ranging from data organization to searching within texts.

### Contents

- **Bubble Sort**
  - `bubbleSort.cpp`
- **Matrix Multiplication**
  - `matrixMul.cpp`
- **Selection Sort**
  - `selectionSort.cpp`
- **String Matching**
  - `stringMatch.cpp`

---

## 1. Bubble Sort

**File**: `bubbleSort.cpp`

**Concept**:
Bubble Sort is one of the simplest sorting algorithms. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

**Key Points**:
- **Time Complexity**: O(n^2) in the worst and average cases, where n is the number of elements.
- **Efficiency**: Bubble Sort is not suitable for large datasets as its average and worst-case time complexity is quite high.

**How It Works**:
- The algorithm starts at the beginning of the array and compares the first two elements.
- If the first element is greater than the second, they are swapped.
- The process continues for each pair of adjacent elements to the end of the array.
- The largest element "bubbles" to the top, and the algorithm repeats the process for the remaining elements.

---

## 2. Matrix Multiplication

**File**: `matrixMul.cpp`

**Concept**:
Matrix multiplication is a fundamental operation in many scientific computations. Given two matrices, the product is calculated by taking the dot product of rows from the first matrix and columns from the second matrix.

**Key Points**:
- **Time Complexity**: O(m * n * p) where m is the number of rows in the first matrix, n is the number of columns in the first matrix (and rows in the second), and p is the number of columns in the second matrix.
- **Application**: This operation is widely used in computer graphics, machine learning algorithms, and physics simulations.

**How It Works**:
- Each element in the resulting matrix is calculated as the sum of the products of corresponding elements from the row of the first matrix and the column of the second matrix.
- The algorithm ensures that the dimensions of the matrices are compatible for multiplication before proceeding.

---

## 3. Selection Sort

**File**: `selectionSort.cpp`

**Concept**:
Selection Sort is an in-place comparison-based sorting algorithm. It works by repeatedly selecting the minimum element from the unsorted portion and moving it to the beginning.

**Key Points**:
- **Time Complexity**: O(n^2) for both the worst and average cases.
- **Efficiency**: While more efficient than Bubble Sort in some scenarios, Selection Sort is still not optimal for large datasets.

**How It Works**:
- The algorithm divides the array into a sorted and an unsorted region.
- It repeatedly selects the smallest element from the unsorted region and swaps it with the first unsorted element, thereby growing the sorted region one element at a time.

---

## 4. String Matching

**File**: `stringMatch.cpp`

**Concept**:
String matching algorithms are used to find the occurrence of a "pattern" string within a "text" string. The most straightforward method is the brute-force approach, which checks all possible positions in the text.

**Key Points**:
- **Time Complexity**: O(n * m) where n is the length of the text and m is the length of the pattern.
- **Application**: String matching is essential in search engines, DNA sequencing, and text editing software.

**How It Works**:
- The algorithm scans the text string one character at a time, checking if the pattern matches the substring starting at that position.
- If a match is found, the starting index is returned; otherwise, the search continues until the end of the text.

---

## Conclusion

This week’s lab covered essential algorithms for sorting and string matching. Understanding these fundamental algorithms is crucial as they serve as building blocks for more complex data structures and algorithms in computer science.

