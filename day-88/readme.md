## Day 88 - Problems  

---


### 316. **Find the Duplicate Element in an Array** [C++ Code](./316_Find_the_duplicate_element_in_an_array.cpp) [Py Code](./316_Find_the_duplicate_element_in_an_array.py)  

- **File**: _316_Find_the_duplicate_element_in_an_array_  
- **Description**:  
  - Given an array of `n + 1` integers where each integer is between `1` and `n` (inclusive), find the duplicate number.  
  - The problem guarantees that there is only one duplicate number.  
  - You **cannot** modify the input array.  
  - You must solve the problem using constant extra space.  
  - The runtime complexity must be **less than O(n²)**.  


### **Understanding the Problem**  
Imagine you have a set of numbers from 1 to `n`, but one of them appears twice. The goal is to find this repeated number **without modifying the array** and using **constant extra space**.  

#### Example  
 **Input**: `nums = [1, 3, 4, 2, 2]`  
 **Output**: `2`  

#### Breakdown  
1. The array has `n+1` numbers but only values from `1` to `n`.  
2. Since there's one duplicate, at least one number appears more than once.  
3. The constraints force us to use **O(1) extra space** and avoid modifying the array.  
4. We can detect the duplicate using Floyd's **Cycle Detection Algorithm** (also called the "Tortoise and Hare" method).  



### **Pseudocode**
```plaintext
1. Initialize `slow` and `fast` pointers at the first element.
2. Move `slow` by one step and `fast` by two steps in a loop.
3. When `slow == fast`, break out of the loop (cycle detected).
4. Reset `slow` to the start and move both pointers one step at a time.
5. When `slow == fast` again, return the value (duplicate number).
```



### **Approach**
1. **Floyd’s Cycle Detection Algorithm**  
   - Consider the array as a **linked list** where `nums[i]` points to `nums[nums[i]]`.  
   - Since there are `n+1` numbers within `n` possible values, there must be a cycle.  
   - Use two pointers:  
     - **Slow pointer** moves one step at a time.  
     - **Fast pointer** moves two steps at a time.  
   - If a cycle exists, the two pointers will eventually meet.  
   - Reset `slow` to the start and move both one step at a time until they meet again—this gives the duplicate number.  



### **Key Concepts Explained**
- **Cycle Detection (Tortoise and Hare Algorithm)**  
  - This is an efficient way to detect cycles in sequences.  
  - It uses two pointers at different speeds to identify repeated elements in a list.  



### **Time & Space Complexity**  
- **Time Complexity**: `O(n)`  
  - Since we only traverse the array a few times (finding the cycle and locating the start), the time complexity is linear.  
- **Space Complexity**: `O(1)`  
  - No extra space is used apart from the pointers.  



### **Dry Run**
#### **Example 1**
 **Input**: `[1, 3, 4, 2, 2]`  
 **Output**: `2`  

 **Steps**  
1. **Initialization**:  
   - `slow = nums[0] = 1`  
   - `fast = nums[0] = 1`  

2. **Finding the cycle**:  
   ```
   slow → nums[1] = 3
   fast → nums[nums[1]] = nums[3] = 2

   slow → nums[3] = 2
   fast → nums[nums[3]] = nums[2] = 4

   slow → nums[2] = 4
   fast → nums[nums[2]] = nums[4] = 2

   slow → nums[4] = 2
   fast → nums[nums[4]] = nums[2] = 4
   ```

3. **Slow meets Fast at `2`** (Cycle detected).  
4. Reset `slow = nums[0] = 1` and move both one step at a time.  
   ```
   slow → nums[1] = 3
   fast → nums[4] = 2

   slow → nums[3] = 2
   fast → nums[2] = 4

   slow → nums[2] = 4
   fast → nums[4] = 2

   slow → nums[4] = 2
   fast → nums[2] = 4
   ```

5. **They meet at `2` → Duplicate found!**  

---

### 317. **Print All Subarrays of an Array** [C++ Code](./317_Print_all_subarrays_of_an_array.cpp) [Py Code](./317_Print_all_subarrays_of_an_array.py)  

- **File**: _317_Print_all_subarrays_of_an_array_  
- **Description**:  
  - Given an array, generate and print **all possible subarrays**.  
  - A subarray is a contiguous part of the original array.  
  - Constraints: The array size is small (`n ≤ 1000`), but we need an efficient way to generate subarrays.  



