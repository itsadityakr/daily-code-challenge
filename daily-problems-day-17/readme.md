## Day 16 - Problems

---

### 65. **Find Common Elements Between Two Arrays** [🧲](./_65_find_common_elements_between_two_arrays.cpp)
   - **File**: _65_find_common_elements_between_two_arrays.cpp
   - **Description**:  
     This program calculates how many elements are common between two input arrays and returns a pair of counts: one count for elements of the first array that are found in the second array, and another for elements of the second array found in the first array.  
   - **Approach**:  
     1. **Eliminating Duplicates Using Sets**:  
        - Convert both input arrays into `unordered_set` objects. This eliminates duplicate elements in each array and ensures faster lookups.  
        - For example, if `nums1 = [1, 2, 2, 3]`, the corresponding set becomes `{1, 2, 3}`.  
     2. **Count Common Elements**:  
        - Iterate through each element in `nums1`. For each element, check if it exists in the set of `nums2` and increment a counter.  
        - Similarly, iterate through each element in `nums2` and check against the set of `nums1`, incrementing another counter.  
        - The two counters represent the number of common elements from the perspective of each array.  
     3. **Return the Result**:  
        - Return the two counts as a vector.  

     This approach ensures efficient lookup and avoids redundant checks using hash sets.  

   - **Time Complexity**:  
     - Converting arrays to sets: \(O(N + M)\), where \(N\) and \(M\) are the sizes of the two arrays.  
     - Counting common elements: \(O(N + M)\).  
     - Overall: \(O(N + M)\).  
   - **Space Complexity**:  
     - \(O(N + M)\) for the two sets.  

---

### 66. **Find the Largest Number by Rearranging Arrays** [🧲](./_66_find_the_largest_number_by_rearranging_arrays.cpp)
   - **File**: _66_find_the_largest_number_by_rearranging_arrays.cpp
   - **Description**:  
     This program rearranges the elements of an array to form the largest possible number when concatenated.  
   - **Approach**:  
     1. **Convert Numbers to Strings**:  
        - Since concatenation involves string operations, convert each integer in the array into its string equivalent.  
        - For example, if the array is `[3, 30, 34]`, the string equivalents are `["3", "30", "34"]`.  
     2. **Custom Sorting**:  
        - Sort the string array using a custom comparator. For two strings \(a\) and \(b\), compare \(a + b\) and \(b + a\).  
        - For example:  
          - If \(a = "3"\) and \(b = "30"\), compare \(a + b = "330"\) and \(b + a = "303"\). Since \(330 > 303\), "3" comes before "30".  
        - This ensures that the resulting concatenation forms the largest number.  
     3. **Handle Edge Case for Zeros**:  
        - If the sorted array starts with "0", the entire number is "0". Return "0" in such cases.  
     4. **Concatenate the Result**:  
        - Combine all sorted strings into a single string to form the largest number.  

   - **Time Complexity**:  
     - Sorting: \(O(N \log N)\), where \(N\) is the size of the array.  
     - Concatenation: \(O(N \cdot K)\), where \(K\) is the average length of numbers.  
     - Overall: \(O(N \log N)\).  
   - **Space Complexity**:  
     - \(O(N)\) for storing string representations of the numbers.  

---

### 67. **Maximum Sum in a Circular Subarray** [🧲](./_67_maximum_sum_in_a_circular_subarray.cpp)
   - **File**: _67_maximum_sum_in_a_circular_subarray.cpp
   - **Description**:  
     This program finds the maximum possible sum of a subarray in a circular array. A circular array allows elements to wrap around, connecting the end of the array to its beginning.  
   - **Approach**:  
     1. **Use Kadane’s Algorithm for Non-Circular Sum**:  
        - Find the maximum subarray sum in the standard (non-circular) case using Kadane's algorithm.  
        - Track the current maximum (`curMax`) and update the global maximum (`maxSum`) as you iterate.  
     2. **Use Kadane’s Algorithm for Minimum Sum**:  
        - Find the minimum subarray sum by reversing Kadane’s approach to track the current minimum (`curMin`) and the global minimum (`minSum`).  
     3. **Calculate Total Sum**:  
        - Sum all elements of the array. This is used to compute the "wraparound sum."  
     4. **Determine the Result**:  
        - The maximum sum is the greater of:  
          - \(maxSum\): the standard maximum subarray sum.  
          - \(totalSum - minSum\): the circular maximum sum (excluding the smallest subarray).  
        - Handle the case where all elements are negative by returning \(maxSum\), since \(totalSum - minSum\) would incorrectly give \(0\).  

   - **Time Complexity**:  
     - \(O(N)\), where \(N\) is the size of the array.  
   - **Space Complexity**:  
     - \(O(1)\), as no extra data structures are used.  

---

### 68. **Merge Overlapping Intervals** [🧲](./_68_merge_overlapping_intervals.cpp)
   - **File**: _68_merge_overlapping_intervals.cpp
   - **Description**:  
     Given a list of intervals, merge all overlapping intervals into a single interval where possible.  
   - **Approach**:  
     1. **Sort Intervals by Start Time**:  
        - Sort the intervals based on their starting times. This allows efficient merging since overlapping intervals will be adjacent in the sorted order.  
     2. **Iterate and Merge**:  
        - Initialize an empty list `merged` to store the merged intervals.  
        - For each interval:  
          - If `merged` is empty or the current interval does not overlap with the last interval in `merged`, add it to `merged`.  
          - Otherwise, merge the intervals by updating the end time of the last interval in `merged`.  
        - For example:  
          - Input: \([[1, 3], [2, 6], [8, 10], [15, 18]]\)  
          - After sorting: \([[1, 3], [2, 6], [8, 10], [15, 18]]\)  
          - Merge \([1, 3]\) and \([2, 6]\) to get \([1, 6]\).  
     3. **Return the Result**:  
        - The list `merged` contains all non-overlapping intervals.  

   - **Time Complexity**:  
     - Sorting: \(O(N \log N)\), where \(N\) is the number of intervals.  
     - Merging: \(O(N)\).  
     - Overall: \(O(N \log N)\).  
   - **Space Complexity**:  
     - \(O(N)\) for storing the merged intervals.  

---