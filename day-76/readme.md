## Day 76 - Problems  

---

### 278. **Sum of Subarray Minimums** [C++ Code](./_278_Sum_of_Subarray_Minimums.cpp)  

- **File**: _278_Sum_of_Subarray_Minimums.cpp  
- **Description**:  
  - Given an array of integers, the task is to find the sum of the minimum values of all possible subarrays.  
  - The result should be modulo \(10^9 + 7\) to handle large numbers.  
  - Constraints:  
    - Array length \(1 \leq n \leq 3 \times 10^4\).  
    - Each element \(1 \leq arr[i] \leq 3 \times 10^4\).  

- **Understanding the Problem**:  
  - A subarray is a contiguous part of the array. For example, in the array `[3, 1, 2, 4]`, some subarrays are `[3]`, `[3, 1]`, `[1, 2, 4]`, etc.  
  - The minimum of a subarray is the smallest number in it. For example, the minimum of `[3, 1, 2]` is `1`.  
  - The goal is to sum up the minimums of all possible subarrays.  

  **Example**:  
  - Input: `[3, 1, 2, 4]`  
  - Subarrays and their minimums:  
    - `[3]` → 3  
    - `[3, 1]` → 1  
    - `[3, 1, 2]` → 1  
    - `[3, 1, 2, 4]` → 1  
    - `[1]` → 1  
    - `[1, 2]` → 1  
    - `[1, 2, 4]` → 1  
    - `[2]` → 2  
    - `[2, 4]` → 2  
    - `[4]` → 4  
  - Sum of minimums: \(3 + 1 + 1 + 1 + 1 + 1 + 1 + 2 + 2 + 4 = 17\).  

- **Pseudocode**:
```
1. Initialize two arrays: ple (previous lesser element) and nle (next lesser element).
2. Use a stack to find the previous lesser element for each index.
3. Use a stack to find the next lesser element for each index.
4. For each element in the array, calculate the number of subarrays where it is the minimum.
5. Sum up the contributions of all elements modulo \(10^9 + 7\).
```

- **Approach**:  
  1. **Previous Lesser Element (PLE)**: For each element, find the index of the previous element that is smaller than it. If no such element exists, use `-1`.  
  2. **Next Lesser Element (NLE)**: For each element, find the index of the next element that is smaller than it. If no such element exists, use `n` (length of the array).  
  3. **Counting Subarrays**: For each element, the number of subarrays where it is the minimum is calculated as `(i - ple[i]) * (nle[i] - i)`.  
  4. **Summing Up**: Multiply each element by the number of subarrays where it is the minimum and add it to the result.  

- **Key Concepts Explained**:  
  - **Subarray**: A contiguous part of the array.  
  - **Stack**: A data structure used to efficiently find the previous and next lesser elements.  
  - **Modulo Operation**: Used to handle large numbers and prevent overflow.  

- **Time Complexity**: \(O(n)\) - Each element is pushed and popped from the stack at most once.  
- **Space Complexity**: \(O(n)\) - Extra space is used for the `ple`, `nle`, and the stack.  

**Input**: `[3, 1, 2, 4]`  
**Goal**: Find the sum of the minimums of all possible subarrays.



#### Step 1: Initialize Arrays and Stack
- `ple` (Previous Lesser Element): `[-1, -1, -1, -1]`  
- `nle` (Next Lesser Element): `[4, 4, 4, 4]`  
- Stack: `[]`  



#### Step 2: Find Previous Lesser Element (PLE)
- Iterate through the array from left to right:
  - **i = 0**: Value = `3`  
    - Stack is empty.  
    - `ple[0] = -1` (no previous lesser element).  
    - Push `0` to stack.  
    - Stack: `[0]`  

  - **i = 1**: Value = `1`  
    - Stack top = `0`, value = `3` > `1`. Pop `0`.  
    - Stack is now empty.  
    - `ple[1] = -1` (no previous lesser element).  
    - Push `1` to stack.  
    - Stack: `[1]`  

  - **i = 2**: Value = `2`  
    - Stack top = `1`, value = `1` < `2`.  
    - `ple[2] = 1` (previous lesser element is at index `1`).  
    - Push `2` to stack.  
    - Stack: `[1, 2]`  

  - **i = 3**: Value = `4`  
    - Stack top = `2`, value = `2` < `4`.  
    - `ple[3] = 2` (previous lesser element is at index `2`).  
    - Push `3` to stack.  
    - Stack: `[1, 2, 3]`  

- **Final PLE**: `[-1, -1, 1, 2]`  



#### Step 3: Find Next Lesser Element (NLE)
- Clear the stack: `[]`  
- Iterate through the array from right to left:
  - **i = 3**: Value = `4`  
    - Stack is empty.  
    - `nle[3] = 4` (no next lesser element).  
    - Push `3` to stack.  
    - Stack: `[3]`  

  - **i = 2**: Value = `2`  
    - Stack top = `3`, value = `4` > `2`. Pop `3`.  
    - Stack is now empty.  
    - `nle[2] = 4` (no next lesser element).  
    - Push `2` to stack.  
    - Stack: `[2]`  

  - **i = 1**: Value = `1`  
    - Stack top = `2`, value = `2` > `1`. Pop `2`.  
    - Stack is now empty.  
    - `nle[1] = 4` (no next lesser element).  
    - Push `1` to stack.  
    - Stack: `[1]`  

  - **i = 0**: Value = `3`  
    - Stack top = `1`, value = `1` < `3`.  
    - `nle[0] = 1` (next lesser element is at index `1`).  
    - Push `0` to stack.  
    - Stack: `[1, 0]`  

