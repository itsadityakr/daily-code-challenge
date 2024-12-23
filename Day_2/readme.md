## Day 2 - Problems

### 1. **Check if a Number is a Perfect Square**
   - **File**: `_15_check_if_no_is_perfect_square.cpp`
   - **Description**: Check if a number is a perfect square (i.e., if the square root is an integer).
   - **Approach**:
     - Take the square root of the number, and if the square of the integer value of the square root equals the number, it is a perfect square.

---

### 2. **Find the Square Root of a Number**
   - **File**: `_16_find_sqrt.cpp`
   - **Description**: Calculate the square root of a number.
   - **Approach**:
     - The approach used here is binary search to find the square root of a number. Initially, the range is set between 0 and n. The midpoint mid is calculated, and its square is compared with n. If mid * mid is greater than n, the search space is narrowed by adjusting the high bound; otherwise, the low bound is adjusted. This process continues until the difference between low and high is smaller than a specified tolerance, ensuring an accurate approximation of the square root.

---

### 3. **Count the Digits in a Number**
   - **File**: `_17_digits_in_a_number.cpp`
   - **Description**: Find the number of digits in a given integer.
   - **Approach**:
     - Use a loop to repeatedly divide the number by 10 until it becomes 0, counting the number of iterations.

---

### 4. **Check if a Number is a Perfect Number**
   - **File**: `_18_check_perfect_number.cpp`
   - **Description**: Check if a number is a perfect number (i.e., if the sum of its proper divisors equals the number).
   - **Approach**:
     - Find all divisors of the number, sum them, and check if the sum equals the original number.

---

### 5. **Decimal to Binary, Octal, and Hexadecimal**
   - **File**: `_19_decimal_to_binary_octal_hexadecimal.cpp`
   - **Description**: Convert a decimal number to binary, octal, and hexadecimal representations.
   - **Approach**:
     - The approach used in the toBinary function is to shift the bits of the number and extract each bit starting from the most significant bit (MSB) down to the least significant bit (LSB). The bitwise right shift (n >> i) shifts the bits of n to the right by i positions, and the bitwise AND (& 1) isolates the bit at the current position. This is done for all 32 bits, printing each bit one by one to form the binary representation of the number. The toOctal function is to convert a decimal number to its octal representation by repeatedly dividing the number by 8. In each iteration, the remainder (n % 8) is stored in an array, representing the octal digits from least significant to most significant. After the number becomes zero, the array is traversed in reverse order to print the octal digits from most significant to least significant. This ensures the correct octal representation of the input number. The toHexadecimal function is to convert a decimal number to its hexadecimal representation by repeatedly dividing the number by 16. In each iteration, the remainder (n % 16) represents a hexadecimal digit. If the remainder is less than 10, it is converted to the corresponding character ('0' to '9'). If it's 10 or greater, it is converted to the corresponding letter ('A' to 'F'). These hexadecimal digits are stored in an array and printed in reverse order after the conversion is complete to get the correct hexadecimal representation.

     Let's go through the example of converting the number **17** to binary, octal, and hexadecimal.

### 1. **Binary Representation of 17**:
   - Start with 17 and repeatedly divide by 2:
     - 17 ÷ 2 = 8 (remainder 1)
     - 8 ÷ 2 = 4 (remainder 0)
     - 4 ÷ 2 = 2 (remainder 0)
     - 2 ÷ 2 = 1 (remainder 0)
     - 1 ÷ 2 = 0 (remainder 1)
   - The binary representation of 17 is read from the last remainder to the first: **10001**.

### 2. **Octal Representation of 17**:
   - Start with 17 and repeatedly divide by 8:
     - 17 ÷ 8 = 2 (remainder 1)
     - 2 ÷ 8 = 0 (remainder 2)
   - The octal representation of 17 is read from the last remainder to the first: **21**.

