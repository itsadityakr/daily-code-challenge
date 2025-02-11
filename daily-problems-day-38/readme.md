### Day 38 - Problems  

---

### 130. **GCD of Two Numbers** [CPP Code](./_130_gcd_of_two_numbers.cpp)
   - **File**: _130_gcd_of_two_numbers.cpp
   - **Description**: This problem involves calculating the greatest common divisor (GCD) of two numbers. The GCD is the largest number that divides both numbers without leaving a remainder.
   - **Approach**: 
     - **Definition of GCD**: The GCD of two numbers `a` and `b` is the largest number `d` such that both `a` and `b` are divisible by `d`. For example, the GCD of 12 and 15 is 3.
     - **Algorithm Used**: **Euclidean Algorithm**. This algorithm is based on the principle that the GCD of two numbers does not change if the larger number is replaced by its remainder when divided by the smaller number.
     - **Steps**:
       1. Keep finding the remainder of `a` divided by `b`.
       2. Replace `a` with `b` and `b` with the remainder.
       3. Repeat the process until `b` becomes 0.
       4. The final value of `a` is the GCD.
     - **Example**:
       - Input: `a = 48, b = 18`
       - Steps:
         - `48 % 18 = 12` → `a = 18, b = 12`
         - `18 % 12 = 6` → `a = 12, b = 6`
         - `12 % 6 = 0` → `a = 6, b = 0`
       - Output: `6`
   - **Time Complexity**: O(log(min(a, b))) because the size of the numbers reduces by at least half in each iteration.
   - **Space Complexity**: O(1) as no additional space is used.

---

### 131. **LCM and GCD** [CPP Code](./_131_lcm_and_gcd.cpp)
   - **File**: _131_lcm_and_gcd.cpp
   - **Description**: This problem involves finding both the least common multiple (LCM) and the greatest common divisor (GCD) of two numbers. 
   - **Approach**:
     - **Definition**:
       - GCD is the largest number that divides both numbers without leaving a remainder.
       - LCM is the smallest number that is a multiple of both numbers.
       - The relation between GCD and LCM: `LCM(a, b) * GCD(a, b) = a * b`.
     - **Steps**:
       1. Calculate the GCD using the Euclidean Algorithm.
       2. Compute the LCM using the formula: `LCM(a, b) = (a * b) / GCD(a, b)`.
       3. Return both LCM and GCD as the result.
     - **Example**:
       - Input: `a = 12, b = 15`
       - GCD Calculation:
         - `12 % 15 = 12` → `a = 15, b = 12`
         - `15 % 12 = 3` → `a = 12, b = 3`
         - `12 % 3 = 0` → `a = 3, b = 0`
         - GCD = `3`
       - LCM Calculation:
         - `LCM = (12 * 15) / 3 = 60`
       - Output: `{60, 3}`
   - **Time Complexity**: O(log(min(a, b))) for GCD calculation.
   - **Space Complexity**: O(1).

---

### 132. **Find Greatest Common Divisor of an Array** [CPP Code](./_132_find_greatest_common_divisor_of_array.cpp)
   - **File**: _132_find_greatest_common_divisor_of_array.cpp
   - **Description**: This problem involves finding the GCD of the largest and smallest numbers in an array.
   - **Approach**:
     - **Steps**:
       1. Find the smallest and largest numbers in the array using a single pass.
       2. Use the Euclidean Algorithm to compute the GCD of the smallest and largest numbers.
     - **Example**:
       - Input: `nums = [2, 5, 6, 9, 10]`
       - Largest = `10`, Smallest = `2`
       - GCD Calculation:
         - `10 % 2 = 0` → GCD = `2`
       - Output: `2`
     - **Explanation for Beginners**:
       - Instead of computing the GCD of all numbers in the array, you only need the smallest and largest numbers because the GCD of these two will divide all other numbers in the array.
   - **Time Complexity**: O(n) to find the largest and smallest numbers, O(log(min(largest, smallest))) for GCD calculation.
   - **Space Complexity**: O(1).

---

### 133. **Reverse Integer** [CPP Code](./_133_reverse_integer.cpp)
   - **File**: _133_reverse_integer.cpp
   - **Description**: This problem involves reversing the digits of a given integer. If the reversed integer exceeds the 32-bit signed integer range, return 0.
   - **Approach**:
     - **Steps**:
       1. Extract each digit from the number using the modulus operator (`%`).
       2. Build the reversed number by multiplying the current result by 10 and adding the extracted digit.
       3. Check for overflow:
          - If the reversed number exceeds `INT_MAX / 10` or falls below `INT_MIN / 10`, return 0.
       4. Continue until all digits are processed.
     - **Example**:
       - Input: `n = 123`
       - Steps:
         - Extract `3` → Reverse = `0 * 10 + 3 = 3`
         - Extract `2` → Reverse = `3 * 10 + 2 = 32`
         - Extract `1` → Reverse = `32 * 10 + 1 = 321`
       - Output: `321`
       - Edge Case: For `n = 1534236469`, reversing would cause an overflow, so return `0`.
   - **Time Complexity**: O(log10(n)) as each iteration processes one digit.
   - **Space Complexity**: O(1).

---