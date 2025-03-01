## Day 68 - Problems  

---

### 254. **Set the Rightmost Unset Bit** [C++ Code](./_254_Set_the_rightmost_unset_bit.cpp)  

- **File**: _254_Set_the_rightmost_unset_bit.cpp_  
- **Description**:  
  - The problem requires setting the rightmost unset (0) bit in a given integer.  
  - Constraints: Integer `n` is given, and we need to modify it by setting the rightmost unset bit to 1.  

- **Understanding the Problem**:  
  - Given an integer, find the first `0` bit from the right and turn it into `1` while keeping other bits unchanged.  
  - Example: `n = 5 (101 in binary)`, setting the rightmost `0` results in `7 (111 in binary)`.  

- **Pesudocode**:
```  
function setBit(n):
    return n | (n + 1)
```

- **Approach**:  
  1. The bitwise OR operation between `n` and `n+1` sets the rightmost `0` bit to `1`.  
  2. Example: If `n = 5 (101 in binary)`, then `n+1 = 6 (110 in binary)`. Performing OR: `101 | 110 = 111`.  
  3. This efficiently modifies the number in O(1) time complexity.  

- **Key Concepts Explained**:  
  - **Bitwise OR (`|`)**: Combines bits where `1 | 0 = 1` and `0 | 1 = 1`.  
  - **Binary Representation**: Understanding how numbers are stored in binary form helps visualize the bit manipulations.  

- **Time Complexity**: O(1)  
- **Space Complexity**: O(1)  

#### Example:
**Input:** `n = 5` (`101` in binary)  
**Expected Output:** `7` (`111` in binary)  

#### **Step-by-Step Execution**
1. **Binary Representation:** `n = 5 → 101`
2. **n + 1:** `5 + 1 = 6 → 110`
3. **Bitwise OR (`|`) Operation:**  
   ```
   101  (n)
   110  (n + 1)
   ----
   111  (Result → 7)
   ```
4. **Output:** `7`

---  

### 255. **Swap Two Numbers** [C++ Code](./_255_Swap_Two_Numbers.cpp)  

- **File**: _255_Swap_Two_Numbers.cpp_  
- **Description**:  
  - Swap two numbers without using a temporary variable.  
  - Constraints: Use bitwise operations to achieve this swap.  

- **Understanding the Problem**:  
  - Given two numbers `a` and `b`, swap their values efficiently using XOR.  
  - Example: If `a = 3, b = 5`, after swapping, `a = 5, b = 3`.  

- **Pesudocode**:
```
function swap(a, b):
    a = a XOR b
    b = a XOR b
    a = a XOR b
    return (a, b)
```

- **Approach**:  
  1. XOR (`^`) operation allows swapping without extra space.  
  2. `a = a ^ b` stores combined information in `a`.  
  3. `b = a ^ b` extracts original `a` value into `b`.  
  4. `a = a ^ b` assigns original `b` value to `a`.  

- **Key Concepts Explained**:  
  - **Bitwise XOR (`^`)**: Swapping without a temporary variable by leveraging XOR properties.  

- **Time Complexity**: O(1)  
- **Space Complexity**: O(1)  

#### Example:
**Input:** `a = 3, b = 5`  
**Expected Output:** `a = 5, b = 3`  

#### **Step-by-Step Execution**
1. **Initial Values:** `a = 3 (011)`, `b = 5 (101)`
2. **Step 1: `a = a ^ b`**
   ```
   011 (a)
   101 (b)
   ----
   110 (new a = 6)
   ```
3. **Step 2: `b = a ^ b`**
   ```
   110 (new a = 6)
   101 (b)
   ----
   011 (new b = 3)
   ```
4. **Step 3: `a = a ^ b`**
   ```
   110 (new a = 6)
   011 (new b = 3)
   ----
   101 (new a = 5)
   ```
5. **Final Output:** `a = 5, b = 3`


---  

### 256. **Divide Two Integers** [C++ Code](./_256_Divide_Two_Integers.cpp)  

- **File**: _256_Divide_Two_Integers.cpp_  
- **Description**:  
  - Implement integer division without using multiplication, division, or mod operator.  
  - Constraints: Handle edge cases like integer overflow.  

- **Understanding the Problem**:  
  - Given `dividend` and `divisor`, perform division using bitwise shifts.  
  - Example: `10 / 2 = 5`.  

- **Pesudocode**:
```
function divide(dividend, divisor):
    if (dividend is INT_MIN and divisor is -1):
        return INT_MAX
    while dividend >= divisor:
        shift divisor left until it is close to dividend
        subtract and update quotient accordingly
    return quotient
```

- **Approach**:  
  1. Handle edge case when `dividend = INT_MIN` and `divisor = -1`.  
  2. Use repeated subtraction with bitwise left shifts to speed up division.  
  3. Maintain a quotient to keep track of how many times we can subtract.  

- **Key Concepts Explained**:  
  - **Bitwise Left Shift (`<<`)**: Doubling values efficiently.  
  - **Edge Case Handling**: Avoiding integer overflow.  

- **Time Complexity**: O(log N)  
- **Space Complexity**: O(1)  

#### Example:
**Input:** `dividend = 10, divisor = 2`  
**Expected Output:** `5`  

#### **Step-by-Step Execution**
1. **Convert to Absolute Values:** `10, 2`
2. **Bitwise Left Shift to Find the Largest Multiple**
   - `2 << 1 = 4`
   - `4 << 1 = 8`
   - `8` is closest to `10`
3. **Subtract and Count Multiples**
   ```
   10 - 8 = 2  (Quotient = 4)
   2 - 2 = 0   (Quotient = 5)
   ```
4. **Final Output:** `5`

---  

### 257. **Minimum Bit Flips to Convert Number** [C++ Code](./_257_Minimum_Bit_Flips_to_Convert_Number.cpp)  

- **File**: _257_Minimum_Bit_Flips_to_Convert_Number.cpp_  
- **Description**:  
  - Given two integers, find the minimum number of bit flips to convert one to another.  
  - Constraints: Use bitwise operations.  

- **Understanding the Problem**:  
  - Given `start` and `goal`, find differing bits and count them.  
  - Example: `start = 10 (1010)`, `goal = 7 (0111)`, flips needed: `3`.  

- **Pesudocode**:
```
function minBitFlips(start, goal):
    xorResult = start XOR goal
    count = count set bits in xorResult
    return count
```

- **Approach**:  
  1. XOR (`^`) finds differing bits.  
  2. Count set bits (`1s`) in the XOR result.  

- **Key Concepts Explained**:  
  - **Bitwise XOR (`^`)**: Highlights bit differences.  
  - **Bit Counting**: Finding `1s` in a binary number.  

- **Time Complexity**: O(log N)  
- **Space Complexity**: O(1)  

#### Example:
**Input:** `start = 10 (1010)`, `goal = 7 (0111)`  
**Expected Output:** `3`  

#### **Step-by-Step Execution**
1. **XOR Operation (`^`) to Find Differences**
   ```
   1010 (start)
   0111 (goal)
   ----
   1101 (XOR result = 13)
   ```
2. **Count `1s` in `1101`**
   - `1101` has `3` bits set to `1`
3. **Final Output:** `3`

---  

