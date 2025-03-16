### **Sort Matrix by Diagonals** [C++ Code](./code.cpp)  

- **File**: code.cpp 
- **Description**:  
  - Given an `n x n` matrix, the task is to sort each diagonal of the matrix in ascending or descending order. Specifically, the diagonals starting from the top-left to the bottom-right should be sorted in descending order, while the diagonals starting from the top-right to the bottom-left should be sorted in ascending order.  
  - Constraints:  
    - The matrix is square (`n x n`).  
    - The size of the matrix (`n`) can be up to 100.  
    - Each element in the matrix is an integer.  

- **Understanding the Problem**:  
  - Imagine a square grid (matrix) where each diagonal has its own set of numbers. For diagonals starting from the top-left to the bottom-right, we want to sort the numbers in descending order. For diagonals starting from the top-right to the bottom-left, we want to sort the numbers in ascending order.  
  - Example:  
    - Input:  
      ```
      [[3, 2, 1],
       [4, 5, 6],
       [9, 8, 7]]
      ```  
    - Output:  
      ```
      [[9, 6, 1],
       [8, 5, 2],
       [7, 4, 3]]
      ```  
    - Explanation:  
      - The main diagonal (top-left to bottom-right) is sorted in descending order: `[9, 5, 1]`.  
      - The other diagonals are sorted accordingly.  

- **How to Approach the Problem**:  
  - Identify the diagonals in the matrix. Diagonals can be categorized into two types:  
    1. Diagonals starting from the top-left to the bottom-right.  
    2. Diagonals starting from the top-right to the bottom-left.  
  - Use priority queues (heaps) to efficiently sort the elements in each diagonal.  
  - Edge cases to consider:  
    - A single-element diagonal (no sorting needed).  
    - Handling the boundaries of the matrix.  

- **Approach**:  
  1. **Sort diagonals from top-left to bottom-right in descending order**:  
     - For each diagonal starting from the first column and first row, extract the elements and store them in a max-heap (priority queue).  
     - Replace the elements in the diagonal with the sorted values from the max-heap.  
  2. **Sort diagonals from top-right to bottom-left in ascending order**:  
     - For each diagonal starting from the first row and second column, extract the elements and store them in a min-heap (priority queue).  
     - Replace the elements in the diagonal with the sorted values from the min-heap.  
  3. **Return the sorted matrix**:  
     - After processing all diagonals, return the modified matrix.  

- **Key Concepts Explained**:  
  - **Matrix Diagonals**: In a square matrix, diagonals can be identified by their starting points. For example, the main diagonal starts at the top-left corner and ends at the bottom-right corner.  
  - **Priority Queue (Heap)**: A data structure that allows efficient retrieval of the maximum or minimum element. Here, we use a max-heap for descending order and a min-heap for ascending order.  
  - **Time Complexity**: The time complexity is determined by the number of diagonals and the time to sort each diagonal.  
  - **Space Complexity**: The space complexity is determined by the size of the heaps used for sorting.  

- **Time Complexity**:  
  - Let `n` be the size of the matrix.  
  - There are `2n - 1` diagonals in total.  
  - Sorting each diagonal using a heap takes `O(k log k)`, where `k` is the number of elements in the diagonal.  
  - Overall time complexity: `O(n^2 log n)`.  

- **Space Complexity**:  
  - The space required for the heaps is proportional to the size of the diagonals.  
  - Overall space complexity: `O(n)`.  

- **Dry Run**:  
  | Diagonal Type         | Diagonal Elements | Sorted Elements | Resulting Matrix |  
  |-----------------------|-------------------|------------------|-------------------|  
  | Top-left to bottom-right | [3, 5, 7]         | [7, 5, 3]        | [[7, 2, 1], [4, 5, 6], [9, 8, 3]] |  
  | Top-left to bottom-right | [2, 6]            | [6, 2]           | [[7, 6, 1], [4, 5, 2], [9, 8, 3]] |  
  | Top-left to bottom-right | [1]               | [1]              | [[7, 6, 1], [4, 5, 2], [9, 8, 3]] |  
  | Top-right to bottom-left | [4, 8]            | [4, 8]           | [[7, 6, 1], [4, 5, 2], [8, 8, 3]] |  
  | Top-right to bottom-left | [9]               | [9]              | [[7, 6, 1], [4, 5, 2], [9, 8, 3]] |  

---

