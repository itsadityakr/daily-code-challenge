## Day 49 - Problems

---

## 191. **Search a 2D Matrix** [C++ Code](./_191_Search_a_2D_Matrix.cpp)
   - **File**: _191_Search_a_2D_Matrix.cpp_
   - **Description**: Given an m x n matrix where each row is sorted in ascending order and the first element of each row is greater than the last element of the previous row, determine whether a given target value exists in the matrix.
   - **Understanding the Problem**: The matrix can be thought of as a flattened sorted list. We need to find the target efficiently.
   - **How to Approach the Problem**: Since the matrix is sorted, we can use **binary search** to find the target efficiently instead of scanning the matrix row by row.
   - **Approach**:
     1. Treat the entire matrix as a single sorted list.
     2. Use binary search where:
        - `mid` is calculated based on index mapping.
        - Convert `mid` into row and column indices (`row = mid / col`, `col = mid % col`).
        - Compare the value at `mid` with the target.
     3. If the target is found, return `true`; otherwise, adjust the search space accordingly.
   - **Key Concepts Explained**:
     - **Binary Search**: A technique to search for an element in a sorted list in O(log N) time.
   - **Time Complexity**: **O(log(m * n))**
   - **Space Complexity**: **O(1)**

---

## 192. **Search a 2D Matrix II** [C++ Code](./_192_Search_a_2D_Matrix_II.cpp)
   - **File**: _192_Search_a_2D_Matrix_II.cpp_
   - **Description**: Given an m x n matrix where each row and column is sorted in ascending order, determine whether a target value exists in the matrix.
   - **Understanding the Problem**: Unlike the previous problem, here each row and column is sorted but rows don’t have a strict relation with each other.
   - **How to Approach the Problem**:
     - **Optimized Approach**: Start searching from the **top-right corner**.
   - **Approach**:
     1. Start at the **top-right** element:
        - If it's equal to the target, return `true`.
        - If it's smaller, move down.
        - If it's larger, move left.
     2. Continue until either the target is found or we go out of bounds.
   - **Key Concepts Explained**:
     - **Binary Search**: A subroutine is used to check rows.
     - **2D Matrix Search Strategy**: Searching from a strategic starting point to reduce the search space.
   - **Time Complexity**: **O(m + n)**
   - **Space Complexity**: **O(1)**

---

## 193. **Find a Peak Element II** [C++ Code](./_193_Find_a_Peak_Element_II.cpp)
   - **File**: _193_Find_a_Peak_Element_II.cpp_
   - **Description**: Given a 2D grid, find the peak element where a peak is defined as an element that is greater than its adjacent elements.
   - **Understanding the Problem**: We need to find an element that is greater than its neighbors in a matrix.
   - **How to Approach the Problem**:
     - A peak exists in every matrix, so we can find one efficiently using **binary search**.
   - **Approach**:
     1. Use binary search on **columns** instead of rows.
     2. Find the **maximum element** in the middle column.
     3. Check if it's a peak:
        - If it's greater than its left and right neighbors, return it.
        - Otherwise, move towards the side that has a larger value.
   - **Key Concepts Explained**:
     - **Peak Element**: A number that is larger than its adjacent numbers.
     - **Binary Search in 2D**: Using a modified version of binary search on columns.
   - **Time Complexity**: **O(m * log n)**
   - **Space Complexity**: **O(1)**

---

## 194. **Median in a Row-wise Sorted Matrix** [C++ Code](./_194_Median_in_a_row-wise_sorted_Matrix.cpp)
   - **File**: _194_Median_in_a_row-wise_sorted_Matrix.cpp_
   - **Description**: Given a row-wise sorted matrix, find its median.
   - **Understanding the Problem**: The median is the middle value in a sorted sequence.
   - **How to Approach the Problem**:
     - Since the matrix is sorted row-wise, we use **binary search on values** instead of indices.
   - **Approach**:
     1. Find the **minimum and maximum** value in the matrix.
     2. Perform **binary search** on values:
        - Count numbers **less than or equal to mid**.
        - If the count is less than `(m * n) / 2`, increase `mid`.
        - Otherwise, decrease `mid`.
     3. The left boundary of the search will be the median.
   - **Key Concepts Explained**:
     - **Binary Search on Values**: Searching within value range instead of index.
   - **Time Complexity**: **O(m * log(max-min))**
   - **Space Complexity**: **O(1)**

---
