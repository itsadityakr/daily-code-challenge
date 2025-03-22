# Day 89 - Problems

---
### 321. **Subarray Sum Equals K** [C++ Code](./_321_Longest_subarray_with_sum_K.cpp) [Py Code](./_321_Longest_subarray_with_sum_K.py)
- **File**: *321_Longest_subarray_with_sum_K*
- **Description**:
  - Given an array of integers and a target value k, find the total number of subarrays whose sum equals k.
  - A subarray is a contiguous non-empty sequence of elements within the array.

- **Understanding the Problem**:
  - We need to count how many contiguous segments within the array add up exactly to k.
  - For example, in [1,1,1] with k=2:
    - The subarray [1,1] from index 0 to 1 sums to 2.
    - The subarray [1,1] from index 1 to 2 also sums to 2.
    - So there are 2 subarrays with sum equal to k.

- **Pseudocode**:
```
function subarraySum(nums, k):
    Create a hash map with prefix_sum_count = {0: 1}
    Initialize prefix_sum = 0 and count = 0
    
    For each num in nums:
        Add num to prefix_sum
        If (prefix_sum - k) exists in prefix_sum_count:
            Add prefix_sum_count[prefix_sum - k] to count
        Increment prefix_sum_count[prefix_sum] by 1
    
    Return count
```

- **Approach**:
  1. The brute force approach would check every possible subarray by using nested loops, but that would be inefficient with O(n²) time complexity.
  2. Instead, we can use a prefix sum technique with a hash map to solve this efficiently.
  3. A prefix sum at position i represents the sum of all elements from index 0 to i.
  4. The key insight is that if we have two prefix sums, prefix_sum_i and prefix_sum_j, and their difference equals k (prefix_sum_i - prefix_sum_j = k), then the sum of elements between positions j+1 and i equals k.
  5. Rearranging this equation: prefix_sum_j = prefix_sum_i - k. So for each prefix sum we calculate, we check if (prefix_sum - k) exists in our hash map.
  6. We use a hash map to store the frequency of each prefix sum we've seen so far. We initialize it with {0: 1} to handle subarrays that start from index 0.
  7. As we iterate through the array:
     - We update the current prefix sum.
     - We check if (prefix_sum - k) exists in our hash map. If it does, it means there are subarrays ending at the current position with sum k. We add the frequency of such prefix sums to our count.
     - We update the frequency of the current prefix sum in our hash map.

