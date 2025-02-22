## Day 14 - Problems

---

### 57. **Merge Two Sorted Arrays** [🧲](./_57_merge_two_sorted_arrays.cpp)
   - **File**: _57_merge_two_sorted_arrays.cpp
   - **Description**: Merge two sorted arrays into one sorted array in-place. The first array (`nums1`) has extra space to accommodate the second array (`nums2`). The merged elements should be sorted and stored in `nums1`.
   - **Approach**: 
     1. **Pointers Setup**:
        - Initialize three pointers:
          - `i` points to the last valid element in `nums1` (i.e., `m-1`).
          - `j` points to the last element in `nums2` (i.e., `n-1`).
          - `k` points to the last position in `nums1` (i.e., `m + n - 1`).
     2. **Comparing and Filling**:
        - Compare elements pointed to by `i` and `j`. Place the larger element at position `k` in `nums1` and decrement the respective pointer.
        - Repeat this process until one of the arrays is exhausted.
     3. **Copy Remaining Elements**:
        - If `nums2` still has elements left, copy them to `nums1`.
        - No need to handle leftover elements in `nums1`, as they are already in place.
     4. **Final Result**:
        - `nums1` will now contain the merged sorted array.
   - **Time Complexity**: \(O(m + n)\), as each element in `nums1` and `nums2` is processed once.
   - **Space Complexity**: \(O(1)\), since the merge operation is performed in-place.

---

### 58. **Three Sum** [🧲](./_58_three_sum.cpp)
   - **File**: _58_three_sum.cpp
   - **Description**: Find all unique triplets in the array that sum up to zero. Avoid duplicate triplets in the output.
   - **Approach**:
     1. **Sort the Array**:
        - Sorting helps in identifying duplicates and simplifies the two-pointer approach.
     2. **Iterate Through the Array**:
        - Use a loop to fix the first element (`nums[i]`) of the triplet.
        - If the current element is the same as the previous, skip it to avoid duplicates.
     3. **Two-Pointer Technique**:
        - Initialize two pointers: `left` to `i+1` and `right` to `n-1` (end of the array).
        - Compute the sum of the three elements: \( \text{sum} = \text{nums[i]} + \text{nums[left]} + \text{nums[right]} \).
          - If the sum equals zero, add the triplet to the result, then skip duplicates for both `left` and `right`.
          - If the sum is less than zero, increment `left` to increase the sum.
          - If the sum is greater than zero, decrement `right` to decrease the sum.
     4. **Skip Duplicates**:
        - After finding a valid triplet, move both pointers while skipping duplicate elements to ensure unique results.
     5. **Output**:
        - Return the list of unique triplets.
   - **Time Complexity**: \(O(n^2)\), as the outer loop runs \(O(n)\) times and the two-pointer approach runs \(O(n)\) for each iteration.
   - **Space Complexity**: \(O(1)\), excluding the output array.

---

### 59. **Maximum Product of Subarray** [🧲](./_59_maximum_product_of_subarray.cpp)
   - **File**: _59_maximum_product_of_subarray.cpp
   - **Description**: Find the contiguous subarray within an array that has the largest product.
   - **Approach**:
     1. **Dynamic Programming Variables**:
        - Use `maxProd` to store the maximum product ending at the current position.
        - Use `minProd` to store the minimum product ending at the current position (important for handling negative numbers).
        - Use `result` to track the global maximum product.
     2. **Iterate Through the Array**:
        - For each element in the array:
          - If the current element is negative, swap `maxProd` and `minProd` because multiplying by a negative reverses their roles.
          - Update `maxProd` to be the maximum of the current element or the product of `maxProd` with the current element.
          - Update `minProd` to be the minimum of the current element or the product of `minProd` with the current element.
        - Update `result` with the maximum value of `maxProd` at each step.
     3. **Handle Edge Cases**:
        - Arrays with a single element will have the maximum product equal to the element itself.
        - Negative numbers are handled through the dynamic swapping of `maxProd` and `minProd`.
     4. **Output**:
        - Return the value stored in `result` as the maximum product of any subarray.
   - **Time Complexity**: \(O(n)\), as we traverse the array once.
   - **Space Complexity**: \(O(1)\), as only a constant amount of extra space is used.

---
