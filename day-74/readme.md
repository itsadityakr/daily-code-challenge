## Day 74 - Problems  

---

### 274. **Next Greater Element II** [C++ Code](./_274_Next_Greater_Element_II.cpp)  

- **File**: _274_Next_Greater_Element_II.cpp_  
- **Description**:  
  - Given a circular array `nums`, return the next greater number for every element in `nums`. The next greater number of a number `x` is the first greater number to its right in the array, considering the array circularly. If no greater number exists, return `-1` for that element.
  - Constraints: The array size is `n`, and the array is circular, meaning we must consider elements that wrap around to the beginning when looking for the next greater element.

- **Understanding the Problem**:  
  - Imagine you are given a list of numbers arranged in a circle. You need to find the first greater number for each element when moving clockwise. If no such number exists, return `-1`.
  - Example:
    ```
    Input: nums = [1,2,1]
    Output: [2,-1,2]
    Explanation:
    - The next greater element for `1` is `2`.
    - The next greater element for `2` does not exist.
    - The next greater element for `1` (circular) is `2`.
    ```

- **Pseudocode**:
```
Initialize a result array with -1 for all elements
Create an empty stack to keep track of indices
Iterate through the array twice (to handle the circular nature)
    While stack is not empty and current element is greater than stack top element:
        Update result for stack top element with the current element
        Pop from the stack
    If within the first iteration, push index onto the stack
Return result array
```

- **Approach**:  
  1. Use a **monotonic decreasing stack** to keep track of indices.
  2. Traverse the array twice (simulate circular behavior).
  3. If the current element is greater than the element at the index stored in the stack, update the result.
  4. If in the first pass, push the index into the stack.
  5. Return the result.

- **Key Concepts Explained**:  
  - **Monotonic Stack**: A stack where elements are stored in a specific order (in this case, decreasing order).
  - **Circular Array Handling**: We traverse twice to simulate looping back to the start.

- **Time Complexity**: **O(n)** since each element is processed at most twice.
- **Space Complexity**: **O(n)** for storing the result and stack.

#### **Example Input**:  
```cpp
nums = [1, 2, 1]
```
#### **Initialization**:  
- `n = 3` (size of `nums`)
- `result = [-1, -1, -1]` (initialized with `-1`)
- `stack = {}` (empty stack)

#### **Iteration Process**:  

| `i` (index) | `i % n` | `nums[i % n]` | Stack (before) | Action | Stack (after) | Result (after) |
|------------|--------|--------------|--------------|--------|--------------|---------------|
| 0          | 0      | 1            | {}           | Push 0 | {0}          | [-1, -1, -1]  |
| 1          | 1      | 2            | {0}          | Pop 0, Update result[0] → 2, Push 1 | {1} | [2, -1, -1] |
| 2          | 2      | 1            | {1}          | Push 2 | {1, 2}        | [2, -1, -1] |
| 3          | 0      | 1            | {1, 2}       | No action (1 ≤ stack.top 2) | {1, 2} | [2, -1, -1] |
| 4          | 1      | 2            | {1, 2}       | Pop 2, Update result[2] → 2 | {1} | [2, -1, 2] |
| 5          | 2      | 1            | {1}          | No action (1 ≤ stack.top 2) | {1} | [2, -1, 2] |

#### **Final Output**:  
```cpp
[2, -1, 2]
```


---

### 275. **Smaller on Left** [C++ Code](./_275_Smaller_on_Left.cpp)  

- **File**: _275_Smaller_on_Left.cpp_  
- **Description**:  
  - Given an array `a[]` of `n` integers, find the nearest smaller number for each element in the array to its left. If no smaller number exists, print `-1`.
  - Constraints: Each element must be compared only with elements to its left.

- **Understanding the Problem**:  
  - Given an array, for each element, find the closest smaller number that appears before it. If none exist, return `-1`.
  - Example:
    ```
    Input: a = [1, 6, 4, 10, 2, 5]
    Output: [-1, 1, 1, 4, 1, 2]
    Explanation:
    - 1 has no smaller number before it, so -1.
    - 6 has 1 before it, so 1.
    - 4 has 1 before it, so 1.
    - 10 has 4 before it, so 4.
    - 2 has 1 before it, so 1.
    - 5 has 2 before it, so 2.
    ```

- **Pseudocode**:
```
Initialize an empty stack
Create a result list
For each element in the array:
    While the stack is not empty and stack top is greater than or equal to current element:
        Pop from the stack
    If stack is empty, append -1 to result
    Else append stack top to result
    Push current element to stack
Return result
```

- **Approach**:  
  1. Use a **monotonic increasing stack** to store elements in increasing order.
  2. Traverse the array:
      - Remove elements from the stack if they are greater than or equal to the current element.
      - If the stack is empty, append `-1` (no smaller element exists).
      - Otherwise, append the top element of the stack.
      - Push the current element to the stack.
  3. Return the result.

- **Key Concepts Explained**:  
  - **Monotonic Stack**: Maintains elements in increasing order to find the closest smaller element.
  - **Stack Operations**: Push/pop operations ensure we efficiently find previous smaller elements.

- **Time Complexity**: **O(n)** since each element is pushed/popped once.
- **Space Complexity**: **O(n)** for storing the result and stack.

#### **Example Input**:  
```cpp
a = [1, 6, 4, 10, 2, 5]
```
#### **Initialization**:  
- `result = []`
- `stack = {}` (empty)

#### **Iteration Process**:  

| `i` | `a[i]` | Stack (before) | Action | Stack (after) | Result (after) |
|----|------|--------------|--------|--------------|---------------|
| 0  | 1    | {}           | Append -1, Push 1  | {1}  | [-1] |
| 1  | 6    | {1}          | Append 1, Push 6   | {1,6} | [-1, 1] |
| 2  | 4    | {1,6}        | Pop 6, Append 1, Push 4 | {1,4} | [-1, 1, 1] |
| 3  | 10   | {1,4}        | Append 4, Push 10  | {1,4,10} | [-1, 1, 1, 4] |
| 4  | 2    | {1,4,10}     | Pop 10, Pop 4, Append 1, Push 2 | {1,2} | [-1, 1, 1, 4, 1] |
| 5  | 5    | {1,2}        | Append 2, Push 5   | {1,2,5} | [-1, 1, 1, 4, 1, 2] |

#### **Final Output**:  
```cpp
[-1, 1, 1, 4, 1, 2]
```

---