- **Key Concepts Explained**:
  - **Prefix Sum**: A running total that represents the sum of all elements from the beginning of the array up to the current position. It helps us calculate the sum of any subarray quickly without having to add all elements individually.
  - **Hash Map for Optimization**: Using a hash map allows us to quickly look up if we've seen a specific prefix sum before, which is essential for determining if there's a subarray with the target sum.
  - **Cumulative Sum Property**: If the cumulative sum up to two indices (let's say i and j where j > i) differs by k, then the sum of elements between indices i+1 and j is k.

- **Time Complexity**: O(n) where n is the length of the array. We only need to iterate through the array once.

- **Space Complexity**: O(n) in the worst case, where we might need to store n distinct prefix sums in our hash map.

- **Dry Run**:
  - *Input*: nums = [1,2,3], k = 3
  - *Output*: 2
  - *Explanation*: The two subarrays with sum 3 are [1,2] and [3].
  - Steps:
    1. Initialize prefix_sum_count = {0: 1}, prefix_sum = 0, count = 0
    2. Process num = 1:
       - prefix_sum = 0 + 1 = 1
       - Check if (prefix_sum - k) = 1 - 3 = -2 exists in map: No
       - Update map: prefix_sum_count = {0: 1, 1: 1}
    3. Process num = 2:
       - prefix_sum = 1 + 2 = 3
       - Check if (prefix_sum - k) = 3 - 3 = 0 exists in map: Yes, with frequency 1
       - Increment count by 1, so count = 1
       - Update map: prefix_sum_count = {0: 1, 1: 1, 3: 1}
    4. Process num = 3:
       - prefix_sum = 3 + 3 = 6
       - Check if (prefix_sum - k) = 6 - 3 = 3 exists in map: Yes, with frequency 1
       - Increment count by 1, so count = 2
       - Update map: prefix_sum_count = {0: 1, 1: 1, 3: 1, 6: 1}
    5. Return count = 2
---


### 322. **Zero Sum Subarrays** [C++ Code](./_322_Count_subarrays_with_sum_0.cpp) [Py Code](./_322_Count_subarrays_with_sum_0.py)
- **File**: *322_Count_subarrays_with_sum_0*
- **Description**:
  - Given an array of integers, find the total count of subarrays whose sum equals 0.
  - A subarray is a contiguous sequence of elements within the array.

- **Understanding the Problem**:
  - We need to count how many contiguous segments in the array add up to exactly 0.
  - For example, in [0, 0, 5, 5, 0, 0]:
    - Each individual 0 forms a subarray with sum 0: [0], [0], [0], [0] (4 subarrays)
    - The pairs of zeros also form subarrays with sum 0: [0,0], [0,0] (2 subarrays)
    - Total: 6 subarrays with sum 0

- **Pseudocode**:
```
function findSubarray(arr):
    Create a hash map prefix_sum_count = {0: 1}
    Initialize prefix_sum = 0 and count = 0
    
    For each num in arr:
        Add num to prefix_sum
        If prefix_sum exists in prefix_sum_count:
            Add prefix_sum_count[prefix_sum] to count
        Increment prefix_sum_count[prefix_sum] by 1
    
    Return count
```

- **Approach**:
  1. This problem is similar to finding subarrays with a specific sum (k), except here k=0.
  2. We use the prefix sum technique with a hash map to efficiently find all zero-sum subarrays.
  3. A prefix sum at position i represents the sum of all elements from index 0 to i.
  4. The key insight: If we have the same prefix sum at two different positions (let's say i and j, where j > i), it means the sum of elements between positions i+1 and j is zero.
  5. We use a hash map to keep track of the frequency of each prefix sum we've encountered.
  6. We initialize the map with {0: 1} to account for the case where a subarray starting from index 0 has a sum of 0.
  7. As we iterate through the array:
     - We update the current prefix sum.
     - If this prefix sum already exists in our hash map, it means we've found subarrays with sum 0. We add the frequency of this prefix sum to our count.
     - We increment the frequency of the current prefix sum in our hash map.
  8. This approach effectively identifies all subarrays with a sum of 0 in a single pass through the array.

- **Key Concepts Explained**:
  - **Prefix Sum**: A running total calculated by adding each element to the sum of all previous elements. It allows us to compute the sum of any subarray efficiently.
  - **Hash Map for Pattern Recognition**: By storing prefix sums in a hash map, we can quickly identify when we've seen the same sum before, which indicates a zero-sum subarray.
  - **Zero Sum Property**: If the same prefix sum appears at positions i and j, the elements between i+1 and j must sum to zero (since the accumulated sum didn't change).
  - **Individual Zero Elements**: Each zero in the array automatically forms a zero-sum subarray by itself, which is properly counted by our algorithm.

- **Time Complexity**: O(n) where n is the length of the array. We only need to iterate through the array once.

- **Space Complexity**: O(n) in the worst case, where we might need to store n distinct prefix sums in our hash map.

- **Dry Run**:
  - *Input*: arr = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
  - *Output*: 4
  - *Explanation*: The 4 zero-sum subarrays are [-1, -3, 4], [-2, 2], [2, 4, 6, -12], and [-1, -3, 4, -2, 2]
  - Steps:
    1. Initialize prefix_sum_count = {0: 1}, prefix_sum = 0, count = 0
    2. Process num = 6:
       - prefix_sum = 0 + 6 = 6
       - Check if prefix_sum (6) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 1}
    3. Process num = -1:
       - prefix_sum = 6 + (-1) = 5
       - Check if prefix_sum (5) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 1, 5: 1}
    4. Process num = -3:
       - prefix_sum = 5 + (-3) = 2
       - Check if prefix_sum (2) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 1, 5: 1, 2: 1}
    5. Process num = 4:
       - prefix_sum = 2 + 4 = 6
       - Check if prefix_sum (6) exists in map: Yes, with frequency 1
       - Increment count by 1, so count = 1
       - Update map: prefix_sum_count = {0: 1, 6: 2, 5: 1, 2: 1}
    6. Process num = -2:
       - prefix_sum = 6 + (-2) = 4
       - Check if prefix_sum (4) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 2, 5: 1, 2: 1, 4: 1}
    7. Process num = 2:
       - prefix_sum = 4 + 2 = 6
       - Check if prefix_sum (6) exists in map: Yes, with frequency 2
       - Increment count by 2, so count = 3
       - Update map: prefix_sum_count = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1}
    8. Process num = 4:
       - prefix_sum = 6 + 4 = 10
       - Check if prefix_sum (10) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1, 10: 1}
    9. Process num = 6:
       - prefix_sum = 10 + 6 = 16
       - Check if prefix_sum (16) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1, 10: 1, 16: 1}
    10. Process num = -12:
       - prefix_sum = 16 + (-12) = 4
       - Check if prefix_sum (4) exists in map: Yes, with frequency 1
       - Increment count by 1, so count = 4
       - Update map: prefix_sum_count = {0: 1, 6: 3, 5: 1, 2: 1, 4: 2, 10: 1, 16: 1}
    11. Process num = -7:
       - prefix_sum = 4 + (-7) = -3
       - Check if prefix_sum (-3) exists in map: No
       - Update map: prefix_sum_count = {0: 1, 6: 3, 5: 1, 2: 1, 4: 2, 10: 1, 16: 1, -3: 1}
    12. Return count = 4
