## Day 23 - Problems

---
### 76. **Remove Duplicates from Sorted Array** [🧲](./_76_remove_duplicates_from_sorted_array.cpp)  
- **File**: _76_RemoveDuplicatesFromSortedArray.cpp_  
- **Description**:  
  Given a sorted array, the task is to remove duplicates **in-place** such that each unique element appears only once. The function should return the new length of the array with unique elements, and the original array should store the unique elements in its first `k` positions (where `k` is the new length).  

- **Approach**:  
  1. Use two pointers: one (`j`) to track the position of the next unique element and another (`i`) to iterate through the array.
  2. Start `j` at 1 because the first element is always unique.
  3. Traverse the array starting from the second element (`i = 1`).  
  4. Compare the current element (`nums[i]`) with the previous element (`nums[i-1]`).  
     - If they are different, store the current element at position `j` and increment `j`.
  5. Continue this process until the end of the array.  
  6. Return `j`, which represents the number of unique elements.  

- **Time Complexity**:  
  - **O(n)**: The algorithm processes each element exactly once.  
- **Space Complexity**:  
  - **O(1)**: No additional space is used beyond a few variables.  

---

### 77. **Find Pivot Index** [🧲](./_77_find_pivot_index.cpp)  
- **File**: _77_FindPivotIndex.cpp_  
- **Description**:  
  The pivot index of an array is the index where the sum of all elements to the left of the index is equal to the sum of all elements to the right of it. The task is to find the pivot index. If no such index exists, return `-1`. If multiple pivot indices exist, return the smallest one.  

- **Approach**:  
  1. Calculate the total sum of the array (`rightSum`).  
  2. Initialize `leftSum` to 0. This will track the sum of elements to the left of the current index.  
  3. Iterate through the array:  
     - Subtract the current element from `rightSum` (since it is no longer on the right side).  
     - Check if `leftSum` is equal to `rightSum`.  
       - If yes, return the current index.  
     - Add the current element to `leftSum` (to include it in the left-side sum).  
  4. If no pivot index is found, return `-1`.  

- **Time Complexity**:  
  - **O(n)**: The algorithm processes the array in a single pass after computing the total sum.  
- **Space Complexity**:  
  - **O(1)**: Uses only a few integer variables.  

---