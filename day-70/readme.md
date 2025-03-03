---

## Day X - Problems  

---

### 261. **Single Number III** [C++ Code](./_261_Single_Number_III.cpp)  

- **File**: _261_Single_Number_III.cpp_  
- **Description**:  
  - Given an array of integers where every element appears twice except for two numbers which appear only once, find these two unique numbers.  
  - You must use linear runtime complexity and constant extra space.  

- **Understanding the Problem**:  
  - We have an array where every number appears twice except for two unique numbers. Our goal is to find these numbers efficiently.  
  - Example: Input: `[1, 2, 1, 3, 2, 5]` → Output: `[3, 5]` (order doesn’t matter).  

- **Pesudocode**:
```
1. XOR all elements → this cancels out duplicate numbers and gives XOR of two unique numbers.
2. Find a distinguishing bit (rightmost set bit) between these two numbers.
3. Split numbers into two groups based on this bit.
4. XOR each group separately to retrieve the unique numbers.
```

- **Approach**:  
  1. XOR all numbers → result is `A ^ B` (since duplicates cancel out).  
  2. Find rightmost set bit in `A ^ B` (this bit differentiates A and B).  
  3. Divide numbers into two groups based on this bit and XOR within each group.  
  4. The result of XOR in each group gives the two unique numbers.  

- **Key Concepts Explained**:  
  - XOR cancels out numbers appearing twice (`x ^ x = 0`).  
  - A set bit in `A ^ B` means A and B differ at that position.  
  - Grouping numbers ensures that one unique number appears in each group.  

- **Time Complexity**: O(N) since we traverse the array twice.  
- **Space Complexity**: O(1) since only a few extra variables are used.  

#### **Input:**  
```cpp
nums = [1, 2, 1, 3, 2, 5]
```

#### **Step 1: XOR all elements**
```
1 ⊕ 2 ⊕ 1 ⊕ 3 ⊕ 2 ⊕ 5
= (1 ⊕ 1) ⊕ (2 ⊕ 2) ⊕ (3 ⊕ 5)
= 0 ⊕ 0 ⊕ (3 ⊕ 5)
= 3 ⊕ 5 = 6 (Binary: 110)
```
Result: `xorAll = 6`

#### **Step 2: Find rightmost set bit**
- `6` in binary is `110`. The rightmost set bit is at position `2` (bit mask: `10`).

#### **Step 3: Divide into two groups**
| Number | Binary | Belongs to Group |
|---------|---------|-------------|
| `1` | `001` | Group 2 |
| `2` | `010` | Group 1 |
| `1` | `001` | Group 2 |
| `3` | `011` | Group 1 |
| `2` | `010` | Group 1 |
| `5` | `101` | Group 2 |

#### **Step 4: XOR each group**
- Group 1: `2 ⊕ 3 ⊕ 2 = 3`
- Group 2: `1 ⊕ 1 ⊕ 5 = 5`

#### **Output:** `[3, 5]`

---

### 262. **Distinct Prime Factors of Product of Array** [C++ Code](./_262_Distinct_Prime_Factors_of_Product_of_Array.cpp)  

- **File**: _262_Distinct_Prime_Factors_of_Product_of_Array.cpp_  
- **Description**:  
  - Given an array of numbers, find the distinct prime factors of their product.  
  - Constraints: The product can be large, so factorization should be done per number.  

- **Understanding the Problem**:  
  - We need to determine all prime factors of the product of all elements.  
  - Example: Input: `[2, 6, 8, 14]` → Output: `{2, 3, 7}`.  

- **Pesudocode**:
```
1. Define a function to find prime factors of a number.
2. Iterate through the array and find prime factors for each number.
3. Store unique prime factors in a set.
4. Return the size of the set.
```

- **Approach**:  
  1. Iterate over the array, factorize each number efficiently.  
  2. Store unique prime factors in an unordered set.  
  3. Return the count of unique prime factors.  

- **Key Concepts Explained**:  
  - Prime factorization using trial division.  
  - Using a set to store unique prime factors.  

- **Time Complexity**: O(N * sqrt(M)), where M is the largest number in the array.  
- **Space Complexity**: O(K), where K is the number of distinct prime factors.  

#### **Input:**  
```cpp
nums = [2, 6, 8, 14]
```

#### **Step 1: Factorizing each number**
| Number | Prime Factors |
|---------|--------------|
| `2` | `{2}` |
| `6` | `{2, 3}` |
| `8` | `{2}` |
| `14` | `{2, 7}` |

#### **Step 2: Collect distinct prime factors**
Unique factors: `{2, 3, 7}`

#### **Output:** `3`


---

### 263. **All Divisors of a Number** [C++ Code](./_263_All_divisors_of_a_Number.cpp)  

- **File**: _263_All_divisors_of_a_Number.cpp_  
- **Description**:  
  - Given an integer `n`, print all its divisors in increasing order.  

- **Understanding the Problem**:  
  - A divisor is a number that divides `n` without a remainder.  
  - Example: Input: `36` → Output: `1, 2, 3, 4, 6, 9, 12, 18, 36`.  

- **Pesudocode**:
```
1. Iterate from 1 to sqrt(n).
2. If i is a divisor, add both i and n/i to the list.
3. Sort and print the list.
```

- **Approach**:  
  1. Iterate from 1 to sqrt(n) to find divisors efficiently.  
  2. If `i` is a divisor, add both `i` and `n/i`.  
  3. Sort and print the divisors.  

- **Key Concepts Explained**:  
  - We only need to check numbers up to sqrt(n).  
  - If `i` is a divisor, then `n/i` is also a divisor.  

- **Time Complexity**: O(sqrt(N)).  
- **Space Complexity**: O(D), where D is the number of divisors.  

#### **Input:**  
```cpp
n = 36
```

#### **Step 1: Find divisors**
Iterating up to `sqrt(36) = 6`:

| `i` | `n % i == 0`? | Add `i` | Add `n/i` |
|----|------------|----|----|
| `1` | ✅ | `1` | `36` |
| `2` | ✅ | `2` | `18` |
| `3` | ✅ | `3` | `12` |
| `4` | ✅ | `4` | `9` |
| `5` | ❌ | - | - |
| `6` | ✅ | `6` | `6` |

#### **Step 2: Sort and Output**
Sorted divisors: `[1, 2, 3, 4, 6, 9, 12, 18, 36]`

#### **Output:**  
```cpp
1 2 3 4 6 9 12 18 36
```

---

### Prerequisites for Problems  

1. **Single Number III** - XOR operation, Bitwise manipulation.  
2. **Distinct Prime Factors of Product of Array** - Prime factorization, Sets.  
3. **All Divisors of a Number** - Number theory, Efficient iteration using sqrt(N).  

