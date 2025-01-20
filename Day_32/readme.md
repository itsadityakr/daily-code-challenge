## Day 32 - Problems

---

### 111. **XOR Queries of a Subarray** [CPP Code](./_111_xor_queries_of_a_subarray.cpp)  
   - **File**: _111_xor_queries_of_a_subarray.cpp  
   - **Description**:  
     Given an array `arr` and a list of `queries`, each query is defined as two indices `[left, right]`. The task is to find the XOR of all the elements between indices `left` and `right` (inclusive) for each query.  

   - **Approach**:  
     To solve this problem efficiently, instead of calculating the XOR for each query from scratch, we use a **prefix XOR array**. Here's the step-by-step breakdown:  
     1. **Prefix XOR Array**:  
        - A prefix XOR array stores the cumulative XOR from the beginning of the array up to the current index.  
        - For example, if the array is `[a, b, c]`, then `prefixXOR[i] = a ^ b ^ ... ^ arr[i]`.  
     2. **Why Use Prefix XOR?**:  
        - If we want the XOR of a subarray from index `left` to `right`, we can use the prefix XOR values:  
          - If `left = 0`, the result is `prefixXOR[right]`.  
          - If `left > 0`, the result is `prefixXOR[right] ^ prefixXOR[left-1]`.  
        - This avoids recalculating the XOR for the subarray repeatedly, reducing time complexity.  
     3. **Steps in the Code**:  
        - Compute the prefix XOR array.  
        - For each query, calculate the result using the prefix XOR values and store it.  

   - **Time Complexity**:  
     - Calculating the prefix XOR array: \(O(n)\).  
     - Processing all queries: \(O(q)\), where \(q\) is the number of queries.  
     - Overall: \(O(n + q)\).  

   - **Space Complexity**:  
     - Prefix XOR array: \(O(n)\).  
     - Result storage: \(O(q)\).  
     - Overall: \(O(n + q)\).  

---

### 112. **Merge Overlapping Intervals** [CPP Code](./_112_merge_overlapping_intervals.cpp)  
   - **File**: _112_merge_overlapping_intervals.cpp  
   - **Description**:  
     Given a list of intervals, merge all overlapping intervals and return the merged intervals. For example, intervals `[1, 3]` and `[2, 6]` overlap and should be merged into `[1, 6]`.  

   - **Approach**:  
     To solve this problem, we follow these steps:  
     1. **Sort the Intervals**:  
        - First, sort the intervals based on their starting values. Sorting ensures that overlapping intervals are adjacent.  
     2. **Merge Intervals**:  
        - Use a result list to store merged intervals.  
        - Iterate through the sorted intervals:  
          - If the result list is empty or the current interval does not overlap with the last interval in the result list, add it to the result.  
          - Otherwise, merge the current interval with the last interval by updating the end time to the maximum of their end times.  
     3. **Key Points**:  
        - Sorting ensures that we only need to compare each interval with the last one in the result list.  
        - Overlap occurs if the start of the current interval is less than or equal to the end of the last interval in the result list.  

   - **Time Complexity**:  
     - Sorting the intervals: \(O(n \log n)\).  
     - Merging intervals: \(O(n)\).  
     - Overall: \(O(n \log n)\).  

   - **Space Complexity**:  
     - Result storage: \(O(n)\).  
     - Overall: \(O(n)\).  

---