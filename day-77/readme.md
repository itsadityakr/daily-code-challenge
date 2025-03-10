## Day X - Problems  

---

### 280. **Sum of Subarray Ranges** [C++ Code](./_280_Sum_of_Subarray_Ranges.cpp)  

- **File**: _280_Sum_of_Subarray_Ranges.cpp_  
- **Description**:  
  - Given an integer array `nums`, the task is to find the sum of the **range** of all subarrays.  
  - The **range** of a subarray is calculated as the difference between the **maximum** and **minimum** element in that subarray.  
  - Constraints:  
    - `1 <= nums.length <= 1000`  
    - `-10^9 <= nums[i] <= 10^9`  
    - The solution must be efficient due to the constraints.  

- **Understanding the Problem**:  
  - We need to compute `(max - min)` for every possible subarray and sum all those values.  
  - Instead of brute force (`O(N^2)`) by checking all subarrays, we can optimize by **directly computing the contribution of each element**.  
  - Consider an array `[1,3,2]`. The subarrays are:  
    ```
    [1] → max = 1, min = 1 → range = 0  
    [3] → max = 3, min = 3 → range = 0  
    [2] → max = 2, min = 2 → range = 0  
    [1,3] → max = 3, min = 1 → range = 2  
    [3,2] → max = 3, min = 2 → range = 1  
    [1,3,2] → max = 3, min = 1 → range = 2  
    ```  
  - Instead of recalculating `max` and `min` repeatedly, we determine how many subarrays consider an element as the min and max.

- **Pseudocode**:
```
Initialize result = 0
Create arrays prevSmaller[], nextSmaller[] to store nearest smaller elements
Create arrays prevGreater[], nextGreater[] to store nearest greater elements

Find nextSmaller[] for each element using a monotonic stack
Find prevSmaller[] using another stack

Find nextGreater[] for each element using a monotonic stack
Find prevGreater[] using another stack

Compute contribution of each element as min and subtract from result
Compute contribution of each element as max and add to result

Return the final result
```

- **Approach**:  
  1. **Finding Previous and Next Smaller Elements**  
     - Use a **monotonic increasing stack** to determine the closest smaller elements.  
     - Store indices in `prevSmaller[]` (previous smaller) and `nextSmaller[]` (next smaller).  
  2. **Finding Previous and Next Greater Elements**  
     - Use a **monotonic decreasing stack** to find previous and next greater elements.  
     - Store indices in `prevGreater[]` (previous greater) and `nextGreater[]` (next greater).  
  3. **Compute Contribution of Each Element**  
     - Each element `nums[i]` contributes differently as **min** and **max**.  
     - If `nums[i]` is min in `X` subarrays, it contributes `-X * nums[i]`.  
     - If `nums[i]` is max in `Y` subarrays, it contributes `+Y * nums[i]`.  
  4. **Sum Up Contributions**  
     - Compute the final sum by adding the contributions of elements acting as **max** and **min**.  

- **Key Concepts Explained**:  
  - **Monotonic Stack**: A stack where elements are stored in increasing/decreasing order to find nearest greater/smaller efficiently.  
  - **Subarray Contribution**: Each element appears in multiple subarrays, and we calculate its effect once.  

- **Time Complexity**: **O(N)** (Each element is pushed/popped once).  
- **Space Complexity**: **O(N)** for storing indices.  

### **Test Case:**  
```cpp
Input: nums = [1, 3, 2]
Output: 4
```

### **Step-by-Step Dry Run:**

We need to compute **sum of (max - min) for all subarrays**. Instead of brute-force, we use **monotonic stacks**.

#### **Step 1: Identify Previous and Next Smaller Elements**
We find **prevSmaller[]** and **nextSmaller[]** for each element.

| Index | Num | Previous Smaller | Next Smaller |
|--------|-----|-----------------|--------------|
| 0      | 1   | -1              | - |
| 1      | 3   | 0               | 2 |
| 2      | 2   | 0               | - |

#### **Step 2: Identify Previous and Next Greater Elements**
| Index | Num | Previous Greater | Next Greater |
|--------|-----|-----------------|--------------|
| 0      | 1   | -1              | 1 |
| 1      | 3   | 0               | - |
| 2      | 2   | 0               | - |

#### **Step 3: Compute Contribution**
Each element contributes:
- As **min**: `-nums[i] * (i - prevSmaller[i]) * (nextSmaller[i] - i)`
- As **max**: `+nums[i] * (i - prevGreater[i]) * (nextGreater[i] - i)`

| Index | Num | Min Contribution | Max Contribution |
|--------|-----|-----------------|-----------------|
| 0      | 1   | `-1 * (0 - (-1)) * (1 - 0) = -1` | `+1 * (0 - (-1)) * (1 - 0) = 1` |
| 1      | 3   | `-3 * (1 - 0) * (2 - 1) = -3` | `+3 * (1 - 0) * (2 - 1) = 3` |
| 2      | 2   | `-2 * (2 - 0) * (2 - 2) = 0` | `+2 * (2 - 0) * (2 - 2) = 0` |

Sum = `(-1 + 1) + (-3 + 3) + (0 + 0) = 4` 


---

### 281. **Remove K Digits** [C++ Code](./_281_Remove_K_Digits.cpp)  

- **File**: _281_Remove_K_Digits.cpp_  
- **Description**:  
  - Given a string `num` representing a number, remove `k` digits to form the smallest possible number.  
  - Constraints:  
    - `1 <= num.length <= 10^5`  
    - `1 <= k <= num.length`  
    - The resulting number **should not** have leading zeros unless it is `"0"`.  

