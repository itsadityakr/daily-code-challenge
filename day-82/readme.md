## **Day 82 - Problems**  

---

### **290. Binary Subarrays with Sum** [C++ Code](./_290_Binary_Subarray_with_Sum.cpp)  

- **File**: _290_Binary_Subarray_with_Sum.cpp_  
- **Description**:  
  - Given a binary array `nums` (containing only 0s and 1s) and an integer `goal`, return the number of contiguous subarrays that sum to `goal`.  
  - Constraints:  
    - `1 <= nums.length <= 30,000`  
    - `0 <= goal <= nums.length`  

- **Understanding the Problem**:  
  - We need to find **subarrays** where the sum of elements is exactly equal to `goal`.  
  - A **subarray** is a continuous part of the array.  
  - Example:  
    ```
    Input: nums = [1,0,1,0,1], goal = 2
    Output: 4
    Explanation: The valid subarrays are:
    [1,0,1], [1,0,1,0], [0,1,0,1], [1,0,1]
    ```
  - A brute force approach would check every subarray and compute its sum, but this is inefficient for large inputs.  

- **Pesudocode**:
```
Define a function atMost(nums, goal) that finds the count of subarrays with sum ≤ goal
    If goal < 0, return 0 (invalid case)
    Initialize left pointer, sum, and count
    Iterate through the array with a right pointer:
        Add nums[right] to sum
        If sum > goal, move left pointer right (decreasing sum)
        Count subarrays from left to right
Return atMost(nums, goal) - atMost(nums, goal-1)
```

- **Approach**:  
  1. **Use the sliding window technique**:
     - Instead of checking every subarray, maintain a **dynamic window** that expands and shrinks to keep the sum within `goal`.  
  2. **Count subarrays with at most `goal` sum**:
     - Define a helper function `atMost(nums, goal)` that finds the number of subarrays with sum **≤ goal**.  
  3. **Find exact subarrays with sum = `goal`**:
     - The required count is `atMost(goal) - atMost(goal-1)`.  
  4. **Optimize with two pointers**:
     - Maintain `left` and `right` pointers.
     - Expand `right` to include new elements.
     - If the sum exceeds `goal`, move `left` forward to maintain constraints.  

- **Key Concepts Explained**:  
  - **Sliding Window Technique**: Instead of recomputing sums for every subarray, efficiently maintain a valid window.  
  - **Prefix Sum Logic**: We calculate subarrays with sum ≤ goal and subtract cases where sum ≤ goal - 1.  

- **Time Complexity**: \(O(N)\) - Each element is processed at most twice.  
- **Space Complexity**: \(O(1)\) - No extra data structures are used.  

#### **Input:**  
```cpp
nums = [1,0,1,0,1], goal = 2
```
#### **Step-by-step Execution (Dry Run):**  

1. **Compute `atMost(nums, 2)`**  
   - Count subarrays with sum ≤ 2.

| `right` | `nums[right]` | `sum` | `left` | Valid Subarrays |
|---------|--------------|------|-------|----------------|
| 0       | 1            | 1    | 0     | [1] |
| 1       | 0            | 1    | 0     | [1,0], [0] |
| 2       | 1            | 2    | 0     | [1,0,1], [0,1], [1] |
| 3       | 0            | 2    | 0     | [1,0,1,0], [0,1,0], [1,0], [0] |
| 4       | 1            | 3    | 1 (shift `left` to keep sum ≤ 2) | [0,1,0,1], [1,0,1], [0,1], [1] |

**Total count from `atMost(nums, 2)`:** **10**  

2. **Compute `atMost(nums, 1)`**  
   - Count subarrays with sum ≤ 1.

| `right` | `nums[right]` | `sum` | `left` | Valid Subarrays |
|---------|--------------|------|-------|----------------|
| 0       | 1            | 1    | 0     | [1] |
| 1       | 0            | 1    | 0     | [1,0], [0] |
| 2       | 1            | 2    | 1 (shift `left`) | [0,1], [1] |
| 3       | 0            | 1    | 1     | [0,1,0], [1,0], [0] |
| 4       | 1            | 2    | 2 (shift `left`) | [1,0,1], [0,1], [1] |

**Total count from `atMost(nums, 1)`:** **6**  

3. **Final Calculation:**  
   ```
   atMost(2) - atMost(1) = 10 - 6 = 4
   ```
   **Output:** `4`


