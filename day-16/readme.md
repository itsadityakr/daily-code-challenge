## Day 16 - Problems

---

### 63. **Minimum Size Subarray Sum** [🧲](./_63_minimum_size_subarray_sum.cpp)
   - **File**: _63_minimum_size_subarray_sum.cpp
   - **Description**: Given an array of positive integers `nums` and a target integer `target`, we are tasked with finding the smallest contiguous subarray whose sum is greater than or equal to the target. If no such subarray exists, return 0.
   
   - **Approach**:
     1. **Sliding Window Technique**: The sliding window approach works by using two pointers, `i` (the start) and `j` (the end), to define the current window. Initially, both pointers are set to the start of the array, and the `sum` of the subarray is initialized to 0.
     
     2. **Expand the Window**: We begin by moving the right pointer `j` across the array, adding elements to the current sum. Each time `j` is moved, the `sum` is updated by adding the element at the `j`-th index.
     
     3. **Shrink the Window**: When the sum becomes greater than or equal to the target, we attempt to shrink the window by moving the left pointer `i` to the right. Each time we shrink the window, we update the minimal length `mn` if the current window length is smaller than the previously recorded minimum length.
     
     4. **Track the Minimum Length**: The length of the subarray is `j - i + 1`. This length is only updated when the sum of the current window is greater than or equal to the target, and the window is shrunk.
     
     5. **Edge Case**: If no such subarray is found that meets the condition (i.e., the minimal length remains `INT_MAX`), we return 0.
     
     6. **Return the Result**: Finally, we return the minimum length found. If no valid subarray is found, the result is 0.

   - **Time Complexity**: O(n), where `n` is the number of elements in the array. The `i` and `j` pointers each traverse the array once. Since we do not reprocess elements that have already been handled, the algorithm runs in linear time.
   
   - **Space Complexity**: O(1), since we only use a few integer variables to store the sum and the minimal length, with no additional data structures required.

---

### 64. **First Missing Positive** [🧲](./_64_first_missing_positive.cpp)
   - **File**: _64_first_missing_positive.cpp
   - **Description**: Given an unsorted integer array `nums`, the task is to find the first missing positive integer. The solution must run in O(n) time and use constant space. The array can contain both positive and negative integers, and the missing integer must be a positive number.

   - **Approach**:
     1. **In-place Rearrangement**: The idea is to rearrange the elements of the array in such a way that each positive number `x` appears at the index `x - 1` (i.e., `nums[x-1] == x` for all valid `x`). This rearrangement allows us to directly identify the first missing positive integer by checking each index.
     
     2. **Iterate through the array**: We iterate over the array using a for loop. For each element `nums[i]`, we check if it is within the valid range of `1` to `n` (where `n` is the length of the array). If it is, we attempt to place the number at its correct position by swapping it with the element at index `nums[i] - 1` (i.e., swapping `nums[i]` with `nums[nums[i] - 1]`).
     
     3. **Avoid Infinite Loops**: During the swap, we must ensure that the element is not swapped with itself or swapped out of the valid range. If `nums[i]` is already in its correct position (i.e., `nums[i] == nums[nums[i] - 1]`), we skip the swap.
     
     4. **Post-Rearrangement Check**: Once all elements have been rearranged, we iterate through the array again. The first index `i` where `nums[i] != i + 1` indicates that `i + 1` is the first missing positive integer. If no such index is found, the first missing positive is `n + 1`, because all integers from 1 to `n` are present.
     
     5. **Return the Result**: After rearranging and checking, we return the first missing positive number or `n + 1` if all numbers are present.

   - **Time Complexity**: O(n), where `n` is the length of the array. Each element is processed at most twice: once during the rearrangement and once during the final check.
   
   - **Space Complexity**: O(1), since the rearrangement is done in-place without using extra data structures. The algorithm only modifies the input array and uses a constant amount of additional memory.

---