- **Final NLE**: `[1, 4, 4, 4]`  



#### Step 4: Calculate the Sum of Minimums
- For each element, calculate the number of subarrays where it is the minimum:
  - **i = 0**: Value = `3`  
    - Left subarrays: `i - ple[0] = 0 - (-1) = 1`  
    - Right subarrays: `nle[0] - i = 1 - 0 = 1`  
    - Total subarrays: `1 * 1 = 1`  
    - Contribution: `3 * 1 = 3`  

  - **i = 1**: Value = `1`  
    - Left subarrays: `i - ple[1] = 1 - (-1) = 2`  
    - Right subarrays: `nle[1] - i = 4 - 1 = 3`  
    - Total subarrays: `2 * 3 = 6`  
    - Contribution: `1 * 6 = 6`  

  - **i = 2**: Value = `2`  
    - Left subarrays: `i - ple[2] = 2 - 1 = 1`  
    - Right subarrays: `nle[2] - i = 4 - 2 = 2`  
    - Total subarrays: `1 * 2 = 2`  
    - Contribution: `2 * 2 = 4`  

  - **i = 3**: Value = `4`  
    - Left subarrays: `i - ple[3] = 3 - 2 = 1`  
    - Right subarrays: `nle[3] - i = 4 - 3 = 1`  
    - Total subarrays: `1 * 1 = 1`  
    - Contribution: `4 * 1 = 4`  

- **Total Sum**: `3 + 6 + 4 + 4 = 17`  


---

### 279. **Asteroid Collision** [C++ Code](./_279_Asteroid_Collision.cpp)  

- **File**: _279_Asteroid_Collision.cpp  
- **Description**:  
  - Given an array of asteroids represented by their sizes, simulate their collisions.  
  - Asteroids moving to the right have positive values, and those moving to the left have negative values.  
  - When two asteroids collide, the smaller one explodes. If they are of the same size, both explode.  
  - Return the state of the asteroids after all collisions.  

- **Understanding the Problem**:  
  - Asteroids are moving in a line, and their direction is indicated by their sign (positive = right, negative = left).  
  - Collisions only happen when a right-moving asteroid is followed by a left-moving asteroid.  
  - The goal is to simulate all collisions and return the remaining asteroids.  

  **Example**:  
  - Input: `[5, 10, -5]`  
  - Simulation:  
    - `5` and `10` move to the right. No collision.  
    - `10` and `-5` collide. `10` is larger, so `-5` explodes.  
  - Output: `[5, 10]`  

- **Pseudocode**:
```
1. Initialize an empty stack.
2. For each asteroid in the array:
   a. While the stack is not empty, the top asteroid is moving right, and the current asteroid is moving left:
      i. If the top asteroid is smaller, it explodes (pop from stack).
      ii. If the top asteroid is larger, the current asteroid explodes (skip to next asteroid).
      iii. If they are equal, both explode (pop from stack and skip to next asteroid).
   b. If the current asteroid is not destroyed, push it onto the stack.
3. Return the stack as the result.
```

- **Approach**:  
  1. Use a stack to simulate the collisions.  
  2. Iterate through the asteroids and handle collisions using the stack.  
  3. If a collision occurs, compare the sizes of the asteroids and update the stack accordingly.  
  4. After processing all asteroids, the stack contains the remaining asteroids.  

- **Key Concepts Explained**:  
  - **Stack**: A data structure used to simulate the collisions efficiently.  
  - **Collision Rules**:  
    - Right-moving asteroid (`+`) collides with left-moving asteroid (`-`).  
    - Smaller asteroid explodes. If equal, both explode.  

- **Time Complexity**: \(O(n)\) - Each asteroid is pushed and popped from the stack at most once.  
- **Space Complexity**: \(O(n)\) - The stack can store up to \(n\) asteroids in the worst case.  

**Input**: `[5, 10, -5]`  
**Goal**: Simulate asteroid collisions and return the remaining asteroids.



#### Step 1: Initialize Stack
- Stack: `[]`  



#### Step 2: Iterate Through Asteroids
- **Asteroid = 5**:  
  - Stack is empty.  
  - Push `5` to stack.  
  - Stack: `[5]`  

- **Asteroid = 10**:  
  - Stack top = `5` (moving right), current = `10` (moving right).  
  - No collision.  
  - Push `10` to stack.  
  - Stack: `[5, 10]`  

- **Asteroid = -5**:  
  - Stack top = `10` (moving right), current = `-5` (moving left).  
  - Collision occurs.  
  - Compare sizes: `10` > `-5`.  
  - `-5` explodes.  
  - Stack remains: `[5, 10]`  



#### Step 3: Final Result
- Stack: `[5, 10]`  
- **Output**: `[5, 10]`  



### Summary of Dry Runs:
1. **Sum of Subarray Minimums**:  
   - Input: `[3, 1, 2, 4]`  
   - Output: `17`  

2. **Asteroid Collision**:  
   - Input: `[5, 10, -5]`  
   - Output: `[5, 10]`  

---

