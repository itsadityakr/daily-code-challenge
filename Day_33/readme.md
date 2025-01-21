## Day  - Problems

---

### 113. **Merge Sorted Array Without Extra Space** [CPP Code](./_113_merge_sorted_array_without_extra_space.cpp)

- **File**: _113_merge_sorted_array_without_extra_space.cpp  
- **Description**:  
   Given two sorted arrays, `nums1` and `nums2`, the task is to merge `nums2` into `nums1` as one sorted array. The elements of `nums1` can accommodate all elements from both arrays (`nums1` has a size of `m + n` with extra space initially filled with 0s).  

- **Approach**:  
   - **Key Idea**: Start merging from the end of both arrays to avoid shifting elements.  
   - **Steps**:  
     1. Use three pointers:  
        - `i` starts at the last valid element of `nums1` (index `m-1`).
        - `j` starts at the last element of `nums2` (index `n-1`).
        - `k` starts at the last position in `nums1` (index `m+n-1`).
     2. Compare elements pointed to by `i` and `j`.  
        - Place the larger element at the position pointed to by `k`.  
        - Decrement the corresponding pointer (`i` or `j`) and also decrement `k`.  
     3. If any elements remain in `nums2` (when `j >= 0`), copy them into `nums1`.  
   - **Beginner-Friendly Explanation**:  
     Imagine filling a bucket (final array) by picking from two stacks (arrays). You always take the largest item from the top of each stack to ensure the bucket remains sorted. This way, you avoid the need to rearrange the bucket repeatedly.  

- **Time Complexity**:  
   - \( O(m + n) \): You iterate through both arrays once.  

- **Space Complexity**:  
   - \( O(1) \): No additional data structures are used; operations are performed in-place.  

---

### 114. **Find the Duplicate Number** [CPP Code](./_114_repeating_numbers.cpp)

- **File**: _114_repeating_numbers.cpp  
- **Description**:  
   Given an array `nums` containing `n + 1` integers where each integer is between `1` and `n` inclusive, there is exactly one duplicate number. Find the duplicate without modifying the array.  

- **Approach**:  
   - **Key Idea**: Use the array itself to track visits by marking elements as negative.  
   - **Steps**:  
     1. Iterate through the array. For each element, get its absolute value (`idx = abs(nums[i])`).  
     2. Check if the value at index `idx` is negative:  
        - If yes, it means the index has been visited before, and `idx` is the duplicate number.  
        - Otherwise, negate the value at index `idx` to mark it as visited.  
     3. If no duplicate is found, return `n`.  
   - **Beginner-Friendly Explanation**:  
     Think of the array as a set of rooms, and you’re visiting each room based on the values in the array. Each time you visit a room, you leave a mark (make the number negative). If you enter a room that already has a mark, it means you’ve been there before, and that’s the duplicate.  

- **Time Complexity**:  
   - \( O(n) \): You iterate through the array once.  

- **Space Complexity**:  
   - \( O(1) \): The solution modifies the array in-place without extra storage.  

---