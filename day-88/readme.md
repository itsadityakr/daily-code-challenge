# Day 88 - Problems
---
### 316. **Find the Duplicate Number** [C++ Code](./_316_Find_the_duplicate_element_in_an_array.cpp) [Py Code](./_316_Find_the_duplicate_element_in_an_array.py)
- **File**: *316_Find_the_duplicate_element_in_an_array*
- **Description**:
  - Given an array of integers containing n+1 integers where each integer is in the range [1, n], find the one duplicate number in the array.
  - The duplicate number can appear multiple times in the array.
  - The solution should use constant extra space and should not modify the array.

- **Understanding the Problem**:
  - We have an array of n+1 numbers, but all numbers are in the range [1, n].
  - By the pigeonhole principle, at least one number must be repeated.
  - We need to find this duplicate number.
  - For example, in [1,3,4,2,2]:
    - The array has 5 elements (n+1=5, so n=4)
    - All elements are in the range [1, 4]
    - Since we have 5 slots but only 4 possible values, at least one value must be repeated
    - The duplicate is 2, which appears twice

- **Pseudocode**:
```
function findDuplicate(nums):
    Initialize slow = nums[0]
    Initialize fast = nums[0]
    
    // Phase 1: Find the intersection point in the cycle
    do:
        slow = nums[slow]
        fast = nums[nums[fast]]
    while slow != fast
    
    // Phase 2: Find the entrance to the cycle
    slow = nums[0]
    while slow != fast:
        slow = nums[slow]
        fast = nums[fast]
    
    return slow
```

- **Approach**:
  1. This problem can be solved using Floyd's Tortoise and Hare algorithm (Cycle Detection).
  2. The key insight is to treat the array as a linked list where the value at each index points to the next node.
  3. If we visualize this, a duplicate number means there will be a cycle in this "linked list" structure.
  4. For example, with [1,3,4,2,2]:
     - Start at index 0, value is 1, go to index 1
     - At index 1, value is 3, go to index 3
     - At index 3, value is 2, go to index 2
     - At index 2, value is 4, go to index 4
     - At index 4, value is 2, go to index 2
     - Now we're back at index 2, creating a cycle
  5. We use two pointers: slow and fast
     - The slow pointer moves one step at a time: slow = nums[slow]
     - The fast pointer moves two steps at a time: fast = nums[nums[fast]]
  6. The algorithm has two phases:
     - Phase 1: Find the intersection point of the slow and fast pointers within the cycle
     - Phase 2: Find the start of the cycle (which is the duplicate number)
  7. Once the two pointers meet in Phase 1, we reset the slow pointer to the start of the array while keeping the fast pointer at the meeting point, and then move both pointers at the same speed. The point where they meet again is the entrance to the cycle, which is our duplicate number.

- **Key Concepts Explained**:
  - **Floyd's Tortoise and Hare (Cycle Detection)**: A cycle-finding algorithm that uses two pointers moving at different speeds to detect a cycle in a sequence.
  - **Array as Linked List**: By treating the value at each index as a pointer to another index, we can visualize the array as a linked list.
  - **Cycle in Linked List**: A duplicate value creates a cycle in our virtual linked list because two different indices will point to the same next location.
  - **Two-Phase Approach**: 
    - Phase 1 finds a meeting point inside the cycle
    - Phase 2 finds the start of the cycle (our duplicate)
  - Think of it like two runners on a circular track - if one runs twice as fast as the other, they'll eventually meet. Then, if one runner starts at the beginning and they both run at the same speed, they'll meet at the entrance to the loop.

- **Time Complexity**: O(n) where n is the length of the array. In the worst case, we might need to traverse a significant portion of the array, but it's still linear time.

- **Space Complexity**: O(1) as we only use two pointers regardless of the input size.

