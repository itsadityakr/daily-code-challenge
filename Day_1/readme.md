## Day 1 - Problems

### 1. **Odd and Even Numbers**
   - **File**: `_01_odd_even.cpp`
   - **Description**: The program reads a number and checks whether it is odd or even.
   - **Approach**:
     - Use modulo operation (`% 2`) to check if a number is divisible by 2.
     - Output "Odd" if the result is not 0, and "Even" if the result is 0.

---

### 2. **Prime Number**
   - **File**: `_02_prime_number.cpp`
   - **Description**: The program checks if a number is prime.
   - **Approach**:
     - Iterate from 2 to the square root of the number.
     - If any number divides the input number, it’s not prime.

---

### 3. **Factorial of a Number**
   - **File**: `_03_factorial.cpp`
   - **Description**: The program calculates the factorial of a given number.
   - **Approach**:
     - Use a loop or recursion to multiply numbers from 1 to `n` for the factorial.
     - For `n = 0`, return 1 by definition.

---

### 4. **Fibonacci Sequence**
   - **File**: `_04_fibonacci_sequence.cpp`
   - **Description**: The program generates the Fibonacci sequence up to a given number of terms.
   - **Approach**:
     - Start with the first two terms, `0` and `1`.
     - Sum the last two terms to get the next term and repeat the process until the desired number of terms is reached.

---

### 5. **Sum of Digits**
   - **File**: `_05_sum_of_digits.cpp`
   - **Description**: The program calculates the sum of digits of a number.
   - **Approach**:
     - Use a loop to extract the last digit (`n % 10`), add it to the sum, and reduce the number by dividing it by 10 (`n / 10`).
     - Continue until the number is reduced to 0.

---

### 6. **Reverse Digits**
   - **File**: `_06_reverse_digits.cpp`
   - **Description**: The program reverses the digits of a given number.
   - **Approach**:
     - Extract digits one by one using modulo and integer division.
     - Multiply the reversed number by 10 and add the digit until the number is 0.

---

### 7. **Palindrome Number**
   - **File**: `_07_palindrome_number.cpp`
   - **Description**: The program checks if a number is a palindrome.
   - **Approach**:
     - Reverse the number and check if it is equal to the original number.

---

### 8. **Armstrong Number**
   - **File**: `_08_armstrong_number.cpp`
   - **Description**: The program checks if a number is an Armstrong number (a number equal to the sum of its own digits raised to the power of the number of digits).
   - **Approach**:
     - Find the number of digits, raise each digit to the power of the number of digits, and check if the sum equals the original number.

---

### 9. **Find HCF and LCM**
   - **File**: `_09_find_HCF_and_LCM.cpp`
   - **Description**: The program calculates the Highest Common Factor (HCF) and Least Common Multiple (LCM) of two numbers.
   - **Approach**:
     - Use Euclid’s algorithm for HCF.
     - Use the relationship `LCM(a, b) = (a * b) / HCF(a, b)` to find the LCM.

---

### 10. **Swap Two Numbers**
   - **File**: `_10_swap_numbers.cpp`
   - **Description**: The program swaps two numbers without using a third variable.
   - **Approach**:
     - Use arithmetic operations (`+` and `-` or `*` and `/`) or XOR bitwise operation to swap the numbers.

---

### 11. **Check Positive, Negative, or Zero**
   - **File**: `_11_check_pos_neg_zero.cpp`
   - **Description**: The program checks whether a number is positive, negative, or zero.
   - **Approach**:
     - Use simple conditional statements (`if`, `else if`, `else`) to check the number.

---

### 12. **Largest of Three Numbers**
   - **File**: `_12_largest_of_three.cpp`
   - **Description**: The program finds the largest number among three given numbers.
   - **Approach**:
     - Use conditional statements to compare the three numbers and identify the largest one.

---

### 13. **Multiplication Table**
   - **File**: `_13_multiplication_table.cpp`
   - **Description**: The program prints the multiplication table of a given number.
   - **Approach**:
     - Use a loop to iterate from 1 to 10, multiplying the given number by the loop index.

---

### 14. **Power of a Number**
   - **File**: `_14_power_of_number.cpp`
   - **Description**: The program calculates the power of a number.
   - **Approach**:
     - Use a loop to multiply the base number by itself `n` times or use the built-in `pow` function.

---

### License
This repository is licensed under the MIT License.

---