### **Understanding the Problem**  
We need to generate every possible contiguous sequence of elements from the given array.  

#### Example  
**Input**: `arr = [1, 2, 3]`  
**Output**:  
```
[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]
```

#### Breakdown  
1. A **subarray** is a sequence of elements appearing consecutively in the original array.  
2. The number of possible subarrays for an array of size `n` is:  
   \[
   \frac{n(n+1)}{2}
   \]
   - Example: For `n = 3`, possible subarrays = `3(4)/2 = 6`.  



### **Pseudocode**
```plaintext
1. Initialize an empty list to store subarrays.
2. Loop over all possible starting points of subarrays.
3. For each starting point, expand the subarray by adding elements one by one.
4. Store each generated subarray.
5. Return or print the list of subarrays.
```



### **Approach**
1. **Brute Force (Triple Loop)**  
   - Iterate over every possible starting index.  
   - Iterate over every possible ending index.  
   - Extract elements between the start and end indices to form subarrays.  
   - Store or print each subarray.  

2. **Optimized Approach (Double Loop)**  
   - Instead of a third loop to extract elements, add elements dynamically to a list while iterating.  
   - This reduces unnecessary iterations and improves efficiency.  



### **Key Concepts Explained**
- **Subarrays vs. Subsequences**  
  - A **subarray** contains contiguous elements.  
  - A **subsequence** can pick elements in any order while maintaining relative positions.  
  - Example:  
    - Subarrays of `[1, 2, 3]`: `[1]`, `[1, 2]`, `[1, 2, 3]`, `[2]`, `[2, 3]`, `[3]`.  
    - Subsequences: `[1, 3]`, `[1, 2, 3]`, `[2, 3]`, etc.  



### **Time & Space Complexity**  
- **Time Complexity**:  
  - **O(n²)** since we generate `O(n²)` subarrays.  
  - Each subarray takes `O(1)` to append, making it efficient.  
- **Space Complexity**:  
  - **O(n²)** in the worst case since we store all subarrays.  



### **Dry Run**
#### **Example 1**
**Input**: `[1, 2, 3]`  
**Output**: `[[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]`  

**Steps**  
1. Start at index `0`:  
   - `[1]`  
   - `[1, 2]`  
   - `[1, 2, 3]`  

2. Start at index `1`:  
   - `[2]`  
   - `[2, 3]`  

3. Start at index `2`:  
   - `[3]`  

---

### 318. **Find the Sum of All Subarrays** [C++ Code](./318_Find_the_sum_of_all_subarrays.cpp) [Py Code](./318_Find_the_sum_of_all_subarrays.py)  

- **File**: _318_Find_the_sum_of_all_subarrays_  
- **Description**:  
  - Given an array of integers, compute the sum of **all possible subarrays**.  
  - Constraints ensure that the array size can be large (`n ≤ 10^5`), so an efficient approach is required.  
  - The result should be returned modulo **10⁹ + 7**.  



### **Understanding the Problem**  
We need to find the sum of all contiguous subarrays within a given array.  

#### Example  
**Input**: `arr = [1, 2, 3]`  
**Output**: `20`  

#### Breakdown  
- Possible subarrays and their sums:  
  - `[1]` → `1`  
  - `[1, 2]` → `1 + 2 = 3`  
  - `[1, 2, 3]` → `1 + 2 + 3 = 6`  
  - `[2]` → `2`  
  - `[2, 3]` → `2 + 3 = 5`  
  - `[3]` → `3`  
- Total sum = `1 + 3 + 6 + 2 + 5 + 3 = 20`.  



### **Pseudocode**
```plaintext
1. Initialize totalSum = 0.
2. Loop through the array:
   - Calculate how many subarrays include arr[i].
   - Compute arr[i]'s contribution to the total sum.
   - Add this contribution to totalSum.
3. Return totalSum % (10⁹ + 7).
```



### **Approach**
1. **Brute Force (O(n³)) - Inefficient**  
   - Generate all possible subarrays using nested loops.  
   - Compute and add their sums.  
   - This is too slow for large `n`.  

