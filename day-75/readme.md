---

## Day 276 - Problems  

---

### 276. **Next Greater Element (NGE)** [C++ Code](./_276_Next_Greater_Element_NGE.cpp)  

- **File**: _276_Next_Greater_Element_NGE.cpp_  
- **Description**:  
  - Given an array of integers, find the next greater element for each element in the array. The next greater element of an element is the first greater element to its right. If no such element exists, return -1 for that index.  
  - Constraints: The solution should run efficiently, preferably in O(n) time complexity.  

- **Understanding the Problem**:  
  - We need to determine, for each element, the first larger number on its right. If none exists, return -1.
  - Example:  
    - Input: `[4, 5, 2, 10, 8]`  
    - Output: `[5, 10, 10, -1, -1]`  

- **Pesudocode**:
```cpp
Initialize a stack
Create a result array initialized with -1
Traverse the array from right to left:
    While stack is not empty and top of stack is <= current element:
        Pop the stack
    If stack is not empty:
        Assign top of stack as the next greater element
    Push current element onto stack
Return the result array
```

- **Approach**:  
  1. Use a stack to store elements while iterating from right to left.  
  2. If the stack is not empty and the current element is smaller than the top of the stack, assign the top as the next greater element.  
  3. Push the current element onto the stack.  
  4. If no greater element exists, the result remains -1.  

- **Key Concepts Explained**:  
  - **Stack Data Structure**: Used for efficient lookups.  
  - **Monotonic Stack**: A technique where elements are pushed/popped in a way that maintains an increasing/decreasing order.  

- **Time Complexity**: O(n), as each element is pushed and popped from the stack at most once.  
- **Space Complexity**: O(n) for storing the result and stack.  

#### **Example Input:**
```cpp
arr = [4, 5, 2, 10, 8]
```

#### **Initial State:**
- Stack: `[]`
- Result: `[-1, -1, -1, -1, -1]` (initialized to -1)

#### **Step-by-Step Execution:**
| Step | Current Element | Stack Before | Action | Stack After | Result Array |
|------|---------------|--------------|--------|-------------|--------------|
| 1 | `8` | `[]` | Push `8` to stack | `[8]` | `[-1, -1, -1, -1, -1]` |
| 2 | `10` | `[8]` | Pop `8`, Push `10` | `[10]` | `[-1, -1, -1, -1, -1]` |
| 3 | `2` | `[10]` | Next Greater is `10`, Push `2` | `[10, 2]` | `[-1, -1, 10, -1, -1]` |
| 4 | `5` | `[10, 2]` | Pop `2`, Next Greater is `10`, Push `5` | `[10, 5]` | `[-1, 10, 10, -1, -1]` |
| 5 | `4` | `[10, 5]` | Next Greater is `5`, Push `4` | `[10, 5, 4]` | `[5, 10, 10, -1, -1]` |

#### **Final Output:**
```cpp
[5, 10, 10, -1, -1]
```

---

### 277. **Trapping Rain Water** [C++ Code](./_277_Trapping_Rain_Water.cpp)  

- **File**: _277_Trapping_Rain_Water.cpp_  
- **Description**:  
  - Given an array representing the height of bars, calculate the amount of water that can be trapped between them after rainfall.  
  - Constraints: The solution should be efficient and should not use brute force approaches.  

- **Understanding the Problem**:  
  - Water gets trapped when there is a taller bar on both the left and right side of a lower bar.  
  - Example:  
    - Input: `[0,1,0,2,1,0,1,3,2,1,2,1]`  
    - Output: `6`  

- **Pesudocode**:
```cpp
Initialize an empty stack
Initialize trapped water = 0
Traverse the array:
    While stack is not empty and height[i] > height[stack.top()]:
        Pop top element
        If stack is empty:
            Break
        Compute width and water height
        Accumulate trapped water
    Push index onto stack
Return trapped water
```

- **Approach**:  
  1. Use a stack to keep track of bars.
  2. Whenever a taller bar is found, calculate trapped water by using the difference in heights.
  3. The width is determined by the distance between the two taller bars.
  4. Sum up the trapped water values.  

- **Key Concepts Explained**:  
  - **Stack**: Helps track previous heights efficiently.
  - **Two-Pointer & Monotonic Stack**: Reduces time complexity from O(n²) to O(n).
  
- **Time Complexity**: O(n), as each element is processed once.  
- **Space Complexity**: O(n), as we use a stack.  

#### **Example Input:**
```cpp
height = [0,1,0,2,1,0,1,3,2,1,2,1]
```

#### **Initial State:**
- Stack: `[]`
- Trapped Water: `0`

#### **Step-by-Step Execution:**
| Step | Current Index | Stack Before | Action | Stack After | Trapped Water |
|------|-------------|--------------|--------|-------------|---------------|
| 1 | `0` (0) | `[]` | Push `0` | `[0]` | `0` |
| 2 | `1` (1) | `[0]` | Pop `0`, Push `1` | `[1]` | `0` |
| 3 | `2` (0) | `[1]` | Push `2` | `[1,2]` | `0` |
| 4 | `3` (2) | `[1,2]` | Pop `2`, Pop `1`, Push `3` | `[3]` | `1` |
| 5 | `4` (1) | `[3]` | Push `4` | `[3,4]` | `1` |
| 6 | `5` (0) | `[3,4]` | Push `5` | `[3,4,5]` | `1` |
| 7 | `6` (1) | `[3,4,5]` | Pop `5`, Calculate water | `[3,4,6]` | `2` |
| 8 | `7` (3) | `[3,4,6]` | Pop `6`, `4`, `3`, Push `7` | `[7]` | `6` |

#### **Final Output:**
```cpp
6
```

---


