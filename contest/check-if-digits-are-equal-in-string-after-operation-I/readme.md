### **Has Same Digits** [C++ Code](./code.cpp)  

- **File**: code.cpp
- **Description**:  
  - Given a string representing a number, repeatedly replace each adjacent pair of digits with their sum modulo 10 until only two digits remain.  
  - The task is to check if the final two digits are the same.  

- **Understanding the Problem**:  
  - You start with a number as a string.  
  - Repeatedly take adjacent pairs, sum them, and replace them with the last digit of their sum (i.e., modulo 10).  
  - Continue until only two digits remain.  
  - If these two digits are equal, return `true`; otherwise, return `false`.  
  - **Example**:  
    - Input: `"12345"`  
    - Process:  
      - `"12345"` → `"3579"` → `"826"` → `"88"`  
    - Output: `true`  

- **How to Solve the Problem**:  
  - Keep iterating until the string length is reduced to 2.  
  - At each step, replace adjacent digits with their sum modulo 10.  
  - Compare the last two remaining digits.  

- **Approach**:  
  1. Use a loop to process the number string until only two digits remain.  
  2. Store the new digits in a temporary string and update the original string.  
  3. Repeat the process until only two digits remain.  
  4. Return `true` if they are equal, otherwise return `false`.  

- **Key Concepts Explained**:  
  - **String manipulation**: Constructing new strings after processing digits.  
  - **Modulo operation**: Helps keep the sum within a single digit.  

- **Time Complexity**: `O(n^2)`, as the length reduces in each iteration but involves multiple passes.  
- **Space Complexity**: `O(n)`, as new strings are created at each step.   

---

### **Detailed Dry Run for "Has Same Digits"**  

#### **Input:**  
```plaintext
s = "12345"
```

---

### **Step 1: Initial String Processing**
- Given string `"12345"` (length = 5)
- We will repeatedly replace adjacent digits with their sum modulo `10` until only two digits remain.

---

### **Step 2: First Iteration**  

**Pairs & Computation:**  
- `(1 + 2) % 10 = 3`  
- `(2 + 3) % 10 = 5`  
- `(3 + 4) % 10 = 7`  
- `(4 + 5) % 10 = 9`  

**New String Formation:**  
```plaintext
"12345"  →  "3579"
```
- Now, `s = "3579"` (length = 4)

---

### **Step 3: Second Iteration**  

**Pairs & Computation:**  
- `(3 + 5) % 10 = 8`  
- `(5 + 7) % 10 = 2`  
- `(7 + 9) % 10 = 6`  

**New String Formation:**  
```plaintext
"3579"  →  "826"
```
- Now, `s = "826"` (length = 3)

---

### **Step 4: Third Iteration**  

**Pairs & Computation:**  
- `(8 + 2) % 10 = 0`  
- `(2 + 6) % 10 = 8`  

**New String Formation:**  
```plaintext
"826"  →  "08"
```
- Now, `s = "08"` (length = 2)

---

### **Step 5: Final Check**  
- Last two digits: `"08"`  
- `s[0] = '0'`, `s[1] = '8'`  
- Since `0 != 8`, return `false`

#### **Final Output:**  
```cpp
false
```

---