---


### 323. **Maximum Product Subarray** [C++ Code](./_323_Find_subarray_with_maximum_product.cpp) [Py Code](./_323_Find_subarray_with_maximum_product.py)
- **File**: *323_Find_subarray_with_maximum_product*
- **Description**:
  - Given an integer array, find the contiguous subarray that has the largest product, and return that product.
  - The answer is guaranteed to fit in a 32-bit integer.

- **Understanding the Problem**:
  - We need to find a sequence of consecutive numbers in the array whose product is the largest possible.
  - Unlike the maximum sum subarray problem, the product is tricky because negative numbers can make a large product when multiplied together.
  - For example, in [2,3,-2,4]:
    - Subarray [2] has product 2
    - Subarray [2,3] has product 6
    - Subarray [2,3,-2] has product -12
    - Subarray [2,3,-2,4] has product -48
    - Subarray [3] has product 3
    - Subarray [3,-2] has product -6
    - Subarray [3,-2,4] has product -24
    - Subarray [4] has product 4
    - Subarray [-2] has product -2
    - Subarray [-2,4] has product -8
    - The maximum product is 6 from the subarray [2,3].

- **Pseudocode**:
```
function maxProduct(nums):
    Initialize max_product, min_product, and result to nums[0]
    
    For i from 1 to length of nums - 1:
        If nums[i] is negative:
            Swap max_product and min_product
        
        Update max_product to maximum of (nums[i], max_product * nums[i])
        Update min_product to minimum of (nums[i], min_product * nums[i])
        Update result to maximum of (result, max_product)
    
    Return result
```

- **Approach**:
  1. This problem is tricky because of negative numbers. A negative number can turn a minimum product into a maximum product and vice versa.
  2. We need to keep track of both the maximum and minimum products ending at the current position.
  3. Why track the minimum product? Because if we encounter a negative number, multiplying it with the current minimum (which might be negative) could give us the new maximum.
  4. We initialize three variables:
     - `max_product`: keeps track of the maximum product ending at the current position
     - `min_product`: keeps track of the minimum product ending at the current position
     - `result`: keeps track of the overall maximum product we've seen so far
  5. As we iterate through the array:
     - If the current number is negative, we swap `max_product` and `min_product`. This is because multiplying a negative number with a minimum (negative) value gives a maximum value, and vice versa.
     - We update `max_product` to be the maximum of the current number itself and the product of the current number with the previous `max_product`.
     - Similarly, we update `min_product` to be the minimum of the current number itself and the product of the current number with the previous `min_product`.
     - We update `result` to be the maximum of the current `result` and `max_product`.
  6. This approach handles:
     - Positive numbers: They contribute to increasing the maximum product.
     - Negative numbers: They might contribute to a larger product if multiplied with another negative number.
     - Zeros: By considering the current number alone as an option, we effectively reset our products if we encounter a zero.

- **Key Concepts Explained**:
  - **Dynamic Programming**: We're using a variation of the Kadane's algorithm (used for maximum sum subarray), but with a twist to handle negative numbers.
  - **Minimum and Maximum Tracking**: The key insight is keeping track of both the minimum and maximum products ending at each position, as either could potentially lead to the maximum product depending on the sign of the next number.
  - **Sign Flipping**: When a negative number is encountered, the roles of the minimum and maximum products flip, which we handle by swapping them.
  - **Subproblem Definition**: At each step, we're solving the subproblem: "What is the maximum (and minimum) product of a subarray ending at this position?"

- **Time Complexity**: O(n) where n is the length of the array. We only need to iterate through the array once.

- **Space Complexity**: O(1) as we only use a constant amount of extra space regardless of the input size.

- **Dry Run**:
  - *Input*: nums = [2,3,-2,4]
  - *Output*: 6
  - *Explanation*: The subarray [2,3] has the largest product, which is 6.
  - Steps:
    1. Initialize max_product = min_product = result = nums[0] = 2
    2. Process nums[1] = 3:
       - nums[1] is not negative, so no swap
       - max_product = max(3, 2*3) = max(3, 6) = 6
       - min_product = min(3, 2*3) = min(3, 6) = 3
       - result = max(2, 6) = 6
    3. Process nums[2] = -2:
       - nums[2] is negative, so swap max_product and min_product
       - After swap: max_product = 3, min_product = 6
       - max_product = max(-2, 3*(-2)) = max(-2, -6) = -2
       - min_product = min(-2, 6*(-2)) = min(-2, -12) = -12
       - result = max(6, -2) = 6
    4. Process nums[3] = 4:
       - nums[3] is not negative, so no swap
       - max_product = max(4, -2*4) = max(4, -8) = 4
       - min_product = min(4, -12*4) = min(4, -48) = -48
       - result = max(6, 4) = 6
    5. Return result = 6
