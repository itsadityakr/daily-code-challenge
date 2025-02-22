## Day 24 - Problems


---

### 78. **Intersection of Two Arrays II** [🧲](./_78_intersection_of_two_arrays_II.cpp)
   - **File**: _78_intersection_of_two_arrays_II.cpp
   - **Description**:  
     This problem requires finding the intersection of two integer arrays. The intersection of two arrays is a new array that includes all elements that appear in both arrays, considering their frequency in the original arrays. For example, if an element appears twice in both arrays, it should appear twice in the result. 

   - **Approach**:  
     The solution uses the following steps:
     1. **Sort Both Arrays**:  
        To make comparison straightforward, both arrays (`nums1` and `nums2`) are sorted. Sorting helps align elements in increasing order, allowing for a two-pointer approach.
     2. **Two Pointers Technique**:  
        Two pointers (`i` and `j`) are initialized to traverse `nums1` and `nums2` respectively. The idea is to compare the elements at these pointers and decide the next action:  
        - If the element in `nums1` is smaller, increment pointer `i` to move to the next element in `nums1`.
        - If the element in `nums2` is smaller, increment pointer `j` to move to the next element in `nums2`.
        - If both elements are equal, it means the element is part of the intersection. Add it to the result and increment both pointers.
     3. **Return the Result**:  
        Once either pointer reaches the end of its respective array, the loop stops, and the result vector is returned.

     This approach ensures that each element is processed efficiently.

   - **Time Complexity**:  
     - Sorting both arrays takes \(O(n log n + m log m)\), where \(n\) and \(m\) are the sizes of `nums1` and `nums2`.
     - The two-pointer traversal takes \(O(\min(n, m))\) since it processes each element of both arrays once.
     - Overall, the time complexity is \(O(n log n + m log m)\).

   - **Space Complexity**:  
     - The solution uses additional space for the `result` vector to store the intersection elements, which could be up to \(O(min(n, m))\).
     - Sorting in-place ensures no extra space is used beyond the `result`.

--- 