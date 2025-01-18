## Day 30 - Problems

---

### 104. **Rotate Matrix** [CPP Code](./_104_rotate_matrix.cpp)
   - **File**: _104_rotate_matrix.cpp
   - **Description**: Rotate a square 2D matrix 90 degrees clockwise.
   - **Approach**: 
     1. **Transpose the Matrix**: 
        - In a matrix, the transpose is achieved by swapping elements across the diagonal. For a cell at position `(i, j)`, swap it with the cell at `(j, i)`.
        - Example: Given a matrix `[[1, 2], [3, 4]]`, its transpose is `[[1, 3], [2, 4]]`.
     2. **Reverse Each Row**:
        - After the transpose, reverse the elements in each row to achieve the 90-degree clockwise rotation.
        - Continuing the example, reversing the rows of `[[1, 3], [2, 4]]` gives `[[3, 1], [4, 2]]`.
     3. **Explanation**: 
        - Transposing rearranges rows into columns.
        - Reversing each row completes the 90-degree rotation.
     4. **Code Walkthrough**:
        - First, iterate through each pair `(i, j)` where \(j \geq i\), and swap `matrix[i][j]` with `matrix[j][i]`.
        - Then, for each row in the matrix, use the `reverse` function to reverse its elements.
   - **Time Complexity**: \(O(n^2)\), where \(n\) is the size of the matrix.
   - **Space Complexity**: \(O(1)\), since the operation modifies the matrix in place.

---

### 105. **Spiral Traversal of a Matrix** [CPP Code](./_105_spiral_traversal.cpp)
   - **File**: _105_spiral_traversal.cpp
   - **Description**: Traverse a 2D matrix in a spiral order, starting from the top-left corner and proceeding inwards.
   - **Approach**:
     1. **Boundary Variables**:
        - Use `top`, `bottom`, `left`, and `right` to keep track of the current boundaries of the matrix. Initially:
          - `top = 0` (start row),
          - `bottom = rows - 1` (end row),
          - `left = 0` (start column),
          - `right = cols - 1` (end column).
     2. **Iterative Traversal**:
        - While the boundaries are valid (`top <= bottom` and `left <= right`):
          - Traverse the **top row** from `left` to `right`, and increment `top`.
          - Traverse the **right column** from `top` to `bottom`, and decrement `right`.
          - If rows remain, traverse the **bottom row** from `right` to `left`, and decrement `bottom`.
          - If columns remain, traverse the **left column** from `bottom` to `top`, and increment `left`.
     3. **Explanation**:
        - By iteratively moving in one direction and then reducing the boundaries, the matrix is traversed in a spiral order.
     4. **Code Walkthrough**:
        - Start at the top-left corner and proceed in a clockwise spiral, adding elements to the result vector. Adjust boundaries after each step.
   - **Time Complexity**: \(O(m x n)\), where \(m\) is the number of rows and \(n\) is the number of columns.
   - **Space Complexity**: \(O(1)\), ignoring the space used to store the result.

---

### 106. **Pascal's Triangle** [CPP Code](./_106_pascals_triangle.cpp)
   - **File**: _106_pascals_triangle.cpp
   - **Description**: Generate Pascal's Triangle up to a given number of rows (`numRows`).
   - **Approach**:
     1. **Basic Properties**:
        - Pascal's Triangle is a triangular array where:
          - The first and last elements of each row are `1`.
          - Any other element is the sum of the two elements directly above it.
     2. **Construction**:
        - Start with an empty list.
        - For each row \(i\) (from 0 to `numRows - 1`):
          - Create a vector of size \(i + 1\) filled with 1s.
          - For indices \(j\) from 1 to \(i - 1\), compute `row[j]` as the sum of `triangle[i-1][j-1]` and `triangle[i-1][j]`.
          - Append the row to the triangle.
     3. **Explanation**:
        - Each row builds upon the previous row, leveraging the triangle’s properties.
     4. **Code Walkthrough**:
        - Example for `numRows = 5`:
          - Row 1: `[1]`.
          - Row 2: `[1, 1]`.
          - Row 3: `[1, 2, 1]` (computed as 1 + 1 in the middle).
          - Row 4: `[1, 3, 3, 1]`.
          - Row 5: `[1, 4, 6, 4, 1]`.
   - **Time Complexity**: \(O(n^2)\), where \(n\) is the number of rows.
   - **Space Complexity**: \(O(n^2)\), for storing the triangle.

---

### 107. **Majority Element (n/3)** [CPP Code](./_107_majority_element_II_n_by_3.cpp)
   - **File**: _107_majority_element_II_n_by_3.cpp
   - **Description**: Identify elements in an array that appear more than \(\frac{n}{3}\) times.
   - **Approach**:
     1. **Understand the Problem**:
        - For an array of size \(n\), there can be at most two elements appearing more than \(\frac{n}{3}\) times.
     2. **Boyer-Moore Voting Algorithm**:
        - Maintain two candidate elements and their counts.
        - For each element in the array:
          - If it matches one of the candidates, increment the corresponding count.
          - If neither count is active (0), set the element as a new candidate.
          - Otherwise, decrement both counts.
        - This step identifies potential majority candidates.
     3. **Validation**:
        - Recount the occurrences of the two candidates to verify if their frequency exceeds \(\frac{n}{3}\).
     4. **Code Walkthrough**:
        - Example for `nums = [3, 3, 4, 2, 4, 4, 2, 4, 4]`:
          - Candidates after the first pass: `4` (count = 4) and `3` (count = 2).
          - Validate counts: `4` occurs 5 times, and `3` occurs 2 times. The result is `[4]`.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array.
   - **Space Complexity**: \(O(1)\), as the algorithm uses constant extra space.

---
