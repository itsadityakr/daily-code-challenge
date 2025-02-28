## Day 67 - Problems  

---

### 250. **Kth Bit is Set or Not** [C++ Code](./_250_Kth_Bit_is_Set_or_Not.cpp)  

- **File**: _250_Kth_Bit_is_Set_or_Not.cpp_  
- **Description**:  
  - Given an integer `n` and an index `k`, determine if the `k`-th bit in `n` (0-based index) is set (i.e., 1) or not (i.e., 0).  
  - Constraints: `0 ≤ k < 31`, `0 ≤ n ≤ 10^9`.  

- **Understanding the Problem**:  
  - The problem requires checking whether the `k`-th bit in the binary representation of `n` is `1` or `0`.  
  - Example: If `n = 5` (binary `101`), and `k = 2`, the 2nd bit (counting from right, 0-based index) is `1`.  

- **Pseudocode**:
```
function checkKthBit(n, k):
    if (n & (1 << k)) != 0:
        return True
    else:
        return False
```

- **Approach**:  
  1. Use bitwise AND `&` to check if the `k`-th bit is set.  
  2. Shift `1` left by `k` positions (`1 << k`), creating a mask with only the `k`-th bit set.  
  3. Perform `n & (1 << k)`, which will return a non-zero value if the `k`-th bit is `1`.  

- **Key Concepts Explained**:  
  - **Bitwise AND (`&`)**: Used to extract specific bits.  
  - **Bitwise Shift (`<<`)**: Moves bits left, effectively multiplying by powers of 2.  

- **Time Complexity**: **O(1)** (Constant time operation)  
- **Space Complexity**: **O(1)** (No extra space used)  

### **Example Dry Run**  

#### **Input:**  
```cpp
n = 5, k = 2
```
#### **Binary Representation of `n` (5):**  
```
Decimal:  5
Binary :  101  (Bit positions: 2  1  0)
```
`k = 2`, so we check if the **2nd bit** (counting from 0) is `1`.

#### **Steps:**
1. Compute `(1 << k)`:  
   - `1 << 2 = 100` (Binary)  
2. Compute `n & (1 << k)`:  
   ```
   101  (n = 5)
   100  (1 << 2)
   ----
   100  (Result ≠ 0 → bit is set)
   ```
3. Since the result is **not zero**, return `true`.

#### **Output:**  
`true` (2nd bit is set)

---

### **Edge Case Dry Run**
#### **Input:**  
```cpp
n = 8, k = 1
```
#### **Binary Representation of `n` (8):**  
```
Decimal:  8
Binary : 1000  (Bit positions: 3  2  1  0)
```
`k = 1`, so we check if the **1st bit** is `1`.

#### **Steps:**
1. Compute `(1 << k)`:  
   - `1 << 1 = 10` (Binary)  
2. Compute `n & (1 << k)`:  
   ```
   1000  (n = 8)
   0010  (1 << 1)
   ----
   0000  (Result = 0 → bit is NOT set)
   ```
3. Since the result is **zero**, return `false`.

#### **Output:**  
`false` (1st bit is NOT set)


---

### 251. **Odd or Even** [C++ Code](./_251_Odd_or_Even.cpp)  

- **File**: _251_Odd_or_Even.cpp_  
- **Description**:  
  - Given an integer `n`, determine whether it is odd or even.  
  - Constraints: `-10^9 ≤ n ≤ 10^9`.  

- **Understanding the Problem**:  
  - A number is even if its least significant bit (rightmost bit) is `0`, and odd if it is `1`.  
  - Example: `n = 4 (100) → Even`, `n = 7 (111) → Odd`.  

- **Pseudocode**:
```
function isEven(n):
    if (n & 1) == 0:
        return True
    else:
        return False
```

- **Approach**:  
  1. Use bitwise AND `n & 1`.  
  2. If the result is `1`, `n` is odd; otherwise, it is even.  

- **Key Concepts Explained**:  
  - **Bitwise AND (`&`)**: `n & 1` isolates the last bit of `n`.  

- **Time Complexity**: **O(1)**  
- **Space Complexity**: **O(1)**  

### **Example Dry Run**  

#### **Input:**  
```cpp
n = 4
```
#### **Binary Representation:**  
```
Decimal:  4
Binary : 100
```
#### **Steps:**
1. Compute `n & 1`:  
   ```
   100 (n = 4)
   001 (1)
   ---
   000 (Result = 0 → EVEN)
   ```
2. Since the result is `0`, return `true` (even).

#### **Output:**  
`true` (Even)

---

### **Another Example Dry Run**
#### **Input:**  
```cpp
n = 7
```
#### **Binary Representation:**  
```
Decimal:  7
Binary : 111
```
#### **Steps:**
1. Compute `n & 1`:  
   ```
   111 (n = 7)
   001 (1)
   ---
   001 (Result = 1 → ODD)
   ```