- **Dry Run**:
  - *Input*: nums = [1,3,4,2,2]
  - *Output*: 2
  - *Explanation*: The duplicate number is 2.
  - Steps:
    1. Initialize slow = fast = nums[0] = 1
    2. Phase 1: Find meeting point
       - Iteration 1:
         - slow = nums[slow] = nums[1] = 3
         - fast = nums[nums[fast]] = nums[nums[1]] = nums[3] = 2
         - slow != fast, continue
       - Iteration 2:
         - slow = nums[slow] = nums[3] = 2
         - fast = nums[nums[fast]] = nums[nums[2]] = nums[4] = 2
         - slow = fast = 2, break the loop
    3. Phase 2: Find cycle entrance
       - Reset slow = nums[0] = 1, keep fast = 2
       - Iteration 1:
         - slow = nums[slow] = nums[1] = 3
         - fast = nums[fast] = nums[2] = 4
         - slow != fast, continue
       - Iteration 2:
         - slow = nums[slow] = nums[3] = 2
         - fast = nums[fast] = nums[4] = 2
         - slow = fast = 2, break the loop
    4. Return slow = 2 as the duplicate number
---

### 317. **Print All Subarrays of an Array** [C++ Code](./_317_Print_all_subarrays_of_an_array.cpp) [Py Code](./_317_Print_all_subarrays_of_an_array.py)
- **File**: *317_Print_all_subarrays_of_an_array*
- **Description**:
  - Generate and return all possible subarrays of a given array.
  - A subarray is a contiguous sequence of elements within an array.

- **Understanding the Problem**:
  - We need to find every possible continuous segment of the original array.
  - For example, with the array [1, 2, 3]:
    - Subarrays starting at index 0: [1], [1,2], [1,2,3]
    - Subarrays starting at index 1: [2], [2,3]
    - Subarrays starting at index 2: [3]
    - In total, there are 6 subarrays: [1], [1,2], [1,2,3], [2], [2,3], [3]

- **Pseudocode**:
```
function getSubArrays(arr):
    n = length of arr
    Initialize empty result array
    
    For start from 0 to n-1:
        For end from start to n-1:
            Initialize empty subarray
            For i from start to end:
                Add arr[i] to subarray
            Add subarray to result
    
    Return result
```

- **Approach**:
  1. To generate all subarrays, we need to consider all possible starting and ending points in the array.
  2. We use two nested loops:
     - The outer loop selects the starting point (from 0 to n-1).
     - The inner loop selects the ending point (from the starting point to n-1).
  3. For each combination of starting and ending points, we:
     - Create a new subarray.
     - Fill it with elements from the original array from the start to end indices.
     - Add this subarray to our result list.
  4. This approach ensures we capture all possible contiguous segments of the array.
  5. The total number of subarrays for an array of size n will be n*(n+1)/2, because:
     - There are n subarrays of length 1
     - There are n-1 subarrays of length 2
     - There are n-2 subarrays of length 3
     - And so on...

- **Key Concepts Explained**:
  - **Subarray vs. Subsequence**: A subarray must be contiguous, meaning all elements must be adjacent in the original array. A subsequence doesn't need to be contiguous.
  - **Nested Loops for Enumeration**: The use of nested loops allows us to systematically generate all possible combinations of starting and ending points.
  - **Contiguous Segments**: Each subarray represents a window or segment of consecutive elements in the original array.

- **Time Complexity**: O(n³) where n is the length of the array.
  - We have n possible starting points.
  - For each starting point, we have at most n possible ending points.
  - For each pair of starting and ending points, we spend O(n) time creating the subarray.

- **Space Complexity**: O(n³) for storing all the subarrays.
  - In the worst case, we have O(n²) subarrays.
  - Each subarray can be up to length n.

