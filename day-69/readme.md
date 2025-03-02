Here’s how the problems can be structured using the provided template:  

---

## Day X - Problems  

---

### 258. **Exceptionally Odd** [C++ Code](./_258_Exceptionally_odd.cpp)  

- **File**: _258_Exceptionally_odd.cpp_  
- **Description**:  
  - Given an array of integers, find the number that occurs an odd number of times.  
  - The array contains only one such number, and all other numbers appear an even number of times.  

- **Understanding the Problem**:  
  - We need to find the element that appears an odd number of times in an array.  
  - Example:  
    ```
    Input: arr = [1, 2, 3, 2, 3, 1, 3]  
    Output: 3  
    Explanation: 3 appears an odd number of times.
    ```

- **Pesudocode**:
```
Initialize result as 0
For each number in the array:
    Perform XOR operation between result and the number
Return result
```

- **Approach**:  
  1. We initialize a variable `result = 0`.  
  2. We iterate through the array and perform an XOR operation with `result`.  
  3. Since XOR of two identical numbers is `0`, only the number appearing an odd number of times will remain.  
  4. Return the `result` as the answer.  

- **Key Concepts Explained**:  
  - **XOR Operation (`^`)**:  
    - `a ^ a = 0` (same numbers cancel out).  
    - `a ^ 0 = a` (XOR with zero keeps the number the same).  
    - This property helps us eliminate even-occurring numbers, leaving the odd-occurring one.  

- **Time Complexity**: `O(N)` (Single pass through the array)  
- **Space Complexity**: `O(1)` (Only one variable used)  

### **Example Input:**  
```cpp
arr = [1, 2, 3, 2, 3, 1, 3]  
n = 7  
```

### **Step-by-Step Execution:**  
We use XOR (`^`) operation to find the odd-occurring number.

| Step | `result` (initially 0) | Current Element | XOR Operation (`result ^ element`) | Updated `result` |
|------|-------------------|----------------|----------------------------------|-------------------|
| 1    | 0                 | 1              | `0 ^ 1 = 1`                     | 1                 |
| 2    | 1                 | 2              | `1 ^ 2 = 3`                     | 3                 |
| 3    | 3                 | 3              | `3 ^ 3 = 0`                     | 0                 |
| 4    | 0                 | 2              | `0 ^ 2 = 2`                     | 2                 |
| 5    | 2                 | 3              | `2 ^ 3 = 1`                     | 1                 |
| 6    | 1                 | 1              | `1 ^ 1 = 0`                     | 0                 |
| 7    | 0                 | 3              | `0 ^ 3 = 3`                     | 3                 |

### **Final Output:**  
`3` (the number that appears an odd number of times)

---

### 259. **Power Set** [C++ Code](./_259_Power_Set.cpp)  

- **File**: _259_Power_Set.cpp_  
- **Description**:  
  - Generate all possible non-empty subsets of a given string and return them in sorted order.  

- **Understanding the Problem**:  
  - A **power set** contains all subsets of a given set.  
  - Example:  
    ```
    Input: "abc"  
    Output: ["a", "ab", "abc", "ac", "b", "bc", "c"]
    ```

- **Pesudocode**:
```
Compute total subsets = 2^n (excluding empty subset)
For each subset represented by a binary number:
    Construct the subset by including characters at set bit positions
Sort and return the list of subsets
```

- **Approach**:  
  1. There are `2^n` subsets of a set with `n` elements.  
  2. We use a binary representation (`0` = exclude, `1` = include) to generate subsets.  
  3. Iterate from `1` to `2^n - 1` to generate all non-empty subsets.  
  4. Convert each binary representation into a subset by selecting characters at `1` positions.  
  5. Sort the subsets alphabetically before returning.  

- **Key Concepts Explained**:  
  - **Bit Manipulation for Subsets**:  
    - Each subset corresponds to a binary number where bits represent inclusion/exclusion.  
    - Example for `"abc"`:  
      - `001` → `"c"`  
      - `010` → `"b"`  
      - `011` → `"bc"`  
      - ...  

- **Time Complexity**: `O(2^N * N)` (Generating subsets and sorting)  
- **Space Complexity**: `O(2^N)` (Storing all subsets)  

### **Example Input:**  
```cpp
s = "abc"
```

### **Step-by-Step Execution:**  
There are `2^n - 1 = 7` non-empty subsets.

| Binary Representation | Selected Characters | Subset |
|----------------------|------------------|--------|
| `001`              | `c`              | `"c"`  |
| `010`              | `b`              | `"b"`  |
| `011`              | `b, c`           | `"bc"` |
| `100`              | `a`              | `"a"`  |
| `101`              | `a, c`           | `"ac"` |
| `110`              | `a, b`           | `"ab"` |
| `111`              | `a, b, c`        | `"abc"` |

### **Final Sorted Output:**  
`["a", "ab", "abc", "ac", "b", "bc", "c"]`


---

### 260. **XOR Operation in an Array** [C++ Code](./_260_XOR_Operation_in_an_Array.cpp)  

- **File**: _260_XOR_Operation_in_an_Array.cpp_  
- **Description**:  
  - Given `n` and `start`, construct an array `nums` where `nums[i] = start + 2*i`, then return XOR of all elements.  

- **Understanding the Problem**:  
  - Example:  
    ```
    Input: n = 5, start = 0  
    Output: 8  
    Explanation: nums = [0, 2, 4, 6, 8], XOR = 0 ^ 2 ^ 4 ^ 6 ^ 8 = 8  
    ```

- **Pesudocode**:
```
Initialize result as 0
For each i from 0 to n-1:
    Compute nums[i] = start + 2 * i
    XOR nums[i] with result
Return result
```

- **Approach**:  
  1. Initialize `result = 0`.  
  2. Construct the array dynamically using `nums[i] = start + 2 * i`.  
  3. Perform XOR with each element to compute the final result.  

- **Key Concepts Explained**:  
  - **XOR Properties** (Same as in "Exceptionally Odd" problem).  
  - **Bitwise XOR Calculation** reduces unnecessary array storage, making it memory efficient.  

- **Time Complexity**: `O(N)` (Iterating through `n` elements).  
- **Space Complexity**: `O(1)` (No extra storage used).  


### **Example Input:**  
```cpp
n = 5, start = 0
```

### **Step-by-Step Execution:**  
Compute array `nums[i] = start + 2 * i` and XOR all elements.

| `i` | `nums[i]` (`start + 2 * i`) | `result` (initially 0) | XOR Operation (`result ^ nums[i]`) | Updated `result` |
|----|----------------|----------------|----------------------------------|-------------------|
| 0  | `0 + 2*0 = 0` | 0              | `0 ^ 0 = 0`                     | 0                 |
| 1  | `0 + 2*1 = 2` | 0              | `0 ^ 2 = 2`                     | 2                 |
| 2  | `0 + 2*2 = 4` | 2              | `2 ^ 4 = 6`                     | 6                 |
| 3  | `0 + 2*3 = 6` | 6              | `6 ^ 6 = 0`                     | 0                 |
| 4  | `0 + 2*4 = 8` | 0              | `0 ^ 8 = 8`                     | 8                 |

### **Final Output:**  
`8`

---
