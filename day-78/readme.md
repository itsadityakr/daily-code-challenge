## Day 78 - Problems  

---

### 283. **Maximal Rectangle** [C++ Code](./_283_Maximal_Rectangle.cpp)  

- **File**: _283_Maximal_Rectangle.cpp_  
- **Description**:  
  - Given a binary matrix filled with '0' and '1', find the largest rectangle containing only '1's and return its area.
  - Constraints: The matrix can be large, so we need an efficient approach.

- **Understanding the Problem**:  
  - Imagine a grid of cells where each cell is either filled ('1') or empty ('0').
  - Our goal is to find the largest rectangle that consists only of '1's.
  - We can think of each row as the base of a histogram, where the height of each column depends on how many consecutive '1's are stacked.
  - By solving the **Largest Rectangle in Histogram** problem for each row, we can determine the largest rectangle in the matrix.

- **Pseudocode**:
```plaintext
Function maximalRectangle(matrix):
    If matrix is empty, return 0
    Initialize heights array of size equal to number of columns
    Initialize maxArea to 0
    For each row in matrix:
        Update heights array:
            If matrix[row][col] is '1', increase heights[col] by 1
            Else, reset heights[col] to 0
        Compute max area using largestRectangleArea(heights)
    Return maxArea
```

- **Approach**:  
  1. Convert the matrix into a histogram: Each row is treated as a histogram where the heights represent consecutive '1's from the top.
  2. Solve the **Largest Rectangle in Histogram** problem for each row using a **monotonic stack**.
  3. The stack helps efficiently determine the width of each rectangle in the histogram.
  4. Repeat the process for all rows and track the maximum rectangle found.

- **Key Concepts Explained**:  
  - **Histogram Representation**: Convert the matrix into an array of heights.
  - **Largest Rectangle in Histogram**: Use a stack-based method to compute the maximum rectangular area.
  - **Monotonic Stack**: A stack that maintains elements in increasing or decreasing order for efficient processing.

- **Time Complexity**: **O(rows × cols)** (Each row processes the histogram in **O(cols)** time)
- **Space Complexity**: **O(cols)** (For storing histogram heights)

#### **Input:**
```plaintext
matrix = [
  ['1', '0', '1', '0', '0'],
  ['1', '0', '1', '1', '1'],
  ['1', '1', '1', '1', '1'],
  ['1', '0', '0', '1', '0']
]
```

#### **Step-by-Step Execution:**
1. **Initialize `heights` array:**  
   ```
   heights = [0, 0, 0, 0, 0]
   ```

2. **Processing row 1:**
   ```
   heights = [1, 0, 1, 0, 0]
   ```
   - **Histogram:** `[1, 0, 1, 0, 0]`
   - **Largest Rectangle Area:** `1`
   - **Max Area so far:** `1`

3. **Processing row 2:**
   ```
   heights = [2, 0, 2, 1, 1]
   ```
   - **Histogram:** `[2, 0, 2, 1, 1]`
   - **Largest Rectangle Area:** `3`
   - **Max Area so far:** `3`

4. **Processing row 3:**
   ```
   heights = [3, 1, 3, 2, 2]
   ```
   - **Histogram:** `[3, 1, 3, 2, 2]`
   - **Largest Rectangle Area:** `6`
   - **Max Area so far:** `6`

5. **Processing row 4:**
   ```
   heights = [4, 0, 0, 3, 0]
   ```
   - **Histogram:** `[4, 0, 0, 3, 0]`
   - **Largest Rectangle Area:** `6`
   - **Max Area so far:** `6`

#### **Final Output:**  
`maxArea = 6`

---

## Day 284 - Problems  

### 284. **Sliding Window Maximum** [C++ Code](./_284_Sliding_Window_Maximum.cpp)  

- **File**: _284_Sliding_Window_Maximum.cpp_  
- **Description**:  
  - Given an array **nums** and an integer **k**, find the maximum element in every sliding window of size **k**.
  - Constraints: The array may be large, so an efficient solution is needed.

- **Understanding the Problem**:  
  - Imagine a window of size **k** that moves from the start to the end of the array.
  - At each step, we need to find the maximum element within the current window.
  - A brute-force approach would check all elements inside the window at each step, but this is too slow.
  - Instead, we use a **deque (double-ended queue)** to efficiently keep track of the maximum.

- **Pseudocode**:
```plaintext
Function maxSlidingWindow(nums, k):
    Initialize deque to store indices
    Initialize result array
    For each index i in nums:
        Remove elements from front if they are out of window
        Remove elements from back if nums[i] is greater (they will never be needed)
        Add index i to deque
        If window has reached size k, append nums[deque front] to result
    Return result
```

- **Approach**:  
  1. Use a **deque** to keep track of indices of useful elements within the window.
  2. As we slide the window:
     - Remove elements that are out of the window range.
     - Remove smaller elements from the back of the deque, since they will never be the max.
     - The element at the front of the deque is the maximum in the current window.
  3. Repeat until we process all windows.

- **Key Concepts Explained**:  
  - **Sliding Window Technique**: Efficiently process elements as the window moves.
  - **Deque (Double-Ended Queue)**: Maintains useful elements in decreasing order to find max in O(1) time.

- **Time Complexity**: **O(n)** (Each element is pushed and popped at most once)
- **Space Complexity**: **O(k)** (For storing elements in deque)

#### **Input:**
```plaintext
nums = [1, 3, -1, -3, 5, 3, 6, 7], k = 3
```

#### **Step-by-Step Execution:**
1. **Processing first `k` elements:**
   - **Deque:** `[1]` (since `nums[1] = 3` is max)
   - **Max for first window `[1,3,-1]` = `3`**

2. **Sliding window movement:**
   - **Window `[3, -1, -3]`**  
     - Remove out-of-window index `0`
     - **Deque:** `[1, 2]`  
     - **Max:** `3`

   - **Window `[-1, -3, 5]`**  
     - Remove `-3` and `-1`
     - **Deque:** `[4]`  
     - **Max:** `5`

   - **Window `[-3, 5, 3]`**  
     - **Deque:** `[4, 5]`  
     - **Max:** `5`

   - **Window `[5, 3, 6]`**  
     - Remove `3`, `5`
     - **Deque:** `[6]`  
     - **Max:** `6`

   - **Window `[3, 6, 7]`**  
     - Remove `6`
     - **Deque:** `[7]`  
     - **Max:** `7`

#### **Final Output:**  
`[3, 3, 5, 5, 6, 7]`


---