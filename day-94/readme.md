## Day 94 - Problems  

---

### 340. **Maximum Sum of a Subarray of Size K** [C++ Code](./_340_Maximum_sum_of_a_subarray_of_size_K.cpp)  [Py Code](./_340_Maximum_sum_of_a_subarray_of_size_K.py)  

- **File**: _340_Maximum_sum_of_a_subarray_of_size_K_  
- **Description**:  
  - Given an integer array `nums` and an integer `k`, find the maximum subarray sum of all subarrays of `nums` that meet the following conditions:  
    - The length of the subarray is `k`.  
    - All the elements of the subarray are distinct.  
  - If no subarray meets the conditions, return `0`.  

- **Understanding the Problem**:  
  - We need to find contiguous subarrays of length `k` with all distinct elements.  
  - Among these valid subarrays, we return the one with the maximum sum.  
  - If no valid subarray exists, return `0`.  
  - Example:  
    - `nums = [1,5,4,2,9,9,9]`, `k = 3`  
    - Valid subarrays: `[1,5,4] (sum=10)`, `[5,4,2] (sum=11)`, `[4,2,9] (sum=15)`  
    - Invalid: `[2,9,9]`, `[9,9,9]` (repeated elements)  
    - Answer: `15`  

- **Pseudocode**:
```
Initialize a hashmap (frequency map) to track occurrences of numbers.
Initialize two variables: current sum and max sum.
Use a sliding window approach:
    Iterate over the array:
        Add the current number to the sum.
        Update its count in the frequency map.
        If the window exceeds size k:
            Remove the leftmost element from sum and frequency map.
        If the frequency map has exactly k elements:
            Update max sum.
Return max sum.
```

- **Approach**:  
  1. Use a **sliding window** approach with a **hash map** to track frequency.  
  2. Expand the window by adding elements and tracking their count.  
  3. If the window exceeds `k`, remove the leftmost element and adjust the frequency map.  
  4. If the window size is exactly `k` and contains unique elements, update `maxSum`.  
  5. Return the maximum sum found.  
  
- **Key Concepts Explained**:  
  - **Sliding Window**: Instead of recomputing the sum for each subarray, efficiently adjust the sum as the window slides over the array.  
  - **Hash Map for Frequency**: Ensures elements are distinct in the subarray.  
  
- **Time Complexity**:  
  - `O(n)`, where `n` is the length of `nums`. The window slides once through the array, and hash map operations are `O(1)`.  
  
- **Space Complexity**:  
  - `O(k)`, as we store up to `k` elements in the frequency map.  
  
**Dry Run**:
- *Input* : `nums = [1,5,4,2,9,9,9]`, `k = 3`
- *Output* : `15`
- *Explanation* :
  - Window `[1,5,4]`, sum = `10`
  - Window `[5,4,2]`, sum = `11`
  - Window `[4,2,9]`, sum = `15` (Max sum found)
  - Other windows contain duplicates, so they are skipped.
  
- **Steps**:
  1. Initialize `freq = {}` and `currentSum = 0, maxSum = 0`
  2. Iterate through `nums`, adding elements to `currentSum`
  3. Maintain a sliding window of size `k`
  4. If valid, update `maxSum`
  5. Return `maxSum`  

---