---

### **291. Count Number of Nice Subarrays** [C++ Code](./_291_Count_Number_of_Nice_Subarrays.cpp)  

- **File**: _291_Count_Number_of_Nice_Subarrays.cpp_  
- **Description**:  
  - Given an array of integers `nums` and an integer `k`, a contiguous subarray is "nice" if it contains exactly `k` odd numbers.  
  - Return the total number of "nice" subarrays.  
  - Constraints:  
    - `1 <= nums.length <= 50,000`  
    - `1 <= nums[i] <= 10^5`  
    - `1 <= k <= nums.length`  

- **Understanding the Problem**:  
  - We need to count **continuous subarrays** with exactly `k` odd numbers.  
  - Example:  
    ```
    Input: nums = [1,1,2,1,1], k = 3
    Output: 2
    Explanation: The valid subarrays are:
    [1,1,2,1], [1,2,1,1]
    ```
  - Instead of checking every subarray manually, we can use a **two-pointer/sliding window** approach.  

- **Pesudocode**:
```
Define a function atMost(nums, k) that finds the count of subarrays with at most k odd numbers
    If k < 0, return 0 (invalid case)
    Initialize left pointer, count, and oddCount
    Iterate through nums with a right pointer:
        Increment oddCount if nums[right] is odd
        While oddCount > k, decrement oddCount if nums[left] is odd and move left
        Count subarrays from left to right
Return atMost(nums, k) - atMost(nums, k-1)
```

- **Approach**:  
  1. **Convert the problem into a sliding window sum**:
     - Instead of checking each subarray, count subarrays **with at most `k` odd numbers**.  
  2. **Use two-pointer sliding window**:
     - Expand `right` to include more elements.
     - If `oddCount` exceeds `k`, move `left` forward to maintain conditions.  
  3. **Find subarrays with exactly `k` odd numbers**:
     - The final result is `atMost(k) - atMost(k-1)`.  
  4. **Efficiently track odd numbers**:
     - Convert all numbers to `1` (odd) or `0` (even) to simplify counting.  

- **Key Concepts Explained**:  
  - **Sliding Window Technique**: Instead of checking every subarray, maintain a **dynamic range** that meets conditions.  
  - **Mathematical Trick**: Finding subarrays with at most `k` and subtracting those with at most `k-1` gives exactly `k` odd numbers.  

- **Time Complexity**: \(O(N)\) - Each element is processed at most twice.  
- **Space Complexity**: \(O(1)\) - No extra storage used.  

#### **Input:**  
```cpp
nums = [1,1,2,1,1], k = 3
```
#### **Step-by-step Execution (Dry Run):**  

1. **Compute `atMost(nums, 3)`**  
   - Count subarrays with at most 3 odd numbers.

| `right` | `nums[right]` | `oddCount` | `left` | Valid Subarrays |
|---------|--------------|------|-------|----------------|
| 0       | 1            | 1    | 0     | [1] |
| 1       | 1            | 2    | 0     | [1,1], [1] |
| 2       | 2            | 2    | 0     | [1,1,2], [1,2], [2] |
| 3       | 1            | 3    | 0     | [1,1,2,1], [1,2,1], [2,1], [1] |
| 4       | 1            | 4    | 1 (shift `left` to keep oddCount ≤ 3) | [1,2,1,1], [2,1,1], [1,1], [1] |

**Total count from `atMost(nums, 3)`:** **10**  

2. **Compute `atMost(nums, 2)`**  
   - Count subarrays with at most 2 odd numbers.

| `right` | `nums[right]` | `oddCount` | `left` | Valid Subarrays |
|---------|--------------|------|-------|----------------|
| 0       | 1            | 1    | 0     | [1] |
| 1       | 1            | 2    | 0     | [1,1], [1] |
| 2       | 2            | 2    | 0     | [1,1,2], [1,2], [2] |
| 3       | 1            | 3    | 1 (shift `left`) | [1,2,1], [2,1], [1] |
| 4       | 1            | 3    | 2 (shift `left`) | [2,1,1], [1,1], [1] |

**Total count from `atMost(nums, 2)`:** **8**  

3. **Final Calculation:**  
   ```
   atMost(3) - atMost(2) = 10 - 8 = 2
   ```
   **Output:** `2`


---