## Day 29 - Problems

---

### 99. **Rearrange Elements by Sign** [CPP Code](./_99_rearrange_elements_by_sign.cpp)
   - **File**: _99_rearrange_elements_by_sign.cpp
   - **Description**: The task is to rearrange the elements of an array such that all positive numbers are placed at even indices and all negative numbers are placed at odd indices. Each positive number should follow a negative number in the final array. 
   - **Approach**: 
     - We begin by creating two separate vectors: one for positive numbers (`pos`) and another for negative numbers (`neg`).
     - We loop through the given array and classify each element into the corresponding vector based on whether it's positive or negative.
     - After this, we create a result vector (`res`) and alternate placing elements from the positive and negative vectors into it.
     - Finally, we return the rearranged array. 
     - **Key Terms**: 
       - **Vector**: A dynamic array in C++ that can grow and shrink in size.
       - **Push_back()**: A function to add elements to the end of a vector.
   - **Time Complexity**: O(n), where n is the number of elements in the input array. We traverse the array once to classify elements and then iterate again to place them in the result array.
   - **Space Complexity**: O(n), as we use additional vectors (`pos`, `neg`, and `res`) to store the elements.

---

### 100. **Next Permutation** [CPP Code](./_100_next_permutation.cpp)
   - **File**: _100_next_permutation.cpp
   - **Description**: This problem involves finding the next lexicographical permutation of a given array of integers. The next permutation is the next greater permutation that can be made using the same set of numbers, or the smallest permutation if none exists.
   - **Approach**:
     - First, we find the rightmost pair of elements where the first is smaller than the second. This helps identify where the sequence starts to decrease.
     - Next, we swap this element with the smallest element to the right of it, which is larger than itself.
     - Finally, we reverse the sequence after the index where the first smaller element was found, to ensure it's in the lowest possible order.
     - **Key Terms**:
       - **Swap**: Exchanging the positions of two elements.
       - **Reverse**: Reversing a part of an array or vector.
   - **Time Complexity**: O(n), where n is the size of the input array. We perform linear scans to identify positions and to reverse a part of the array.
   - **Space Complexity**: O(1), as no additional space is used except for a few variables.

---

### 101. **Replace Elements with Greatest Element on Right Side** [CPP Code](./_101_replace_elements_with_greatest_element_on_right_side.cpp)
   - **File**: _101_replace_elements_with_greatest_element_on_right_side.cpp
   - **Description**: This problem asks to replace each element in the array with the greatest element found to its right. The last element is replaced with -1 since there are no elements to its right.
   - **Approach**:
     - We iterate over the array from right to left. For each element, we store the greatest element encountered so far.
     - As we go through the array, we replace the current element with the greatest value.
     - After processing an element, we update the greatest value for future comparisons.
     - **Key Terms**:
       - **Max**: A function to get the maximum of two values.
       - **Traversal**: The process of visiting each element of an array or list.
   - **Time Complexity**: O(n), where n is the number of elements in the input array. We iterate over the array once.
   - **Space Complexity**: O(1), as we only use a constant amount of extra space.

---

### 102. **Longest Consecutive Subsequence** [CPP Code](./_102_longest_consecutive_subsequence.cpp)
   - **File**: _102_longest_consecutive_subsequence.cpp
   - **Description**: The task is to find the length of the longest consecutive subsequence in an unsorted array of integers.
   - **Approach**:
     - First, we sort the array to bring consecutive numbers next to each other.
     - We then traverse the sorted array, counting the length of consecutive subsequences.
     - If two numbers are consecutive, we continue the streak. If they are not, we reset the streak and check if the current streak is the longest we've seen.
     - **Key Terms**:
       - **Consecutive**: Numbers that follow one another without gaps (e.g., 3, 4, 5).
       - **Sorting**: The process of arranging elements in a particular order (ascending in this case).
   - **Time Complexity**: O(n log n), where n is the number of elements in the array. Sorting takes O(n log n) time.
   - **Space Complexity**: O(1), as no additional space is used apart from a few variables.

---

### 103. **Set Matrix Zeroes** [CPP Code](./_103_set_matrix_0s.cpp)
   - **File**: _103_set_matrix_0s.cpp
   - **Description**: Given an m x n matrix, if any element in the matrix is 0, set its entire row and column to 0.
   - **Approach**:
     - First, check if the first row and the first column contain any zeroes. We mark this using two flags (`firstRowZero`, `firstColZero`).
     - Then, for the rest of the matrix, we use the first row and column to mark which rows and columns need to be set to zero.
     - After this, we process the matrix from the bottom up to avoid overwriting the flags we set in the first row and column.
     - Finally, we set the first row and column to zero if necessary based on the flags.
     - **Key Terms**:
       - **Matrix**: A 2D array used to store data in rows and columns.
       - **Flags**: Boolean variables used to indicate certain conditions.
   - **Time Complexity**: O(m * n), where m is the number of rows and n is the number of columns in the matrix. We go through the matrix a constant number of times.
   - **Space Complexity**: O(1), as we only use a few variables to store the flags and don't use any extra space proportional to the matrix size.

   ---