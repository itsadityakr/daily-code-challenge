## Day 25 - Problems

---

### 79. **Third Maximum Number** [.cpp](./79_third_maximum_number.cpp)
   - **File**: _79_third_maximum_number.cpp
   - **Description**: This problem requires finding the third maximum number in an array. If the third maximum doesn't exist, return the maximum number.
   - **Approach**: 
     - First, we handle the edge case where the input array has only one element. In such cases, return that element.
     - Next, we sort the array in descending order. Sorting helps to easily access the maximum values.
     - We then iterate through the sorted array, keeping track of distinct numbers (to avoid duplicates).
     - If we encounter the third distinct maximum, we return that value. If we don’t encounter three distinct numbers, the maximum number is returned instead.
   - **Time Complexity**: O(n log n), because we are sorting the array.
   - **Space Complexity**: O(1), as no extra space is used apart from the input array.

---

### 80. **Check if Array is Sorted and Rotated** [.cpp](./80_check_if_array_is_sorted_and_rotated.cpp)
   - **File**: _80_check_if_array_is_sorted_and_rotated.cpp
   - **Description**: This problem asks whether an array is sorted and rotated or not. A sorted and rotated array is one that was originally sorted in ascending order but then rotated at some pivot.
   - **Approach**: 
     - First, we look for the point where the array is no longer sorted. If such a point is found, we check if the array is still in a valid rotated order.
     - After finding the rotation point, the elements after it should still be in ascending order. Finally, the first element should be greater than or equal to the last element to ensure the rotation is valid.
   - **Time Complexity**: O(n), because we are scanning through the array once.
   - **Space Complexity**: O(1), as we only use a few variables for tracking the index and count.

---

### 81. **Remove Duplicates from Sorted Array** [.cpp](./81_remove_duplicates_from_sorted_array.cpp)
   - **File**: _81_remove_duplicates_from_sorted_array.cpp
   - **Description**: This problem involves removing duplicate elements from a sorted array in-place, and returning the new length of the array without duplicates.
   - **Approach**: 
     - We iterate through the array and check if the current element is different from the previous element.
     - When a unique element is found, we place it at the next available index (using the `j` pointer).
     - After finishing the loop, the first `j` elements will contain the unique values, and we return `j` as the new length of the array.
   - **Time Complexity**: O(n), as we only pass through the array once.
   - **Space Complexity**: O(1), since we modify the array in-place without using extra space.

---

### 82. **Right Rotate Array by K Steps** [.cpp](./82_right_rotate_array_by_k_steps.cpp)
   - **File**: _82_right_rotate_array_by_k_steps.cpp
   - **Description**: This problem involves rotating an array `nums` by `k` steps to the right. The operation is in-place, meaning no extra space is used for the result.
   - **Approach**: 
     - We first reduce `k` to `k % n` (the remainder when divided by the length of the array). This handles cases where `k` is larger than the array size.
     - Then, we reverse the entire array, which moves the elements around in such a way that we can easily split the array into two parts.
     - After reversing the whole array, we reverse the first `k` elements and the remaining elements separately to restore the order in both parts.
   - **Time Complexity**: O(n), because we perform three reversals of the array.
   - **Space Complexity**: O(1), as the rotation is done in-place without using additional memory.

---

### 83. **Kth Largest Element in Array** [.cpp](./83_kth_largest_element_in_array.cpp)
   - **File**: _83_kth_largest_element_in_array.cpp
   - **Description**: The problem is to find the `k`th largest element in an unsorted array.
   - **Approach**:
     - We use the QuickSelect algorithm, which is a variant of QuickSort designed to find the `k`th largest element efficiently.
     - First, we partition the array around a pivot, such that elements smaller than the pivot are on the left and larger ones on the right.
     - If the pivot is in the `k-1`th position, we return it as the `k`th largest element.
     - Otherwise, depending on whether the pivot’s position is smaller or larger than `k-1`, we recurse on the appropriate part of the array.
   - **Time Complexity**: O(n) on average, because the partitioning step reduces the problem size by half each time, but worst case O(n^2) if the pivot is poorly chosen.
   - **Space Complexity**: O(1), since the algorithm is done in-place without additional space (apart from the recursion stack).

---