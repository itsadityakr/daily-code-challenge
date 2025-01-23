## Day 34 - Problems

---

### 115. **Count Inversions** [CPP Code](./_115_count_inversions.cpp)
   - **File**: _115_CountInversions.cpp_
   - **Description**:  
     The problem is to determine the number of valid permutations of size `n` that satisfy a set of requirements. Each requirement specifies that a certain position must have a specific number. We need to calculate the number of such permutations modulo \(10^9 + 7\).

   - **Approach**:  
     The approach involves **Dynamic Programming (DP)**. Let’s break it down:  
     1. **Understanding Requirements**:  
        - The requirements array specifies constraints for the permutations, such as a specific position needing to have a certain value.  
        - These are stored in an array `r` where `r[i]` contains the constraint for position `i` or `-1` if no constraint exists.  

     2. **Defining DP State**:  
        - `dp[i][j]` represents the number of permutations of the first `i` positions where the sum of the selected values is `j`.  
     
     3. **Transition**:  
        - Iterate through each position `i` from `1` to `n`.  
        - For each position, ensure it satisfies the constraints given by `r[i]`. If `r[i] != -1`, only the specified value can be used.  
        - For valid `j` values, compute `dp[i][j]` by summing up values from previous states `dp[i-1][j-k]` where `k` is the value used at position `i`.  

     4. **Result**:  
        - The answer is found at `dp[n][r[n]]`.  

     **Explanation for Beginners**:  
     - Imagine you're trying to arrange books (permutations) on a shelf while following specific rules (requirements).  
     - DP is like maintaining a table where each entry records how many valid ways exist for a specific arrangement up to that point.  

   - **Time Complexity**: \(O(n^2 x m)\), where \(n\) is the size of the permutation and \(m\) is the maximum value in the constraint.  
   - **Space Complexity**: \(O(n x m)\), for the DP table.

---

### 116. **Reverse Pairs** [CPP Code](./_116_reverse_pairs.cpp)
   - **File**: _116_reverse_pairs.cpp
   - **Description**:  
     The goal is to count all the **reverse pairs** in an array. A reverse pair is defined as a pair of indices \((i, j)\) such that \(i < j\) and \(nums[i] > 2 \times nums[j]\).  
   - **Approach**:  
     This problem also uses a **modified merge sort** technique, where we count the reverse pairs during the merge step.  

     **Steps:**  
     1. **Divide the array:** Recursively divide the array into smaller parts.  
     2. **Count reverse pairs:**  
        - For each pair of indices \(i\) in the left subarray and \(j\) in the right subarray, check if \(nums[i] > 2 \times nums[j]\).  
        - Increment the count for valid pairs.  
     3. **Merge step:**  
        - Merge the two sorted subarrays into one while maintaining sorted order.  
        - Use a temporary array for efficient merging.  
     4. **Final count:** The total count of reverse pairs is the sum of counts from all merge steps.  

     **Explanation of terms:**  
     - **Reverse Pair:** A pair of indices \((i, j)\) such that \(nums[i] > 2 \times nums[j]\).  
     - **Merge Sort:** Used to maintain sorted order and efficiently count valid pairs during merging.  

   - **Time Complexity**: \(O(n log n)\), where \(n\) is the size of the input array.  
   - **Space Complexity**: \(O(n)\), for the temporary arrays used during merging.  

--- 