2. **Optimized Approach (O(n)) - Efficient**  
   - Instead of generating subarrays explicitly, **directly compute each element’s contribution**.  
   - Each `arr[i]` appears in multiple subarrays:
     - It is the starting element in `(i+1)` subarrays.  
     - It is the ending element in `(n-i)` subarrays.  
   - The total contribution of `arr[i]` is:  
     \[
     \text{arr}[i] \times (i+1) \times (n-i)
     \]
   - Sum up contributions for all elements.  



### **Key Concepts Explained**
- **Counting Contributions Efficiently**  
  - Instead of iterating over each subarray, compute how many times an element appears in all subarrays.  
  - This reduces complexity to **O(n)** instead of **O(n³)**.  
- **Modulo Arithmetic**  
  - Since the sum can be large, we use `mod 10⁹ + 7` to prevent overflow.  



### **Time & Space Complexity**  
- **Time Complexity**: **O(n)**  
  - We iterate through the array only once.  
- **Space Complexity**: **O(1)**  
  - No extra space is used apart from variables.  



### **Dry Run**
#### **Example 1**
**Input**: `[1, 2, 3]`  
**Output**: `20`  

**Steps**  
1. Compute contributions:  
   - `1 * (1) * (3) = 3`  
   - `2 * (2) * (2) = 8`  
   - `3 * (3) * (1) = 9`  
2. Total sum = `3 + 8 + 9 = 20`.  

---

### 319. **Maximum Sum Subarray** [C++ Code](./319_Maximum_sum_subarray.cpp) [Py Code](./319_Maximum_sum_subarray.py)  

- **File**: _319_Maximum_sum_subarray_  
- **Description**:  
  - Given an integer array `nums`, find the contiguous subarray (containing at least one number) that has the **largest sum** and return its sum.  
  - Constraints: The array can be large (`n ≤ 10⁵`), so an efficient solution is needed.  



### **Understanding the Problem**  
We need to find the **contiguous subarray** with the maximum sum.  

#### Example  
**Input**: `nums = [-2,1,-3,4,-1,2,1,-5,4]`  
**Output**: `6`  
**Explanation**: The subarray `[4,-1,2,1]` has the largest sum, which is `4 + (-1) + 2 + 1 = 6`.  

#### Breakdown  
1. A **subarray** consists of consecutive elements from the array.  
2. The **goal** is to find a subarray with the largest possible sum.  
3. The naive approach of checking all subarrays is too slow (**O(n²)** or **O(n³)**).  



### **Pseudocode**
```plaintext
1. Initialize maxSum as the smallest possible value.
2. Initialize curSum as 0.
3. Loop through each number in the array:
   - Update curSum: Either start fresh with the current number or continue adding it.
   - Update maxSum if curSum is greater than maxSum.
4. Return maxSum.
```



### **Approach**
1. **Brute Force (O(n²) or O(n³)) - Inefficient**  
   - Generate all subarrays.  
   - Compute their sums.  
   - Return the largest sum found.  
   - Too slow for large `n`.  

2. **Kadane’s Algorithm (O(n)) - Optimal**  
   - Instead of checking all subarrays, keep track of a **running sum (`curSum`)**.  
   - If adding the current element improves the sum, continue.  
   - Otherwise, start a new sum from the current element.  
   - Keep updating the **maximum sum (`maxSum`)** encountered so far.  



### **Key Concepts Explained**
- **Kadane’s Algorithm**  
  - A greedy algorithm that **iterates once** over the array.  
  - It maintains a running sum (`curSum`) that either **continues** the previous sum or **starts fresh**.  
  - It updates `maxSum` whenever `curSum` exceeds the previous maximum.  



### **Time & Space Complexity**  
- **Time Complexity**: **O(n)**  
  - We iterate through the array once.  
- **Space Complexity**: **O(1)**  
  - Only a few variables are used, no extra space required.  



### **Dry Run**
#### **Example 1**
**Input**: `[-2,1,-3,4,-1,2,1,-5,4]`  
**Output**: `6`  

