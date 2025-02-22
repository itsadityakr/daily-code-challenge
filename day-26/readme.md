## Day 26 - Problems

---

### 84. **Search in Rotated Sorted Array** [CPP Code](./_84_search_in_rotated_sorted_array_places.cpp)
   - **File**: _84_search_in_rotated_sorted_array_places.cpp
   - **Description**: Given a rotated sorted array, find the index of a target value. Return -1 if the target is not present.
   - **Approach**: 
     1. **Rotated Sorted Array**: This is an array sorted in ascending order but rotated at some pivot, meaning a portion of it is shifted to the start or end.
     2. **Binary Search**: Use binary search to divide the array into halves and determine which half is sorted. Check if the target lies in the sorted portion. Adjust the search range accordingly.
     3. **Steps**:
        - Initialize two pointers, `low` (start) and `high` (end).
        - Calculate `mid` as `(low + high) / 2`.
        - Compare `nums[mid]` with the target. If equal, return `mid`.
        - Determine if the left or right part of the array is sorted and adjust the search range.
        - Repeat until the target is found or the range is exhausted.
   - **Time Complexity**: \(O(log n)\) due to binary search.
   - **Space Complexity**: \(O(1)\) as it uses constant space.

---

### 85. **Move All Zeros to End** [CPP Code](./_85_move_all_zeros_to_end.cpp)
   - **File**: _85_move_all_zeros_to_end.cpp
   - **Description**: Rearrange an array such that all zeros are moved to the end while maintaining the order of non-zero elements.
   - **Approach**:
     1. **Two Pointers**: Traverse the array with one pointer, counting zeros (`zeroCount`). Use another pointer to swap non-zero elements into their correct position.
     2. **Steps**:
        - Iterate through the array. For each non-zero element, swap it with the element at the position \(i - \text{zeroCount}\), pushing zeros to the end.
        - The XOR swap technique is used for swapping to avoid temporary variables.
   - **Time Complexity**: \(O(n)\) as it processes each element once.
   - **Space Complexity**: \(O(1)\) since no extra space is used.

---

### 86. **Find Minimum in Rotated Sorted Array** [CPP Code](./_86_find_minimum_in_roated_sorted_array.cpp)
   - **File**: _86_find_minimum_in_roated_sorted_array.cpp
   - **Description**: Find the smallest element in a rotated sorted array.
   - **Approach**:
     1. **Binary Search**: The minimum element in a rotated sorted array is where the rotation begins. Compare midpoints with the last element to narrow down the search.
     2. **Steps**:
        - Use two pointers, `left` and `right`.
        - Compare the middle element with the rightmost element:
          - If `nums[mid]` is smaller than `nums[right]`, the minimum lies in the left half.
          - Otherwise, it lies in the right half.
        - Narrow down the range until one element remains, which is the minimum.
   - **Time Complexity**: \(O(log n)\) for binary search.
   - **Space Complexity**: \(O(1)\) as it uses constant space.

---

### 87. **Intersection of Two Arrays** [CPP Code](./_87_intersection_of_two_arrays.cpp)
   - **File**: _87_intersection_of_two_arrays.cpp
   - **Description**: Find the unique elements common to two arrays.
   - **Approach**:
     1. **Hashing**: Use a set to store elements of one array and another set to find intersections.
     2. **Steps**:
        - Add all elements of the first array into a set.
        - Traverse the second array and check for matches in the first set.
        - Store matches in a result set to ensure uniqueness.
        - Convert the result set into a vector and return it.
   - **Time Complexity**: \(O(n + m)\), where \(n\) and \(m\) are the sizes of the arrays.
   - **Space Complexity**: \(O(n + m)\) for the sets.

---

### 88. **Find Missing Number in an Array** [CPP Code](./_88_find_missing_number_in_an_array.cpp)
   - **File**: _88_find_missing_number_in_an_array.cpp
   - **Description**: Find the single missing number in an array of size \(n\) containing elements from 0 to \(n\).
   - **Approach**:
     1. **Bit Manipulation**: Use XOR to find the missing number.
     2. **Steps**:
        - XOR all indices from 0 to \(n\) and XOR all elements in the array.
        - The result will cancel out all duplicates and leave the missing number.
   - **Time Complexity**: \(O(n)\) as it processes each element once.
   - **Space Complexity**: \(O(1)\) as it uses constant space.

---