2. Since the result is `1`, return `false` (odd).

#### **Output:**  
`false` (Odd)


---

### 252. **Power of Two** [C++ Code](./_252_Power_of_Two.cpp)  

- **File**: _252_Power_of_Two.cpp_  
- **Description**:  
  - Given an integer `n`, determine if it is a power of two.  
  - Constraints: `-2^31 ≤ n ≤ 2^31 - 1`.  

- **Understanding the Problem**:  
  - A number is a power of two if it has exactly one `1` in its binary representation.  
  - Example: `8 (1000) → True`, `10 (1010) → False`.  

- **Pseudocode**:
```
function isPowerOfTwo(n):
    return (n > 0) and ((n & (n - 1)) == 0)
```

- **Approach**:  
  1. A power of two has only one bit set (`n = 2^x`).  
  2. `n & (n - 1) == 0` checks if only one bit is set.  

- **Key Concepts Explained**:  
  - **Bitwise AND (`&`)**: `n & (n - 1)` removes the rightmost `1`.  

- **Time Complexity**: **O(1)**  
- **Space Complexity**: **O(1)**  

### **Example Dry Run**  

#### **Input:**  
```cpp
n = 8
```
#### **Binary Representation:**  
```
Decimal:  8
Binary : 1000
```
#### **Steps:**
1. Compute `n - 1`:  
   ```
   1000  (n = 8)
   0111  (n - 1)
   ```
2. Compute `n & (n - 1)`:  
   ```
   1000
   0111
   ----
   0000  (Result = 0 → Power of Two)
   ```
3. Since the result is `0`, return `true`.

#### **Output:**  
`true` (8 is a power of two)

---

### **Another Example Dry Run**
#### **Input:**  
```cpp
n = 10
```
#### **Binary Representation:**  
```
Decimal: 10
Binary : 1010
```
#### **Steps:**
1. Compute `n - 1`:  
   ```
   1010  (n = 10)
   1001  (n - 1)
   ```
2. Compute `n & (n - 1)`:  
   ```
   1010
   1001
   ----
   1000  (Result ≠ 0 → NOT a power of Two)
   ```
3. Since the result is **not** `0`, return `false`.

#### **Output:**  
`false` (10 is NOT a power of two)


---

### 253. **Counting Bits** [C++ Code](./_253_Counting_Bits.cpp)  

- **File**: _253_Counting_Bits.cpp_  
- **Description**:  
  - Given an integer `n`, return an array where `i`-th element is the count of `1`s in the binary representation of `i`.  
  - Constraints: `0 ≤ n ≤ 10^5`.  

- **Understanding the Problem**:  
  - Example: `n = 5` → `[0, 1, 1, 2, 1, 2]` (Binary: `0, 1, 10, 11, 100, 101`).  

- **Pseudocode**:
```
function countBits(n):
    result = array of size (n + 1)
    result[0] = 0
    for i from 1 to n:
        result[i] = result[i >> 1] + (i & 1)
    return result
```

- **Approach**:  
  1. Use dynamic programming: `dp[i] = dp[i >> 1] + (i & 1)`.  
  2. `i >> 1` is `i` divided by `2` (shifts right).  
  3. `(i & 1)` checks if `i` is odd (adds 1 if true).  

- **Key Concepts Explained**:  
  - **Bitwise Shift (`>>`)**: Right shifts by 1 (dividing by 2).  
  - **Dynamic Programming**: Store results to avoid recomputation.  

- **Time Complexity**: **O(n)**  
- **Space Complexity**: **O(n)**  

### **Example Dry Run**  

#### **Input:**  
```cpp
n = 5
```
#### **Expected Output:**  
```
[0, 1, 1, 2, 1, 2]
```
#### **Binary Representations:**  
```
0 →  000  → 0 ones
1 →  001  → 1 one
2 →  010  → 1 one
3 →  011  → 2 ones
4 →  100  → 1 one
5 →  101  → 2 ones
```
#### **Step-by-Step Execution:**
1. Initialize `ans = [0, 0, 0, 0, 0, 0]`
2. Loop `i` from `1` to `5`:
   ```
   ans[i] = ans[i >> 1] + (i & 1)
   ```
   | `i`  | `i >> 1` | `i & 1` | `ans[i] = ans[i >> 1] + (i & 1)` |
   |------|----------|---------|--------------------------------|
   | 1    | 0        | 1       | 0 + 1 = 1                    |
   | 2    | 1        | 0       | 1 + 0 = 1                    |
   | 3    | 1        | 1       | 1 + 1 = 2                    |
   | 4    | 2        | 0       | 1 + 0 = 1                    |
   | 5    | 2        | 1       | 1 + 1 = 2                    |

3. Final `ans = [0, 1, 1, 2, 1, 2]`

#### **Output:**  
`[0, 1, 1, 2, 1, 2]`

---