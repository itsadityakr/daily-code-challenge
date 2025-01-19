## Day 31 - Problems

---

### 108. **3Sum** [CPP Code](./_108_three_sum.cpp)
   - **File**: _108_three_sum.cpp
   - **Description**: Find all unique triplets in an array that sum up to zero.
   - **Approach**: 
     1. **Sort the array**: Sorting helps in efficiently finding pairs using the two-pointer technique.
     2. **Fix one number**:
        - Use a loop to fix the first number (\(nums[i]\)).
        - For the remaining part of the array (\(nums[i+1]\) to end), find two numbers that sum up to \(-nums[i]\).
     3. **Two-pointer method**:
        - Set two pointers: `left` (start of the remaining array) and `right` (end of the array).
        - Calculate the sum of the numbers at these two pointers and compare it with the target (\(-nums[i]\)).
        - If the sum matches, add the triplet \([nums[i], nums[left], nums[right]]\) to the result.
        - Adjust the pointers:
          - Move `left` forward if `nums[left]` repeats to avoid duplicates.
          - Move `right` backward if `nums[right]` repeats to avoid duplicates.
     4. **Skip duplicates**:
        - Before fixing a number (\(nums[i]\)), check if it’s the same as the previous number. If so, skip it to avoid duplicate triplets.
   - **Time Complexity**: 
     - Sorting the array takes \(O(n logn)\).
     - Finding pairs for each number takes \(O(n^2)\), so the overall complexity is \(O(n^2)\).
   - **Space Complexity**: \(O(1)\) (no additional storage used except the result array).

---

### 109. **4Sum** [CPP Code](./_109_four_sum.cpp)
   - **File**: _109_four_sum.cpp
   - **Description**: Find all unique quadruplets in an array that sum to a given target.
   - **Approach**:
     1. **Sort the array**: Sorting helps in efficiently finding pairs using two pointers and managing duplicates.
     2. **Fix two numbers**:
        - Use two nested loops to fix the first two numbers (\(nums[i]\) and \(nums[j]\)).
        - For the remaining part of the array (\(nums[j+1]\) to end), find two numbers that sum up to \(target - nums[i] - nums[j]\).
     3. **Two-pointer method**:
        - Set two pointers: `left` and `right`.
        - Calculate the sum of the numbers at these pointers and compare it with the remaining target.
        - If the sum matches, add the quadruplet \([nums[i], nums[j], nums[left], nums[right]]\) to the result.
        - Adjust the pointers to skip duplicate values.
     4. **Skip duplicates**:
        - Skip duplicate values for both \(nums[i]\) and \(nums[j]\) to ensure unique quadruplets.
     5. **Use long long for calculations**:
        - Since the target and sum calculations might overflow for large integers, use `long long` to handle these cases.
   - **Time Complexity**: \(O(n^3)\):
     - Two nested loops take \(O(n^2)\).
     - The two-pointer search takes \(O(n)\).
   - **Space Complexity**: \(O(1)\) (excluding the result array).

---

### 110. **Contiguous Array** [CPP Code](./_110_length_of_subarray_with_equal_number_of_0_and_1.cpp)
   - **File**: _110_length_of_subarray_with_equal_number_of_0_and_1.cpp
   - **Description**: Find the maximum length of a contiguous subarray with an equal number of 0s and 1s.
   - **Approach**:
     1. **Transform the array**:
        - Replace all 0s with -1. Now the problem is to find the longest subarray with a sum of 0.
     2. **Use a prefix sum**:
        - Calculate the prefix sum as you iterate through the array.
        - The prefix sum at any index represents the cumulative sum from the start of the array to that index.
     3. **Store prefix sums in a map**:
        - Use a hash map to store the first occurrence of each prefix sum.
        - If the same prefix sum appears again, the subarray between those indices has a sum of 0.
     4. **Update the maximum length**:
        - For every prefix sum found in the map, calculate the subarray length and update the maximum length if it’s larger.
   - **Example**:
        - Input: \(nums = [0, 1, 0]\)
        - After transformation: \(nums = [-1, 1, -1]\)
        - Prefix sums: \([-1, 0, -1]\)
        - Subarray with sum 0: From index 0 to 2.
   - **Time Complexity**: \(O(n)\) (one pass through the array).
   - **Space Complexity**: \(O(n)\) (for the hash map).

---