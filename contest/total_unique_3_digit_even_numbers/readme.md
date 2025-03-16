### **Total Unique 3-Digit Even Numbers** [C++ Code](./code.cpp)  

- **File**: code
- **Description**:  
  - Given a list of digits, we need to find the number of unique 3-digit even numbers that can be formed using these digits exactly once per number.  
  - Constraints: The number must be a valid 3-digit number (i.e., it should not start with zero), and the last digit must be even.  

- **Understanding the Problem**:  
  - We are given an array of digits and need to form 3-digit numbers.
  - The hundreds place cannot be zero.
  - The ones place must be an even digit.
  - We cannot reuse the same digit in a single number.
  - Example: If the input is `[1, 2, 3, 0]`, the possible valid numbers are `102, 120, 130, 132, 302, 310` etc.

- **Pseudocode**:
```
Initialize a set to store unique numbers
Loop through digits for the hundreds place (skip 0)
    Loop through digits for the tens place (skip the same digit used in hundreds place)
        Loop through digits for the ones place (skip the ones used before and ensure even number)
            Construct the number and store in the set
Return the size of the set
```

- **Approach**:  
  1. Use a set to store unique numbers to avoid duplicates.  
  2. Use three nested loops to iterate through all possible 3-digit numbers.  
  3. The first digit must not be zero.  
  4. The third digit must be even.  
  5. If a number is valid, insert it into the set.  
  6. Return the size of the set as the answer.  

- **Key Concepts Explained**:  
  - **Sets**: Used to store unique numbers without duplicates.  
  - **Nested loops**: Used for generating all possible 3-digit numbers.  
  - **Constraints handling**: Ensuring valid 3-digit formation and even-ending condition.  

- **Time Complexity**:  
  - Since we use three nested loops iterating over `n` elements, the worst-case complexity is `O(n^3)`, which is feasible for small `n`.  

- **Space Complexity**:  
  - We use an unordered set to store unique numbers, leading to `O(k)`, where `k` is the number of valid unique numbers generated.  

Got it. Here's the dry run again without emojis.

---

### **Example Input:**  
```cpp
digits = [1, 2, 3, 0]
```

### **Dry Run Step-by-Step:**

1. **Initialize an unordered set** `uniqueNumbers = {}`  
2. **Iterate over the first digit (hundreds place):**  
   - `i = 0 → digits[i] = 1` (valid, not 0)  
   - `i = 1 → digits[i] = 2` (valid, not 0)  
   - `i = 2 → digits[i] = 3` (valid, not 0)  
   - `i = 3 → digits[i] = 0` (skip, leading zero not allowed)  

3. **Iterate over the second digit (tens place):**  
   - Must be different from `i`.  
   - Example: If `i = 0 (1st digit = 1)`, then possible second digits: `2, 3, 0`.  

4. **Iterate over the third digit (ones place):**  
   - Must be different from both `i` and `j`.  
   - Must be an **even digit** (0 or 2).  

### **Valid Numbers Formed:**
#### **For i = 0 (1st digit = 1):**
| **j (Tens place)** | **k (Ones place - Even only)** | **Number Formed** |
|--------------------|-----------------------------|------------------|
| 2                 | 0                             | 120              |
| 2                 | 3                             | (not even)       |
| 3                 | 0                             | 130              |
| 3                 | 2                             | 132              |
| 0                 | 2                             | 102              |

#### **For i = 1 (1st digit = 2):**
| **j (Tens place)** | **k (Ones place - Even only)** | **Number Formed** |
|--------------------|-----------------------------|------------------|
| 1                 | 0                             | 210              |
| 1                 | 3                             | (not even)       |
| 3                 | 0                             | 230              |

#### **For i = 2 (1st digit = 3):**
| **j (Tens place)** | **k (Ones place - Even only)** | **Number Formed** |
|--------------------|-----------------------------|------------------|
| 1                 | 0                             | 310              |
| 1                 | 2                             | 312              |
| 0                 | 2                             | 302              |

### **Final Unique Numbers:**
```cpp
{120, 130, 132, 102, 210, 230, 310, 312, 302}
```

### **Final Output:**
```
Total unique 3-digit even numbers = 9
```
---