- **Dry Run**:
  - *Input*: arr = [1, 2, 3]
  - *Output*: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
  - *Explanation*: These are all possible contiguous subarrays of the given array.
  - Steps:
    1. Initialize result = []
    2. For start = 0:
       - For end = 0:
         - Create subarray = [1]
         - Add to result: result = [[1]]
       - For end = 1:
         - Create subarray = [1, 2]
         - Add to result: result = [[1], [1, 2]]
       - For end = 2:
         - Create subarray = [1, 2, 3]
         - Add to result: result = [[1], [1, 2], [1, 2, 3]]
    3. For start = 1:
       - For end = 1:
         - Create subarray = [2]
         - Add to result: result = [[1], [1, 2], [1, 2, 3], [2]]
       - For end = 2:
         - Create subarray = [2, 3]
         - Add to result: result = [[1], [1, 2], [1, 2, 3], [2], [2, 3]]
    4. For start = 2:
       - For end = 2:
         - Create subarray = [3]
         - Add to result: result = [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
    5. Return result = [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]

---
### 318. **Find the Sum of All Subarrays** [C++ Code](./_318_Find_the_sum_of_all_subarrays.cpp) [Py Code](./_318_Find_the_sum_of_all_subarrays.py) 
- **File**: *318_Find_the_sum_of_all_subarrays*  
- **Description**:  
  - The problem requires finding the sum of all possible subarrays of a given array.
  - For an array of size n, we need to consider all n(n+1)/2 possible subarrays, calculate the sum of each subarray, and then return the total sum of all these subarrays.
  - The result should be returned modulo 10^9+7 to handle large numbers.

- **Understanding the Problem**:  
  - A subarray is a contiguous part of an array. For example, in array [1, 2, 3], the subarrays are [1], [2], [3], [1,2], [2,3], and [1,2,3].
  - We need to find the sum of each subarray and then add them all together.
  - For example, with [1, 2, 3]:
    - Subarray [1]: Sum = 1
    - Subarray [2]: Sum = 2
    - Subarray [3]: Sum = 3
    - Subarray [1,2]: Sum = 1+2 = 3
    - Subarray [2,3]: Sum = 2+3 = 5
    - Subarray [1,2,3]: Sum = 1+2+3 = 6
    - Total sum = 1+2+3+3+5+6 = 20

- **Pesudocode**:
```
function subarraySum(arr):
    Initialize totalSum = 0
    n = length of arr
    
    for i from 0 to n-1:
        Calculate the number of subarrays in which arr[i] appears
        Calculate the contribution of arr[i] to the total sum
        Add this contribution to totalSum
    
    return totalSum modulo 10^9+7
```

- **Approach**:  
  1. The brute force approach would be to generate all possible subarrays, compute their sums, and add them up. However, that would be inefficient for large arrays.
  
  2. A more efficient approach is to calculate how many times each element appears in all possible subarrays and multiply the element by that count.
  
  3. For an element at index i in an array of size n:
     - Number of subarrays that start at or before index i = (i + 1)
     - Number of subarrays that end at or after index i = (n - i)
     - Therefore, the number of subarrays containing element arr[i] = (i + 1) * (n - i)
  
  4. The contribution of each element arr[i] to the total sum is arr[i] * (i + 1) * (n - i).
  
  5. Sum up the contributions of all elements to get the total sum of all subarrays.
  
  6. To avoid integer overflow, we use long long data type and take modulo 10^9+7 of the result.

- **Key Concepts Explained**:  
  - **Subarray**: A slice of an array that consists of consecutive elements from the original array. For instance, in [1, 2, 3, 4], [2, 3] is a subarray but [2, 4] is not because the elements are not consecutive in the original array.
  
  - **Contribution of an element**: Each element contributes to multiple subarray sums. By calculating how many times each element appears in all possible subarrays, we can directly compute its total contribution.
  
  - **Modular arithmetic**: When dealing with large numbers that might overflow standard data types, we often use modular arithmetic. In this problem, we take the modulo 10^9+7 of the result to keep the numbers manageable.

- **Time Complexity**: O(n), where n is the size of the array. We only need to iterate through the array once, and for each element, we perform a constant amount of work.

- **Space Complexity**: O(1), as we only use a few variables regardless of the input size.

**Dry Run**:
- *Input*: [1, 2, 3]
- *Output*: 20
- *Explanation*:
- Steps:
  1. Initialize n = 3, totalSum = 0
  2. For i = 0, arr[i] = 1:
     - Contribution = 1 * (0+1) * (3-0) = 1 * 1 * 3 = 3
     - totalSum = 0 + 3 = 3
  3. For i = 1, arr[i] = 2:
     - Contribution = 2 * (1+1) * (3-1) = 2 * 2 * 2 = 8
     - totalSum = 3 + 8 = 11
  4. For i = 2, arr[i] = 3:
     - Contribution = 3 * (2+1) * (3-2) = 3 * 3 * 1 = 9
     - totalSum = 11 + 9 = 20
  5. Return totalSum = 20 (which matches our manual calculation from before)

---
### 319. **Maximum Sum Subarray** [C++ Code](./_319_Maximum_sum_subarray.cpp) [Py Code](./_319_Maximum_sum_subarray.py) 
- **File**: *319_Maximum_sum_subarray*  
- **Description**:  
  - This problem requires finding the contiguous subarray with the largest sum from a given array of integers.
  - The array may contain both positive and negative integers.
  - If the array consists of all negative numbers, the answer would be the single element with the largest value.

- **Understanding the Problem**:  
  - We need to find a sequence of consecutive elements in the array that adds up to the maximum possible sum.
  - For example, in the array [-2, 1, -3, 4, -1, 2, 1, -5, 4]:
    - Various subarrays include: [-2], [1], [-3], [4], [-2, 1], [1, -3], [4, -1, 2, 1], etc.
    - The sums of these subarrays would be: -2, 1, -3, 4, -1, -2, 6, etc.
    - The maximum sum is 6, which comes from the subarray [4, -1, 2, 1].

- **Pesudocode**:
```
function maxSubArray(nums):
    maxSum = nums[0]
    curSum = 0
    
    for each num in nums:
        curSum = max(num, curSum + num)
        maxSum = max(maxSum, curSum)
    
    return maxSum
```

- **Approach**:  
  1. This problem can be solved using Kadane's algorithm, which is a dynamic programming approach.
  
  2. The key insight is that at each position, we have two choices:
     - Start a new subarray beginning at the current position
     - Extend the existing subarray to include the current element
  
  3. We should choose whichever gives a larger sum.
  
  4. We maintain two variables:
     - `curSum`: the maximum sum of a subarray ending at the current position
     - `maxSum`: the maximum sum of any subarray found so far
  
  5. For each element in the array:
     - If `curSum` becomes negative, it's better to start a new subarray. So, we reset `curSum` to the current element.
     - Otherwise, we add the current element to `curSum`.
     - We update `maxSum` if `curSum` becomes larger than the current `maxSum`.

  6. The implementation simplifies this logic by using the max function:
     - `curSum = max(num, curSum + num)` effectively decides whether to start a new subarray or extend the existing one.
     - `maxSum = max(maxSum, curSum)` keeps track of the largest sum found.

- **Key Concepts Explained**:  
  - **Kadane's Algorithm**: A dynamic programming approach to solve the maximum subarray problem efficiently. The algorithm works by keeping track of the maximum sum subarray ending at each position and updating the global maximum accordingly.
  
  - **Dynamic Programming**: A method for solving complex problems by breaking them down into simpler subproblems. In this case, we build the solution incrementally by considering one element at a time.
  
  - **Local vs. Global Maximum**: `curSum` represents the local maximum (best subarray ending at current position), while `maxSum` represents the global maximum (best subarray found anywhere in the array).

- **Time Complexity**: O(n), where n is the length of the array. We only need to iterate through the array once, performing constant-time operations for each element.

- **Space Complexity**: O(1), as we only use two variables (`maxSum` and `curSum`) regardless of the input size.

**Dry Run**:
- *Input*: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
- *Output*: 6
- *Explanation*: The subarray [4, -1, 2, 1] has the largest sum of 6.
- Steps:
  1. Initialize maxSum = -2, curSum = 0
  2. Process -2: curSum = max(-2, 0 + (-2)) = -2, maxSum = max(-2, -2) = -2
  3. Process 1: curSum = max(1, -2 + 1) = 1, maxSum = max(-2, 1) = 1
  4. Process -3: curSum = max(-3, 1 + (-3)) = -2, maxSum = max(1, -2) = 1
  5. Process 4: curSum = max(4, -2 + 4) = 4, maxSum = max(1, 4) = 4
  6. Process -1: curSum = max(-1, 4 + (-1)) = 3, maxSum = max(4, 3) = 4
  7. Process 2: curSum = max(2, 3 + 2) = 5, maxSum = max(4, 5) = 5
  8. Process 1: curSum = max(1, 5 + 1) = 6, maxSum = max(5, 6) = 6
  9. Process -5: curSum = max(-5, 6 + (-5)) = 1, maxSum = max(6, 1) = 6
  10. Process 4: curSum = max(4, 1 + 4) = 5, maxSum = max(6, 5) = 6
  11. Return maxSum = 6

---
### 320. **Smallest Sum Subarray** [C++ Code](./_320_Smallest_sum_subarray.cpp) [Py Code](./_320_Smallest_sum_subarray.py) 
- **File**: *320_Smallest_sum_subarray*  
- **Description**:  
  - This problem requires finding the contiguous subarray with the smallest (minimum) sum from a given array of integers.
  - The array may contain both positive and negative integers.
  - We need to return the sum of the subarray that has the smallest sum among all possible subarrays.

- **Understanding the Problem**:  
  - We need to find a sequence of consecutive elements in the array that adds up to the minimum possible sum.
  - For example, in the array [3, -4, 2, -3, -1, 7, -5]:
    - Various subarrays include: [3], [-4], [2], [3, -4], [-4, 2], [3, -4, 2], etc.
    - The sums of these subarrays would be: 3, -4, 2, -1, -2, -1, etc.
    - Looking at all possibilities, the subarray [-4, 2, -3, -1] has the smallest sum of -6.

- **Pesudocode**:
```
function smallestSumSubarray(nums):
    minSum = nums[0]
    curSum = 0
    
    for each num in nums:
        if curSum >= 0:
            curSum = num
        else:
            curSum += num
        minSum = min(minSum, curSum)
    
    return minSum
```

- **Approach**:  
  1. This problem is essentially the inverse of the maximum subarray sum problem, and we can solve it using a modified version of Kadane's algorithm.
  
  2. In the original Kadane's algorithm, we look for the maximum sum subarray. Here, we'll adapt it to find the minimum sum subarray.
  
  3. The key insight remains similar: at each position, we have two choices:
     - Start a new subarray beginning at the current position
     - Extend the existing subarray to include the current element
  
  4. For finding the minimum sum, we should:
     - If the current running sum (`curSum`) is positive or zero, it's better to start a new subarray from the current element.
     - If the current running sum is negative, extending the subarray might lead to an even smaller sum, so we add the current element.
  
  5. We maintain two variables:
     - `curSum`: the sum of the current subarray being considered
     - `minSum`: the smallest sum of any subarray found so far
  
  6. For each element in the array:
     - If `curSum` is non-negative (≥ 0), we reset `curSum` to the current element (start a new subarray).
     - Otherwise, we add the current element to `curSum` (extend the existing subarray).
     - We update `minSum` if `curSum` becomes smaller than the current `minSum`.

- **Key Concepts Explained**:  
  - **Modified Kadane's Algorithm**: While the original Kadane's algorithm finds the maximum sum subarray, we can adapt it to find the minimum sum by making a simple change in the decision logic.
  
  - **Dynamic Programming**: We're building our solution incrementally by considering one element at a time and making decisions based on what we know so far.
  
  - **Greedy Approach**: At each step, we make the locally optimal choice (start new or extend) to try to reach the global optimum (smallest overall sum).
  
  - **Positive vs. Negative Contributions**: When looking for the minimum sum, positive numbers increase the sum (bad), while negative numbers decrease it (good). This is the opposite of the maximum sum problem.

- **Time Complexity**: O(n), where n is the length of the array. We only need to iterate through the array once, performing constant-time operations for each element.

- **Space Complexity**: O(1), as we only use two variables (`minSum` and `curSum`) regardless of the input size.

**Dry Run**:
- *Input*: [3, -4, 2, -3, -1, 7, -5]
- *Output*: -6
- *Explanation*: The subarray [-4, 2, -3, -1] has the smallest sum of -6.
- Steps:
  1. Initialize minSum = 3, curSum = 0
  2. Process 3: curSum ≥ 0, so curSum = 3, minSum = min(3, 3) = 3
  3. Process -4: curSum ≥ 0, so curSum = -4, minSum = min(3, -4) = -4
  4. Process 2: curSum < 0, so curSum = -4 + 2 = -2, minSum = min(-4, -2) = -4
  5. Process -3: curSum < 0, so curSum = -2 + (-3) = -5, minSum = min(-4, -5) = -5
  6. Process -1: curSum < 0, so curSum = -5 + (-1) = -6, minSum = min(-5, -6) = -6
  7. Process 7: curSum < 0, so curSum = -6 + 7 = 1, minSum = min(-6, 1) = -6
  8. Process -5: curSum ≥ 0, so curSum = -5, minSum = min(-6, -5) = -6
  9. Return minSum = -6

---