**Steps**  
1. Initialize `maxSum = -∞`, `curSum = 0`.  
2. Iterate through the array:  
   - `curSum = max(-2, 0 + (-2)) = -2`, `maxSum = -2`  
   - `curSum = max(1, -2 + 1) = 1`, `maxSum = 1`  
   - `curSum = max(-3, 1 + (-3)) = -2`, `maxSum = 1`  
   - `curSum = max(4, -2 + 4) = 4`, `maxSum = 4`  
   - `curSum = max(-1, 4 + (-1)) = 3`, `maxSum = 4`  
   - `curSum = max(2, 3 + 2) = 5`, `maxSum = 5`  
   - `curSum = max(1, 5 + 1) = 6`, `maxSum = 6`  
   - `curSum = max(-5, 6 + (-5)) = 1`, `maxSum = 6`  
   - `curSum = max(4, 1 + 4) = 5`, `maxSum = 6`  
3. Return `maxSum = 6`.  

---

### 320. **Smallest Sum Subarray** [C++ Code](./320_Smallest_sum_subarray.cpp) [Py Code](./320_Smallest_sum_subarray.py)  

- **File**: _320_Smallest_sum_subarray_  
- **Description**:  
  - Given an integer array `nums`, find the contiguous subarray (containing at least one number) that has the **smallest sum** and return its sum.  
  - The array can contain both positive and negative integers.  
  - Constraints ensure that the array size can be large (`n ≤ 10⁵`), so an efficient approach is needed.  



### **Understanding the Problem**  
We need to find the **contiguous subarray** with the **minimum sum**.  

#### Example  
**Input**: `arr = [3, -4, 2, -3, -1, 7, -5]`  
**Output**: `-6`  
**Explanation**: The subarray `[-4, 2, -3, -1]` has the smallest sum, which is `-4 + 2 + (-3) + (-1) = -6`.  

#### Breakdown  
1. A **subarray** consists of consecutive elements from the array.  
2. The **goal** is to find a subarray with the smallest possible sum.  
3. The naive approach of checking all subarrays is too slow (**O(n²)** or **O(n³)**).  



### **Pseudocode**
```plaintext
1. Initialize minSum as the largest possible value.
2. Initialize curSum as 0.
3. Loop through each number in the array:
   - If curSum is non-negative, reset curSum to the current number.
   - Otherwise, add the current number to curSum.
   - Update minSum if curSum is smaller than minSum.
4. Return minSum.
```



### **Approach**
1. **Brute Force (O(n²) or O(n³)) - Inefficient**  
   - Generate all subarrays.  
   - Compute their sums.  
   - Return the smallest sum found.  
   - Too slow for large `n`.  

2. **Kadane’s Algorithm for Minimum Sum (O(n)) - Optimal**  
   - Instead of checking all subarrays, keep track of a **running sum (`curSum`)**.  
   - If adding the current element increases the sum, **start fresh** with the current element.  
   - Keep updating the **minimum sum (`minSum`)** encountered so far.  



### **Key Concepts Explained**
- **Kadane’s Algorithm for Minimum Sum**  
  - This is similar to the **maximum subarray sum problem**, but instead of tracking the largest sum, we track the **smallest** sum.  
  - A **running sum (`curSum`)** is maintained, and it either continues accumulating or resets if starting fresh gives a smaller value.  
  - `minSum` is updated whenever `curSum` is smaller than the previous minimum.  



### **Time & Space Complexity**  
- **Time Complexity**: **O(n)**  
  - We iterate through the array only once.  
- **Space Complexity**: **O(1)**  
  - Only a few variables are used, no extra space required.  



### **Dry Run**
#### **Example 1**
**Input**: `[3, -4, 2, -3, -1, 7, -5]`  
**Output**: `-6`  

**Steps**  
1. Initialize `minSum = ∞`, `curSum = 0`.  
2. Iterate through the array:  
   - `curSum = 3`, `minSum = 3`  
   - `curSum = min(-4, 3 + (-4)) = -4`, `minSum = -4`  
   - `curSum = min(2, -4 + 2) = -2`, `minSum = -4`  
   - `curSum = min(-3, -2 + (-3)) = -5`, `minSum = -5`  
   - `curSum = min(-1, -5 + (-1)) = -6`, `minSum = -6`  
   - `curSum = min(7, -6 + 7) = 1`, `minSum = -6`  
   - `curSum = min(-5, 1 + (-5)) = -5`, `minSum = -6`  
3. Return `minSum = -6`.  

---
