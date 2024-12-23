## Day 3 - Problems

### 1. **Finding the Largest Element in an Array**
   - **File**: `_01_find_the_largest_element_in_an_array.cpp`
   - **Description**: This problem requires finding the largest element in a given array of integers, which can contain both positive and negative numbers.
   - **Approach**: Initialize a variable to the smallest possible value (`INT_MIN`). Iterate through the array, and for each element, compare it with the current largest value. If an element is larger, update the largest value.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as only a few variables are used.

---

### 2. **Finding the Smallest Element in an Array**
   - **File**: `_02_find_the_smallest_element_in_an_array.cpp`
   - **Description**: This problem asks to find the smallest element in an array containing integers, which may include both positive and negative values.
   - **Approach**: Initialize a variable to the largest possible value (`INT_MAX`). Iterate through the array and for each element, compare it with the current smallest value. If an element is smaller, update the smallest value.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), since only a few variables are needed.

---

### 3. **Finding the Missing Number in an Array (0 to n)**
   - **File**: `_03_find_the_missing_number_in_an_array_of_0_to_n.cpp`
   - **Description**: Given an array containing integers from `0` to `n`, find the single missing number.
   - **Approach**: Compute the expected sum of numbers from `0` to `n` using the formula `n*(n+1)/2`, and subtract the sum of the array elements. The result will be the missing number.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as only a few variables are required.

---

### 4. **Finding the Missing Number in an Array (1 to n)**
   - **File**: `_04_find_the_missing_number_in_an_array_of_1_to_n.cpp`
   - **Description**: This problem asks to find the missing number in an array containing integers from `1` to `n`.
   - **Approach**: Compute the expected sum of integers from `1` to `n` using the formula `n*(n+1)/2`, then subtract the sum of the array elements. The difference will give the missing number.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as only a few variables are used.

---

### 5. **Rotate an Array Left by k Positions**
   - **File**: `_05_rotate_an_array_by_k_positions_left.cpp`
   - **Description**: Rotate an array to the left by `k` positions, shifting the first `k` elements to the end of the array.
   - **Approach**: First, reverse the first `k` elements, then reverse the remaining elements of the array. Finally, reverse the entire array to complete the rotation.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as the rotation is done in-place.

---

### 6. **Rotate an Array Right by k Positions**
   - **File**: `_06_rotate_an_array_by_k_positions_right.cpp`
   - **Description**: Rotate an array to the right by `k` positions, moving the last `k` elements to the front.
   - **Approach**: Similar to left rotation, reverse the last `k` elements, then reverse the remaining elements. Finally, reverse the entire array to complete the rotation.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as the rotation is done in-place.

---

### 7. **Move All Zeroes to the End**
   - **File**: `_07_move_all_zeroes_to_the_end_of_an_array.cpp`
   - **Description**: Move all zeroes to the end of the array while maintaining the order of non-zero elements.
   - **Approach**: Use a pointer to track the position of non-zero elements and swap them with the zero elements. After placing all non-zero elements, fill the remaining positions with zeroes.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as the array is modified in-place.

---

### 8. **Rearrange Positive and Negative Numbers Alternately**
   - **File**: `_08_rearrange_positive_and_negative_numbers_in_an_array.cpp`
   - **Description**: Rearrange the array such that positive and negative numbers alternate in the array.
   - **Approach**: Maintain two pointers, one for placing positive numbers at even indices and another for placing negative numbers at odd indices. Traverse the array and place numbers accordingly.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as the array is rearranged in-place.

---

### 9. **Finding the First Repeating Element**
   - **File**: `_09_find_the_first_repeating_element_in_an_array.cpp`
   - **Description**: Identify the first element that repeats in the array.
   - **Approach**: Use a hash set to track elements as we iterate through the array. The first element that is already present in the set is the first repeating element.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), as we store elements in the hash set.

---

### 10. **Finding Duplicates Using Floyd’s Tortoise and Hare Algorithm**
   - **File**: `_10_find_duplicates_in_array_using_floyds_tortoise_and_hare_algo.cpp`
   - **Description**: Detect duplicates using a cycle detection algorithm based on Floyd’s Tortoise and Hare technique.
   - **Approach**: Treat the array as a linked list where each value points to an index. Use two pointers, a slow pointer and a fast pointer, to detect a cycle. Once the cycle is detected, trace back to find the duplicate number.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as only two pointers are used.

---

### 11. **Finding the First Non-Repeating Element**
   - **File**: `_11_find_the_first_non_repeating_element_in_an_array.cpp`
   - **Description**: Find the first element that does not repeat in the array.
   - **Approach**: Use a hash map to count the occurrences of each element. The first element with a count of `1` is the first non-repeating element.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), due to the hash map used for counting.

---

### 12. **Single Number**
   - **File**: `_12_single_number.cpp`
   - **Description**: In an array where every element appears twice except for one, find the element that appears only once.
   - **Approach**: Use the XOR operation, which cancels out identical elements. By XORing all elements, we are left with the element that appears only once.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as we only use a single variable for the XOR operation.

---

### License
This repository is licensed under the MIT License.