## Day 71 - Problems  

---

### 264. **Sieve of Eratosthenes** [C++ Code](./_264_Sieve_of_Eratosthenes.cpp)  

- **File**: _264_Sieve_of_Eratosthenes.cpp_  
- **Description**:  
  - The problem requires us to find all prime numbers up to a given number **N**.
  - The constraints ensure that **N** can be large, making naive approaches inefficient.  
  
- **Understanding the Problem**:  
  - We need to generate all prime numbers from **1 to N** efficiently.
  - A prime number is only divisible by **1 and itself**.
  - Example: For **N = 10**, the output should be `[2, 3, 5, 7]`.
  
- **Pseudocode**:
```
1. Create a boolean array `is_prime` initialized to `true` for all numbers.
2. Mark `is_prime[0]` and `is_prime[1]` as `false` (0 and 1 are not prime).
3. Iterate from 2 to sqrt(N):
   - If `is_prime[i]` is `true`, mark all multiples of `i` as `false`.
4. Collect all numbers that remain `true` in the `is_prime` array.
```

- **Approach**:  
  1. Use a **boolean array** to track prime numbers.
  2. Iterate over numbers and mark their multiples as non-prime.
  3. Efficiently find primes in **O(N log log N)** time.

- **Key Concepts Explained**:  
  - **Prime Number**: A number with only two divisors (1 and itself).
  - **Sieve of Eratosthenes**: A technique to find all primes up to **N** efficiently.

- **Time Complexity**: **O(N log log N)**
- **Space Complexity**: **O(N)**

**Example**: Find all primes up to **N = 10**  

**Initial Array (`is_prime`)**:  
```
Index:    0  1  2  3  4  5  6  7  8  9 10
Value:    F  F  T  T  T  T  T  T  T  T  T  (T = True, F = False)
```
1. Start with `i = 2`, mark multiples of `2` as non-prime:  
   ```
   is_prime[4] = F, is_prime[6] = F, is_prime[8] = F, is_prime[10] = F
   ```
2. Move to `i = 3`, mark multiples of `3` as non-prime:  
   ```
   is_prime[9] = F
   ```
3. Stop at `i = sqrt(10) ≈ 3.16`  

**Final Primes**: `[2, 3, 5, 7]` 

---

### 265. **Prime Factorization of a Number using Sieve** [C++ Code](./_265_Prime_Factorization_of_a_Number_using_Sieve.cpp)  

- **File**: _265_Prime_Factorization_of_a_Number_using_Sieve.cpp_  
- **Description**:  
  - The problem requires finding all **distinct prime factors** of a given number **N**.
  - Constraints suggest **N** can be large, requiring an optimized approach.
  
- **Understanding the Problem**:  
  - A **prime factor** of a number is a prime that divides the number completely.
  - Example: For **N = 60**, the prime factors are `[2, 3, 5]`.

- **Pseudocode**:
```
1. Check divisibility by 2, divide `N` until it's no longer divisible.
2. Iterate from 3 to sqrt(N), check divisibility by odd numbers:
   - If divisible, add to result and divide until not divisible.
3. If `N > 1` after the loop, add `N` as the last prime factor.
```

- **Approach**:  
  1. Start with **2**, handle separately as it's the only even prime.
  2. Iterate only over **odd numbers** up to sqrt(N), reducing unnecessary checks.
  3. If **N > 1**, it's a prime factor itself.

- **Key Concepts Explained**:  
  - **Prime Factorization**: Breaking a number into its prime factors.
  - **Efficient Checking**: Only iterating up to sqrt(N) reduces time complexity.

- **Time Complexity**: **O(sqrt(N))**
- **Space Complexity**: **O(1)**

**Example**: Find prime factors of **N = 60**  

1. Check divisibility by `2`:
   ```
   60 ÷ 2 = 30
   30 ÷ 2 = 15
   (Store 2 as a prime factor)
   ```
2. Check divisibility by `3`:
   ```
   15 ÷ 3 = 5
   (Store 3 as a prime factor)
   ```
3. `N = 5` (which is prime) → Store `5`  

**Final Prime Factors**: `[2, 3, 5]` 

---

### 266. **Pow(x, n)** [C++ Code](./_266_Pow_x_n.cpp)  

- **File**: _266_Pow_x_n.cpp_  
- **Description**:  
  - The problem requires calculating **x raised to the power n (x^n)** efficiently.
  - Constraints suggest that **n** can be large, requiring an optimized method.
  
- **Understanding the Problem**:  
  - Compute `x^n` without using built-in power functions.
  - Example: `myPow(2, 10) = 1024`, `myPow(2, -2) = 0.25`

- **Pseudocode**:
```
1. Handle negative exponent by taking reciprocal (`1/x`) and converting `n` to positive.
2. Initialize result as 1.
3. Use **Exponentiation by Squaring**:
   - If `n` is odd, multiply result by `x`.
   - Square `x`, halve `n`.
4. Return the final result.
```

- **Approach**:  
  1. Convert negative exponent to positive and use reciprocal.
  2. Use **binary exponentiation** (divide exponent by 2 and square base).
  3. Reduce operations to **logarithmic time** complexity.

- **Key Concepts Explained**:  
  - **Exponentiation by Squaring**: Efficiently computes powers in **O(log n)**.
  - **Handling Negative Exponents**: Convert to reciprocal to manage negative powers.

- **Time Complexity**: **O(log N)**
- **Space Complexity**: **O(1)**


**Example**: Compute `2^5`  

**Steps using Exponentiation by Squaring**:
1. `n = 5` (odd), multiply result by `x` → `result = 2`
2. Square `x = 4`, halve `n = 2`
3. `n = 2` (even), square `x = 16`, halve `n = 1`
4. `n = 1` (odd), multiply result by `x` → `result = 32`
5. `n = 0`, return `result = 32`

**Final Answer**: `32` 

---

### Prerequisites for Problems:  

1. **Sieve of Eratosthenes** - Prime Numbers, Sieve Algorithm, Boolean Arrays  
2. **Prime Factorization using Sieve** - Prime Numbers, Factorization, Efficient Iteration  
3. **Pow(x, n)** - Exponentiation by Squaring, Logarithmic Optimization, Edge Cases Handling  

---