---

### 324. **Subarray with 0 Sum** [C++ Code](./_324_Check_if_a_subarray_with_sum_0_exist.cpp) [Py Code](./_324_Check_if_a_subarray_with_sum_0_exist.py)
- **File**: *324_Check_if_a_subarray_with_sum_0_exist*
- **Description**:
  - Determine if there exists a subarray (of size at least one) with a sum of 0 in the given array.
  - Return true if such a subarray exists, otherwise return false.
  - Constraints: Array size is between 1 and 10^4, and elements range from -10^5 to 10^5.

- **Understanding the Problem**:
  - We need to check if any contiguous segment of the array adds up exactly to zero.
  - There are several ways this can happen:
    - A single element that is 0
    - Multiple elements that sum to 0
  - For example, in [4, 2, -3, 1, 6]:
    - The subarray [2, -3, 1] sums to 0 (2 + (-3) + 1 = 0)
    - So the answer is true.
  - Another example: [4, 2, 0, 1, 6]
    - The subarray [0] has a sum of 0
    - So the answer is true.

- **Pseudocode**:
```
function subArrayExists(arr):
    Create an empty set prefix_sums
    Initialize prefix_sum = 0
    
    For each num in arr:
        Add num to prefix_sum
        If prefix_sum is 0 OR prefix_sum already exists in prefix_sums:
            Return true
        Add prefix_sum to prefix_sums
    
    Return false
```

- **Approach**:
  1. We'll use the prefix sum technique to efficiently determine if a zero-sum subarray exists.
  2. A prefix sum at position i represents the sum of all elements from index 0 to i.
  3. The key insight: If we have the same prefix sum at two different positions (let's say at positions i and j, where j > i), it means the sum of elements between positions i+1 and j is zero.
  4. Also, if the prefix sum itself becomes zero at any point, it means the subarray from the beginning to the current position sums to zero.
  5. We use a hash set (instead of a hash map used in previous problems) because we only need to track if we've seen a prefix sum before, not how many times.
  6. As we iterate through the array:
     - We update the current prefix sum.
     - If the prefix sum is 0 or we've seen this prefix sum before, we return true (a zero-sum subarray exists).
     - Otherwise, we add the current prefix sum to our set and continue.
  7. If we finish the loop without finding a zero-sum subarray, we return false.

- **Key Concepts Explained**:
  - **Prefix Sum**: A running total that keeps track of the sum of elements encountered so far. It helps us identify if parts of the array sum to zero.
  - **Hash Set for Efficient Lookups**: Using a hash set allows us to quickly check if we've seen a particular prefix sum before, which is crucial for determining if there's a zero-sum subarray.
  - **Zero Sum Identification**: There are two ways to identify a zero-sum subarray:
    - If the prefix sum becomes 0, it means all elements from the beginning up to the current position sum to 0.
    - If the same prefix sum appears twice, it means the elements between these two occurrences sum to 0.

- **Time Complexity**: O(n) where n is the length of the array. We only need to iterate through the array once, and hash set operations are O(1) on average.

- **Space Complexity**: O(n) in the worst case, where we might need to store n distinct prefix sums in our hash set.

- **Dry Run**:
  - *Input*: arr = [4, 2, -3, 1, 6]
  - *Output*: true
  - *Explanation*: The subarray [2, -3, 1] sums to 0.
  - Steps:
    1. Initialize prefix_sums = {}, prefix_sum = 0
    2. Process num = 4:
       - prefix_sum = 0 + 4 = 4
       - Is prefix_sum 0? No
       - Is prefix_sum in prefix_sums? No
       - Add prefix_sum to prefix_sums: prefix_sums = {4}
    3. Process num = 2:
       - prefix_sum = 4 + 2 = 6
       - Is prefix_sum 0? No
       - Is prefix_sum in prefix_sums? No
       - Add prefix_sum to prefix_sums: prefix_sums = {4, 6}
    4. Process num = -3:
       - prefix_sum = 6 + (-3) = 3
       - Is prefix_sum 0? No
       - Is prefix_sum in prefix_sums? No
       - Add prefix_sum to prefix_sums: prefix_sums = {4, 6, 3}
    5. Process num = 1:
       - prefix_sum = 3 + 1 = 4
       - Is prefix_sum 0? No
       - Is prefix_sum in prefix_sums? Yes (4 was added in step 2)
       - Return true (we found a zero-sum subarray)
    
    The algorithm correctly identifies that there is a zero-sum subarray. In this case, the elements between the two occurrences of prefix_sum = 4 form a subarray with sum 0, which is [2, -3, 1].
---