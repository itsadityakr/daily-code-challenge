## Day 36 - Problems

---

### 119. **Number of Factors** [CPP Code](./_119_numbers_of_factors.cpp)
   - **File**: _119_numbers_of_factors.cpp
   - **Description**: Given a number `N`, the goal is to find the total number of factors of `N`.
   - **Approach**: 
     To determine the number of factors of a number `N`, we iterate from `1` to `sqrt(N)`. If a number `i` divides `N` evenly, it means both `i` and `N/i` are factors. We increment the count by `2` in this case, except when `i == N/i`, where we increment by `1` because the two factors are the same.
     - **Steps**:
       1. Start a loop from `1` to `sqrt(N)`.
       2. For every `i`, check if `N % i == 0`.
       3. If true, increment the count by `2` (for both `i` and `N/i`), unless `i == N/i`, in which case increment by `1`.
       4. Return the final count.
     - **Terms Explained**:
       - **Factor**: A number `x` is a factor of `N` if `N % x == 0`.
       - **Square Root**: Iterating up to `sqrt(N)` ensures efficiency because factors occur in pairs (e.g., for `N=12`, factors are `(1,12)`, `(2,6)`, `(3,4)`).
   - **Time Complexity**: \( O(\sqrt{N}) \)
   - **Space Complexity**: \( O(1) \)

---

### 120. **Perfect Number** [CPP Code](./_120_perfect_number.cpp)
   - **File**: _120_perfect_number.cpp
   - **Description**: A number is called a perfect number if it is equal to the sum of all its proper divisors (excluding itself). The task is to check if a given number `num` is perfect.
   - **Approach**:
     To check if a number `num` is perfect:
     1. Initialize a `sum` variable to `1` (since `1` is always a divisor).
     2. Iterate from `2` to `sqrt(num)`. For every divisor `i`, add both `i` and `num/i` to the sum (if they are different).
     3. After the loop, check if `sum == num`. If true, return `true`; otherwise, return `false`.
     - **Special Case**: If `num <= 1`, return `false` immediately since no perfect numbers exist below 2.
     - **Terms Explained**:
       - **Proper Divisors**: Divisors of a number excluding the number itself.
       - **Perfect Number**: A number equal to the sum of its proper divisors (e.g., `28` because `1 + 2 + 4 + 7 + 14 = 28`).
   - **Time Complexity**: \( O(\sqrt{N}) \)
   - **Space Complexity**: \( O(1) \)

---

### 121. **Three Divisors** [CPP Code](./_121_three_divisors.cpp)
   - **File**: _121_three_divisors.cpp
   - **Description**: Check if a number `n` has exactly three divisors.
   - **Approach**:
     To have exactly three divisors, a number must be a perfect square, and its square root must be a prime number. For example:
     - `n = 9`: Divisors are `1, 3, 9` (exactly 3).
     1. Iterate from `1` to `sqrt(n)`. For every `i`, if `n % i == 0`, increment the divisor count.
     2. If the count is `3`, return `true`; otherwise, return `false`.
     - **Terms Explained**:
       - **Perfect Square**: A number that can be expressed as \( x^2 \).
       - **Prime Number**: A number greater than 1 with no divisors other than `1` and itself.
   - **Time Complexity**: \( O(\sqrt{N}) \)
   - **Space Complexity**: \( O(1) \)

---

### 122. **Four Divisors** [CPP Code](./_122_four_divisors.cpp)
   - **File**: _122_four_divisors.cpp
   - **Description**: Given a list of integers, find the sum of divisors of numbers that have exactly four divisors.
   - **Approach**:
     1. For each number in the list, calculate its divisors.
     2. Use a nested loop to check divisors up to `sqrt(num)`.
     3. If the number of divisors exceeds `4`, skip further checks for that number.
     4. If exactly four divisors are found, add their sum to the total sum.
     - **Optimization**: Stop processing a number if the divisor count exceeds `4`.
     - **Terms Explained**:
       - **Divisors**: Numbers that divide the given number without leaving a remainder.
       - **Nested Loop**: A loop inside another loop used to check divisors for multiple numbers.
   - **Time Complexity**: \( O(N \times \sqrt{M}) \), where `N` is the size of the list, and `M` is the largest number.
   - **Space Complexity**: \( O(1) \)

---

### 123. **Armstrong Number** [CPP Code](./_123_armstrong_number.cpp)
   - **File**: _123_armstrong_number.cpp
   - **Description**: A number is called an Armstrong number (or Narcissistic number) if the sum of its digits raised to the power of the number of digits is equal to the number itself. The task is to check if a given number is an Armstrong number.
   - **Approach**:
     1. Extract each digit of the number using modulo (`%`) and integer division (`/`).
     2. Cube each digit and add it to a `sum`.
     3. Compare the sum with the original number.
     4. Return `true` if they are equal; otherwise, return `false`.
     - **Terms Explained**:
       - **Digits**: The individual numbers that make up a larger number (e.g., `123` has digits `1, 2, 3`).
       - **Cube**: The result of multiplying a number by itself three times (\( x^3 \)).
   - **Time Complexity**: \( O(\log_{10}(N)) \), proportional to the number of digits.
   - **Space Complexity**: \( O(1) \)

---