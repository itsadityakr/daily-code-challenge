## Day 92 - Problems  

---

### 333. **Two Sum II - Input Array Is Sorted** [C++ Code](./_333_Find_the_sum_of_two_numbers_in_a_sorted_array.cpp)  

- **File**: _333_Find_the_sum_of_two_numbers_in_a_sorted_array.cpp_  
- **Description**:  
  - Given a 1-indexed sorted array of integers, find two numbers that add up to a specific target.  
  - Return the indices of these two numbers (added by 1) as an array.  
  - Constraints:  
    - Exactly one solution exists.  
    - Cannot use the same element twice.  
    - Must use constant extra space (O(1)).  

- **Understanding the Problem**:  
  - We have a sorted array, and we need to find two distinct numbers that sum to the target.  
  - Since the array is sorted, we can use two pointers to efficiently find the pair.  
  - Example:  
    - Input: `numbers = [2, 7, 11, 15]`, `target = 9`  
    - Output: `[1, 2]` (because `2 + 7 = 9`)  

- **Pseudocode**:  
```
Initialize left pointer at the start (0) and right pointer at the end (n-1).
While left < right:
    Calculate sum = numbers[left] + numbers[right].
    If sum == target:
        Return [left + 1, right + 1] (1-indexed).
    Else if sum < target:
        Move left pointer right (to increase sum).
    Else:
        Move right pointer left (to decrease sum).
```

- **Approach**:  
  1. **Two Pointers Technique**:  
     - Since the array is sorted, we can place one pointer at the beginning (`left`) and one at the end (`right`).  
     - If the sum of the two numbers is less than the target, we move the `left` pointer right to increase the sum.  
     - If the sum is greater, we move the `right` pointer left to decrease the sum.  
     - This works because the array is sorted, so we can adjust the sum efficiently.  

  2. **Why This Works**:  
     - The sorted property ensures that moving the `left` pointer increases the sum, and moving the `right` pointer decreases it.  
     - This allows us to find the pair in O(N) time without extra space.  

- **Key Concepts Explained**:  
  - **Two Pointers**: A technique where two pointers traverse the array from opposite ends to find a solution efficiently.  
  - **Sorted Array**: Since the array is sorted, we can make intelligent moves with the pointers to reach the target sum.  

- **Time Complexity**: O(N) - We traverse the array at most once.  
- **Space Complexity**: O(1) - No extra space is used besides the two pointers.  

**Dry Run**:  
- *Input*: `numbers = [2, 7, 11, 15]`, `target = 9`  
- *Steps*:  
  1. left = 0 (2), right = 3 (15) → sum = 2 + 15 = 17 > 9 → right--  
  2. left = 0 (2), right = 2 (11) → sum = 2 + 11 = 13 > 9 → right--  
  3. left = 0 (2), right = 1 (7) → sum = 2 + 7 = 9 == target → return [1, 2]  
- *Output*: `[1, 2]`  

--- 

## Day X - Problems  

---

### X(334). **Move all Zeroes to the End of an Array** [C++ Code](./_334_Move_all_zeros_to_the_end_of_an_array.cpp)  [Py Code](./_334_Move_all_zeros_to_the_end_of_an_array.py)  

- **File**: _334_Move_all_zeros_to_the_end_of_an_array_  
- **Description**:  
  - Given an integer array `nums`, move all `0`s to the end while maintaining the relative order of non-zero elements.  
  - The operation must be performed in-place without making a copy of the array.  
  - **Constraints:**  
    - `1 <= nums.length <= 10^4`  
    - `-2^31 <= nums[i] <= 2^31 - 1`  

- **Understanding the Problem**:  
  - The task is to rearrange an array so that all zeros appear at the end without disturbing the order of other elements.  
  - Example:  
    - **Input**: `nums = [0,1,0,3,12]`  
    - **Output**: `[1,3,12,0,0]`  
  - We cannot use extra space; we must modify `nums` directly.

- **Pseudocode**: (easiest possible and theoretical)
```
1. Initialize a variable `right` to 0 (tracks position for non-zero elements).
2. Iterate through the array with `left`:
    - If `nums[left]` is not zero:
        - Swap `nums[left]` with `nums[right]`
        - Increment `right`
3. End of loop.
```

- **Approach**:  
  1. Use a two-pointer technique: one pointer iterates (`left`), and the other (`right`) tracks where to place the next non-zero element.  
  2. Every time we encounter a non-zero element, swap it with the `right` pointer's position.  
  3. This ensures all non-zero elements shift left while zeros move to the end.  
  4. The swapping only happens when necessary, reducing unnecessary operations.  

- **Key Concepts Explained**:  
  - **Two-pointer technique**: Efficient for modifying arrays in-place.  
  - **In-place modification**: No extra space used apart from input array.  
  - **Stable ordering**: Non-zero elements remain in their original order.  

- **Time Complexity**:  
  - **O(n)** (single pass through the array).  
- **Space Complexity**:  
  - **O(1)** (no extra space used).  

**Dry Run**:
- *Input* : `[0,1,0,3,12]`
- *Output* : `[1,3,12,0,0]`
- *Explanation* :
  
  - **Step 1**: `0,1,0,3,12` → `1,0,0,3,12` (swap 0 and 1, `right = 1`)
  - **Step 2**: `1,0,0,3,12` → `1,0,0,3,12` (skip, `right = 1`)
  - **Step 3**: `1,0,0,3,12` → `1,3,0,0,12` (swap 0 and 3, `right = 2`)
  - **Step 4**: `1,3,0,0,12` → `1,3,12,0,0` (swap 0 and 12, `right = 3`)
  - **Final Output**: `[1,3,12,0,0]`

- **Steps (Show all steps in depth)**
  - Start with `right = 0`.
  - Iterate over the array.
  - Swap non-zero elements forward.
  - Zeroes naturally shift to the right.
  - Array is transformed as required.

---

