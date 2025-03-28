## Day 95 - Problems  

---

### 341. **Find the First Negative Integer in Every Window of Size K** [C++ Code](./_341_Find_the_first_negative_integer_in_every_window_of_size_K.cpp)  [Py Code](./_341_Find_the_first_negative_integer_in_every_window_of_size_K.py)  

- **File**: _341_Find_the_first_negative_integer_in_every_window_of_size_K_  
- **Description**:  
  - Given an array `arr[]` and a positive integer `k`, find the first negative integer for each and every contiguous subarray (window) of size `k`.
  - If a window does not contain a negative integer, return `0` for that window.
  
- **Understanding the Problem**:  
  - The goal is to find the first negative integer in every subarray of length `k`.
  - If no negative integer exists in that window, return `0`.
  - Example:
    - **Input**: `arr = [-8, 2, 3, -6, 10], k = 2`
    - **Output**: `[-8, 0, -6, -6]`
    - **Explanation**:
      - `[-8, 2] → -8`
      - `[2, 3] → 0`
      - `[3, -6] → -6`
      - `[-6, 10] → -6`

- **Pesudocode**:
```plaintext
Initialize a queue to store negative numbers' indices.
Iterate through the first k elements:
    If element is negative, store its index in queue.
For remaining elements in the array:
    Store first negative number from the queue, else store 0.
    Remove elements out of window range from the queue.
    Add current element’s index to queue if negative.
Process last window separately.
Return the result list.
```

- **Approach**:  
  1. Use a deque to store indices of negative numbers.
  2. Process the first `k` elements to initialize the deque.
  3. For each new window:
     - Append the first negative integer from deque to the result list.
     - Remove elements that are out of the current window.
     - Add the index of the current element if it's negative.
  4. Process the last window after exiting the loop.
  5. Return the result.

- **Key Concepts Explained**:  
  - **Sliding Window Technique**: Allows efficient processing of subarrays.
  - **Deque (Double-Ended Queue)**: Helps efficiently track the first negative number in each window.
  - **Time Complexity**: `O(N)`, as each element is pushed and popped from the deque at most once.
  - **Space Complexity**: `O(K)`, as the deque stores at most `K` elements.

**Dry Run**:
- *Input* : `arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3`
- *Output* : `[-1, -1, -7, -15, -15, 0]`
- *Explanation* :
  - `[12, -1, -7] → -1`
  - `[-1, -7, 8] → -1`
  - `[-7, 8, -15] → -7`
  - `[8, -15, 30] → -15`
  - `[-15, 30, 16] → -15`
  - `[30, 16, 28] → 0`

- **Steps (Show all steps in depth)**:
  - Initialize an empty deque.
  - Process the first `k` elements and store indices of negative numbers.
  - For each new element in the array:
    - Append the first negative integer from the deque.
    - Remove out-of-window elements from the deque.
    - Add the index of the new element if it's negative.
  - Append the last window’s result and return the output.

---

