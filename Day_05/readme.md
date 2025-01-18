## Day 5 - Problems
---

### 20. **Two Sum to Return Indices**
   - **File**: `_20_two_sum_to_return_indices.cpp`
   - **Description**: Given an array `nums` and a `target`, find two numbers in the array that sum up to the target and return their indices.
   - **Approach**: 
     - Use an unordered map (`num_map`) to store each element and its index. 
     - For each element `nums[i]`, calculate the complement `target - nums[i]`. If the complement is found in the map, return the indices of the current element and the complement.
     - The map ensures that we can find the complement in constant time.
   - **Time Complexity**: O(n), where `n` is the size of the array, as we iterate through the array once and perform constant-time operations for each element.
   - **Space Complexity**: O(n), due to the storage of elements and their indices in the map.

---

### 21. **Two Sum to Return Values**
   - **File**: `_21_two_sum_to_return_values.cpp`
   - **Description**: Find all pairs of elements in an array that sum up to a target value and return them as pairs.
   - **Approach**: 
     - Use a hash map to store the frequencies of elements in the array.
     - For each element, check if its complement (i.e., `target - arr[i]`) exists in the map.
     - Special case: If the element is its own complement (i.e., `target - arr[i] == arr[i]`), it must appear at least twice.
     - If a valid pair is found, decrease the frequency of both elements in the map.
   - **Time Complexity**: O(n), as each element is processed once.
   - **Space Complexity**: O(n), for storing the element frequencies in the hash map.

---

### 22. **Second Largest Element in Array**
   - **File**: `_22_second_largest_element_in_array.cpp`
   - **Description**: Find the second largest element in an array.
   - **Approach**: 
     - Initialize two variables `largest` and `secondLargest` to `INT_MIN`.
     - Iterate through the array: If an element is larger than `largest`, update `secondLargest` and `largest` accordingly.
     - If an element is smaller than `largest` but larger than `secondLargest`, update `secondLargest`.
     - If no valid second-largest element is found, return `-1`.
   - **Time Complexity**: O(n), as we only need to make one pass through the array.
   - **Space Complexity**: O(1), as only two variables are used.

---

### 23. **Maximum Difference Between Increasing Elements**
   - **File**: `_23_maximun_differences_between_increasing_elements.cpp`
   - **Description**: Find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
   - **Approach**: 
     - Track the minimum element encountered so far (`minElement`).
     - For each subsequent element, compute the difference between it and `minElement`, and update the maximum difference if the current difference is greater.
     - If an element is smaller than `minElement`, update `minElement` to this new value.
   - **Time Complexity**: O(n), as we iterate through the array once.
   - **Space Complexity**: O(1), since only a few variables are used.

---

### 24. **Sorted and Rotated**
   - **File**: `_24_sorted_and_rotated.cpp`
   - **Description**: Check if an array is sorted and rotated at most once.
   - **Approach**: 
     - Count how many times an element is greater than its next element (i.e., find how many "rotation points" exist in the array).
     - If there is more than one such point, return false (the array is rotated more than once). Otherwise, return true.
   - **Time Complexity**: O(n), as we need to iterate through the array once.
   - **Space Complexity**: O(1), since only a few variables are used.

---

### 25. **Equilibrium Index of Array**
   - **File**: `_25_equilibrium_index_of_array.cpp`
   - **Description**: Find the equilibrium index of an array, where the sum of elements on the left equals the sum on the right.
   - **Approach**: 
     - Calculate the total sum of the array.
     - Iterate through the array while maintaining a running sum (`leftSum`), and check if the sum of elements on the right is equal to `leftSum`. The right sum is computed by subtracting `leftSum` and the current element from the total sum.
     - If an equilibrium index is found, return it; otherwise, return `-1`.
   - **Time Complexity**: O(n), as we iterate through the array once.
   - **Space Complexity**: O(1), as we only use a few variables to store sums.

---