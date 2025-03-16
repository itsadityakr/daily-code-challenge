### 3. **Assign Elements to Groups with Constraints** [C++ Code](./code.cpp)  

- **File**: code.cpp 
- **Description**:  
  - Given two arrays, `groups` and `elements`, the task is to assign each group to the earliest available element that satisfies certain constraints. Specifically, an element can be assigned to a group if it is a divisor of the group's value. The goal is to return an array where each entry corresponds to the index of the assigned element for each group. If no valid element is found, the entry should be `-1`.  
  - Constraints:  
    - The size of `groups` and `elements` can be up to 10^4.  
    - Each value in `groups` and `elements` can be up to 10^5.  

- **Understanding the Problem**:  
  - Imagine you have a list of groups, each with a specific number, and a list of elements, each with a unique index. You need to assign each group to an element such that the element's value is a divisor of the group's number. Additionally, you should assign the element with the smallest index possible. If no such element exists, the group remains unassigned (marked as `-1`).  
  - Example:  
    - Input: `groups = [12, 15, 10]`, `elements = [2, 3, 5]`  
    - Output: `[0, 1, 2]`  
    - Explanation:  
      - For group `12`, divisors are `2, 3, 4, 6`. The earliest element is `2` at index `0`.  
      - For group `15`, divisors are `3, 5`. The earliest element is `3` at index `1`.  
      - For group `10`, divisors are `2, 5`. The earliest element is `2` at index `0`, but it's already assigned. The next available element is `5` at index `2`.  

- **How to Approach the Problem**:  
  - Observe that for each group, we need to find all its divisors and check if any of those divisors exist in the `elements` array.  
  - To optimize, we can preprocess the `elements` array to store the earliest index of each element using a hash map.  
  - For each group, iterate through its divisors and use the hash map to find the smallest index of a valid element.  
  - Edge cases to consider:  
    - No valid element exists for a group.  
    - Elements with duplicate values (ensure we use the smallest index).  

- **Approach**:  
  1. **Preprocess the `elements` array**:  
     - Create a hash map (`mp`) to store the earliest index of each element.  
     - Iterate through the `elements` array and store the first occurrence of each element in the map.  
  2. **Assign elements to groups**:  
     - For each group, find all its divisors.  
     - For each divisor, check if it exists in the hash map. If it does, keep track of the smallest index.  
     - Assign the smallest index to the group. If no valid index is found, assign `-1`.  
  3. **Return the result**:  
     - After processing all groups, return the array of assigned indices.  

- **Key Concepts Explained**:  
  - **Divisors**: A number `d` is a divisor of `n` if `n % d == 0`. For example, divisors of `12` are `1, 2, 3, 4, 6, 12`.  
  - **Hash Map**: A data structure that stores key-value pairs. Here, it is used to store the earliest index of each element for quick lookup.  
  - **Time Complexity**: The time complexity is determined by the number of groups, the number of divisors for each group, and the lookup time in the hash map.  
  - **Space Complexity**: The space complexity is determined by the size of the hash map and the output array.  

- **Time Complexity**:  
  - Let `n` be the number of groups and `m` be the number of elements.  
  - For each group, we find its divisors, which takes `O(sqrt(groups[i]))` time.  
  - The hash map lookup is `O(1)` on average.  
  - Overall time complexity: `O(n * sqrt(max_group_value) + m)`.  

- **Space Complexity**:  
  - The hash map stores up to `m` elements.  
  - The output array stores `n` elements.  
  - Overall space complexity: `O(m + n)`.  

- **Dry Run**:  
  | Group | Divisors       | Valid Elements | Smallest Index | Assigned Index |  
  |-------|----------------|-----------------|-----------------|-----------------|  
  | 12    | 1, 2, 3, 4, 6  | 2, 3            | 0 (for 2)       | 0               |  
  | 15    | 1, 3, 5        | 3, 5            | 1 (for 3)       | 1               |  
  | 10    | 1, 2, 5        | 2, 5            | 2 (for 5)       | 2               |  

---