- **Understanding the Problem**:  
  - We need to strategically remove digits to form the smallest number.  
  - Instead of brute-force removal (`O(2^N)`), we **greedily** remove digits in a **monotonic stack-based approach**.  
  - Example:  
    ```
    num = "1432219", k = 3
    Remove 4 → "132219"
    Remove 3 → "12219"
    Remove 2 → "1219"
    Final answer = "1219"
    ```

- **Pseudocode**:
```
Initialize an empty stack
Iterate through the number:
  - Remove digits from stack if they are larger than current digit and k > 0
  - Push current digit onto stack
Remove remaining digits if k > 0
Remove leading zeros
Return final number
```

- **Approach**:  
  1. **Use a Stack for Lexicographical Order**  
     - Maintain a **monotonic increasing** sequence in the stack.  
     - Whenever a **larger** digit appears before a **smaller** digit, remove it.  
  2. **Remove Remaining Digits if Needed**  
     - If `k` is still greater than 0, remove the last `k` digits from the stack.  
  3. **Handle Leading Zeros**  
     - Strip leading zeros from the final result.  
  4. **Edge Cases**  
     - If the result is empty, return `"0"`.  

- **Key Concepts Explained**:  
  - **Greedy Algorithm**: Always remove the most significant digit when necessary.  
  - **Monotonic Stack**: Ensures optimal removal of digits.  

- **Time Complexity**: **O(N)** (Each digit is processed once).  
- **Space Complexity**: **O(N)** for the stack.  

### **Test Case:**  
```cpp
Input: num = "1432219", k = 3
Output: "1219"
```

### **Step-by-Step Dry Run:**
Using a **monotonic stack**, we ensure **smallest lexicographical order**.

#### **Step 1: Iterate Through Digits**
| Digit | Stack Before | Action | Stack After | k |
|--------|------------|--------|-------------|----|
| '1'    | []         | Push   | [1]         | 3  |
| '4'    | [1]        | Push   | [1,4]       | 3  |
| '3'    | [1,4]      | Pop 4  | [1]         | 2  |
| '3'    | [1]        | Push   | [1,3]       | 2  |
| '2'    | [1,3]      | Pop 3  | [1]         | 1  |
| '2'    | [1]        | Push   | [1,2]       | 1  |
| '1'    | [1,2]      | Pop 2  | [1]         | 0  |
| '1'    | [1]        | Push   | [1,1]       | 0  |
| '9'    | [1,1]      | Push   | [1,1,9]     | 0  |

#### **Step 2: Remove Leading Zeros**
Final Stack: `["1", "2", "1", "9"]`  
Final Answer: **"1219"** 

---

### 282. **Largest Rectangle in Histogram** [C++ Code](./_282_Largest_Rectangle_in_Histogram.cpp)  

- **File**: _282_Largest_Rectangle_in_Histogram.cpp_  
- **Description**:  
  - Given an array representing bar heights in a histogram, find the **largest rectangular area** that can be formed.  
  - Constraints:  
    - `1 <= heights.length <= 10^5`  
    - `0 <= heights[i] <= 10^4`  

- **Understanding the Problem**:  
  - We need to determine the **widest** possible rectangle with **maximum height**.  
  - Brute force (`O(N^2)`) is inefficient; instead, we use **monotonic stacks**.  

- **Pseudocode**:
```
Push a zero-height bar at the end
Use a stack to track indices
Iterate through heights:
  - If height is smaller than stack top, calculate area
  - Update max area
Return max area
```

- **Approach**:  
  1. **Use a Monotonic Stack**  
     - Store increasing heights in a stack.  
     - When encountering a smaller height, calculate area.  
  2. **Calculate Width Using Stack**  
     - Width is determined by nearest smaller elements.  
  3. **Return Maximum Area**  

- **Key Concepts Explained**:  
  - **Histogram Representation**: Treats bars as building blocks of rectangles.  
  - **Monotonic Stack**: Efficiently finds nearest smaller elements.  

- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

### **Test Case:**  
```cpp
Input: heights = [2,1,5,6,2,3]
Output: 10
```

### **Step-by-Step Dry Run Using Stack:**  

#### **Step 1: Iterate Over Heights**
| Index | Height | Stack Before | Action | Stack After | Computed Area | Max Area |
|--------|--------|-------------|--------|-------------|---------------|----------|
| 0      | 2      | []          | Push   | [0]         | -             | 0        |
| 1      | 1      | [0]         | Pop 2  | []          | 2×1 = 2       | 2        |
| 1      | 1      | []          | Push   | [1]         | -             | 2        |
| 2      | 5      | [1]         | Push   | [1,2]       | -             | 2        |
| 3      | 6      | [1,2]       | Push   | [1,2,3]     | -             | 2        |
| 4      | 2      | [1,2,3]     | Pop 6  | [1,2]       | 6×1 = 6       | 6        |
| 4      | 2      | [1,2]       | Pop 5  | [1]         | 5×2 = 10      | 10       |
| 4      | 2      | [1]         | Push   | [1,4]       | -             | 10       |
| 5      | 3      | [1,4]       | Push   | [1,4,5]     | -             | 10       |
| 6      | 0      | [1,4,5]     | Pop 3  | [1,4]       | 3×1 = 3       | 10       |
| 6      | 0      | [1,4]       | Pop 2  | [1]         | 2×4 = 8       | 10       |

Final Answer: **10** 

---
