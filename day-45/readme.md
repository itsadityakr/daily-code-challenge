## Day 45 - Problems

---

### 174. **Search in Rotated Sorted Array** [C++ Code](./_174_search_in_rotated_sorted_array.cpp)
   - **File**: _174_search_in_rotated_sorted_array.cpp
   - **Description**: Given a rotated sorted array, the goal is to search for a specific target element in the array and return its index. If the element is not found, return -1. A rotated sorted array is an array that was sorted in increasing order, but then rotated at some pivot point.
   - **Approach**: 
      - We can solve this problem using **binary search**, which is a more efficient way than linear search.
      - Start by initializing two pointers: **left** (starting from index 0) and **right** (starting from the last index).
      - In each iteration, calculate the middle element using `mid = left + (right - left) / 2`.
      - Compare the middle element with the target:
         - If the middle element matches the target, return its index.
         - If the left part of the array is sorted (i.e., `nums[left] <= nums[mid]`), check if the target lies within the left part. If it does, adjust the right pointer to `mid - 1`; otherwise, adjust the left pointer to `mid + 1`.
         - If the right part of the array is sorted (i.e., `nums[mid] <= nums[right]`), similarly check if the target lies within the right part and adjust the pointers accordingly.
      - The process continues until the target is found or the pointers cross, in which case we return `-1`.
   - **Time Complexity**: O(log N), since binary search works by halving the search space in each iteration.
   - **Space Complexity**: O(1), because we are using a constant amount of extra space for variables.

---

### 175. **Search in Rotated Sorted Array II** [C++ Code](./_175_search_in_rotated_sorted_array_ii.cpp)
   - **File**: _175_search_in_rotated_sorted_array_ii.cpp
   - **Description**: This is a variant of the previous problem where the array may contain duplicate values. We are still required to find a target element. If duplicates are present, the problem is slightly more complicated since binary search requires distinct values to efficiently reduce the search space.
   - **Approach**:
      - This problem is also solved using binary search, but there is an additional check when the left, middle, and right elements are equal.
      - The main idea is similar to the first problem, but we handle duplicates by checking if `nums[left] == nums[mid] == nums[right]`. When all three are equal, we can't determine which side is sorted, so we move the pointers inward: `left++` and `right--`.
      - If the left part is sorted (i.e., `nums[left] <= nums[mid]`), we check if the target lies between `nums[left]` and `nums[mid]`. If it does, adjust `right`; otherwise, move `left`.
      - If the right part is sorted (i.e., `nums[mid] <= nums[right]`), we do a similar check for the target and adjust the pointers.
      - The process continues until we find the target or conclude that it isn't in the array.
   - **Time Complexity**: O(N), because in the worst case (with duplicates), we may need to check all elements.
   - **Space Complexity**: O(1), as only a few variables are used.

---

### 176. **Find Minimum in Rotated Sorted Array** [C++ Code](./_176_find_min_in_rotated_sorted_array.cpp)
   - **File**: _176_find_min_in_rotated_sorted_array.cpp
   - **Description**: In a rotated sorted array, we need to find the minimum element. The array was initially sorted but rotated at some pivot point.
   - **Approach**:
      - To find the minimum element, we can use binary search.
      - We maintain two pointers, **left** and **right**. We check the middle element and compare it with the rightmost element:
         - If `nums[mid] > nums[right]`, it means the minimum element lies to the right of `mid` (because the right part is unsorted and contains the minimum).
         - If `nums[mid] <= nums[right]`, it means the right part is sorted, so the minimum must be in the left part (or it is the middle element itself).
      - The process continues until the left pointer equals the right pointer, at which point the left pointer will be pointing to the minimum element.
   - **Time Complexity**: O(log N), because we use binary search.
   - **Space Complexity**: O(1), since only a constant amount of space is required.

---

### 177. **Find Kth Rotation** [C++ Code](./_177_find_kth_rotation.cpp)
   - **File**: _177_find_kth_rotation.cpp
   - **Description**: Given a rotated sorted array, the task is to find the number of rotations (i.e., the index of the minimum element). This problem requires identifying the pivot point of the rotation.
   - **Approach**:
      - We use binary search to find the pivot.
      - Start with **left** and **right** pointers. Compare the middle element `arr[mid]` with the rightmost element `arr[right]`:
         - If `arr[mid] > arr[right]`, it means the minimum element (and thus the pivot) is to the right of `mid`, so move the left pointer to `mid + 1`.
         - If `arr[mid] <= arr[right]`, the pivot must be to the left of `mid`, so move the right pointer to `mid`.
      - The process continues until the left pointer equals the right pointer, and this will give the index of the smallest element, which is also the number of rotations.
   - **Time Complexity**: O(log N), as we perform binary search.
   - **Space Complexity**: O(1), because only a few variables are used.

---