### 3. **Hexadecimal Representation of 17**:
   - Since 17 is less than 16 but more than 9, it is represented by the digit **11** (in hexadecimal, 10 is A, 11 is B, and so on, but here it is just 17).
   - The hexadecimal representation of 17 is **11**.

So, for the number 17:
- **Binary**: `10001`
- **Octal**: `21`
- **Hexadecimal**: `11`

---

### 6. **Binary to Decimal**
   - **File**: `_20_binary_to_decimal.cpp`
   - **Description**: Convert a binary number to its decimal equivalent.
   - **Approach**:
     - Toconverts a binary number to decimal by iterating through each binary digit, multiplying it by the corresponding power of 2 (starting from 1), and adding it to the result. The binary number is reduced by dividing it by 10 in each step until all digits are processed.

---

### 7. **Sum of First N Natural Numbers**
   - **File**: `_21_sum_of_first_n_natural_numbers.cpp`
   - **Description**: Find the sum of the first `n` natural numbers.
   - **Approach**:
     - Use the formula `n * (n + 1) / 2` to calculate the sum.

---

### 8. **Sum of First N Even Natural Numbers**
   - **File**: `_22_sum_of_first_n_even_natural_numbers.cpp`
   - **Description**: Find the sum of the first `n` even natural numbers.
   - **Approach**:
     - Multiply `n` by `n + 1` (since the sum of the first `n` even numbers is `2 * (1 + 2 + 3 + ... + n)`). The naturalEvenNumsSum function calculates the sum of the first n even natural numbers by iterating from 1 to n and adding the numbers that are divisible by 2 (even numbers).

---

### 9. **Sum of First N Odd Natural Numbers**
   - **File**: `_23_sum_of_first_n_odd_natural_numbers.cpp`
   - **Description**: Find the sum of the first `n` odd natural numbers.
   - **Approach**:
     - The sum of the first `n` odd numbers is equal to `n^2`. The naturalOddNumsSum function calculates the sum of the first n odd natural numbers by iterating from 1 to n and adding the numbers that are not divisible by 2 (odd numbers).

---

### 10. **Pascal’s Triangle**
   - **File**: `_24_pascals_triangle.cpp`
   - **Description**: Generate Pascal’s Triangle up to `n` rows.
   - **Approach**:
     - The printPascalsTriangle function generates Pascal's Triangle by iterating through each row. It prints leading spaces for alignment and starts each row with the value 1. Subsequent values are calculated using the formula val = val * (i - j) / (j + 1). This process continues for each row until the entire triangle is printed.

---

### 11. **Find First N Prime Numbers**
   - **File**: `_25_first_n_prime_numbers.cpp`
   - **Description**: Find the first `n` prime numbers.
   - **Approach**:
     - Use a loop to check each number for primality, adding it to the list if it is prime.

---

### 12. **Sum of Geometric Progression Series**
   - **File**: `_26_sum_of_geometric_progression_series.cpp`
   - **Description**: Calculate the sum of the first `n` terms of a geometric progression.
   - **Approach**:
     - Use the formula for the sum of the first `n` terms of a geometric series: `S_n = a * (1 - r^n) / (1 - r)`, where `a` is the first term, `r` is the common ratio, and `n` is the number of terms.

---

### 13. **Sum of Harmonic Series**
   - **File**: `_27_sum_of_harmonic_series.cpp`
   - **Description**: Calculate the sum of the first `n` terms of a harmonic series.
   - **Approach**:
     - The harmonic series sum is calculated as `S_n = 1 + 1/2 + 1/3 + ... + 1/n`.

---

### 14. **Sum of Arithmetic Progression**
   - **File**: `_28_sum_of_arithmetic_progression.cpp`
   - **Description**: Find the sum of the first `n` terms of an arithmetic progression.
   - **Approach**:
     - Use the formula for the sum of an arithmetic progression: `S_n = n / 2 * (2a + (n - 1)d)`, where `a` is the first term, `d` is the common difference, and `n` is the number of terms.

---

### License
This repository is licensed under the MIT License.