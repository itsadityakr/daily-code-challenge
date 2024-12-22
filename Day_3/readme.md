## Day 3 - Problems

### 1. **Find the Largest Element in an Array**
   - **File**: `_01_find_the_largest_element_in_an_array.cpp`
   - **Description**: Find the largest element in a given array.
   - **Approach**:
     - Iterate through the array, keeping track of the maximum element found.

---

### 2. **Find the Smallest Element in an Array**
   - **File**: `_02_find_the_smallest_element_in_an_array.cpp`
   - **Description**: Find the smallest element in a given array.
   - **Approach**:
     - Iterate through the array, tracking the minimum element.

---

### 3. **Find the Missing Number in an Array (0 to n)**
   - **File**: `_03_find_the_missing_number_in_an_array_of_0_to_n.cpp`
   - **Description**: Find the single missing number in a sequence of integers from `0` to `n`.
   - **Approach**:
     - Calculate the sum of integers from `0` to `n` and subtract the sum of the array elements.

---

### 4. **Find the Missing Number in an Array (1 to n)**
   - **File**: `_04_find_the_missing_number_in_an_array_of_1_to_n.cpp`
   - **Description**: Identify the missing number in an array containing integers from `1` to `n`.
   - **Approach**:
     - Use the formula for the sum of the first `n` natural numbers and subtract the sum of the array.

---

### 5. **Rotate an Array Left by k Positions**
   - **File**: `_05_rotate_an_array_by_k_positions_left.cpp`
   - **Description**: Rotate the array left by `k` positions.
   - **Approach**:
     - Reverse the first `k` elements, reverse the rest, then reverse the entire array.

---

### 6. **Rotate an Array Right by k Positions**
   - **File**: `_06_rotate_an_array_by_k_positions_right.cpp`
   - **Description**: Rotate the array right by `k` positions.
   - **Approach**:
     - Similar to left rotation, reverse the last `k` elements, reverse the rest, then reverse the entire array.

---

### 7. **Move All Zeroes to the End**
   - **File**: `_07_move_all_zeroes_to_the_end_of_an_array.cpp`
   - **Description**: Shift all zeroes to the end of the array while maintaining the order of non-zero elements.
   - **Approach**:
     - Use a pointer to place non-zero elements sequentially, then fill the remaining positions with zeroes.

---

### 8. **Rearrange Positive and Negative Numbers Alternately**
   - **File**: `_08_rearrange_positive_and_negative_numbers_in_an_array.cpp`
   - **Description**: Arrange the array such that positive and negative numbers alternate.
   - **Approach**:
     - Partition the array into positives and negatives, then merge them alternately.

---

### 9. **Find the First Repeating Element**
   - **File**: `_09_find_the_first_repeating_element_in_an_array.cpp`
   - **Description**: Identify the first element that repeats in the array.
   - **Approach**:
     - Use a hash table to track occurrences and return the first repeating element.

---

### 10. **Find Duplicates Using Floyd’s Tortoise and Hare Algorithm**
   - **File**: `_10_find_duplicates_in_array_using_floyds_tortoise_and_hare_algo.cpp`
   - **Description**: Detect duplicates using a cycle detection algorithm.
   - **Approach**:
     - Treat the array as a linked list and use slow/fast pointers to detect cycles.

---

### 11. **Find the First Non-Repeating Element**
   - **File**: `_11_find_the_first_non_repeating_element_in_an_array.cpp`
   - **Description**: Find the first element that doesn’t repeat.
   - **Approach**:
     - Use a hash map to count occurrences and identify the first non-repeating element.

---

### 12. **Single Number**
   - **File**: `_12_single_number.cpp`
   - **Description**: Find the element that appears only once when all others appear twice.
   - **Approach**:
     - Use XOR operation to cancel out duplicate numbers.

---

### License
This repository is licensed under the MIT License.