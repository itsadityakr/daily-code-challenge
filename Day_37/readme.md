### Day 37  - Problems  

---

### 1. **Palindrome Number** [CPP Code](./_124_palindrome_number.cpp)  
   - **File**: _124_palindrome_number.cpp  
   - **Description**: Check whether an integer is a palindrome (reads the same backward as forward).  
   - **Approach**:  
     To check if a number is a palindrome:
     1. If the number is negative, return false since negative numbers cannot be palindromes (e.g., `-121`).
     2. Store the original number in a variable (`originalNumber`) to compare later.  
     3. Reverse the digits of the number:
        - Extract the last digit using `% 10`.
        - Append it to `reversedNumber` after multiplying `reversedNumber` by 10.
        - Divide the number by 10 to remove the last digit.  
     4. If the reversed number equals the original, it is a palindrome.  
     - **Terms to Know**:  
       - **INT_MAX**: The maximum value an integer can hold. Used to avoid overflow during multiplication.  
       - **Overflow Check**: Ensure the reversed number doesn't exceed limits during calculation.  
   - **Time Complexity**: \(O(\log_{10}(n))\), where \(n\) is the number of digits in the integer.  
   - **Space Complexity**: \(O(1)\).  

---

### 2. **Valid Palindrome** [CPP Code](./_125_valid_palindrome.cpp)  
   - **File**: _125_valid_palindrome.cpp  
   - **Description**: Check if a string is a palindrome, ignoring case and non-alphanumeric characters.  
   - **Approach**:  
     1. Filter the input string by keeping only alphanumeric characters and converting them to lowercase.  
     2. Use two pointers (`left` and `right`) to compare characters from both ends of the filtered string.  
     3. Move the pointers inward while comparing:
        - If any mismatch is found, return false.  
     4. If all characters match, return true.  
     - **Terms to Know**:  
       - **isalnum()**: Checks if a character is alphanumeric (letters or numbers).  
       - **tolower()**: Converts uppercase letters to lowercase.  
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the input string.  
   - **Space Complexity**: \(O(n)\) for the filtered string.  

---

### 3. **Prime Number** [CPP Code](./_126_prime_number.cpp)  
   - **File**: _126_prime_number.cpp  
   - **Description**: Check if a number is a prime number (greater than 1 and divisible only by 1 and itself).  
   - **Approach**:  
     1. Handle small cases:
        - Numbers less than or equal to 1 are not prime.
        - 2 and 3 are prime.  
     2. Check divisibility by 2 or 3:
        - If divisible, return false.  
     3. Use a loop to check divisibility from 5 to \(\sqrt{n}\), incrementing by 6:
        - Check divisibility by `i` and `i+2` for efficiency.  
     - **Terms to Know**:  
       - **Prime Number**: A number greater than 1 with no divisors other than 1 and itself.  
   - **Time Complexity**: \(O(sqrt[N]\).  
   - **Space Complexity**: \(O(1)\).  

---

### 4. **Count Primes** [CPP Code](./_127_count_primes.cpp)  
   - **File**: _127_count_primes.cpp  
   - **Description**: Count the number of prime numbers less than a given number \(n\).  
   - **Approach**:  
     1. Use the **Sieve of Eratosthenes**:
        - Create a boolean array to mark numbers as prime or not.
        - Start marking multiples of each prime number from \(2\) as non-prime.  
     2. Iterate from 2 to \(\sqrt{n}\):
        - For a number marked as prime, mark all its multiples as non-prime.  
     3. Count all numbers marked as prime in the array.  
     - **Terms to Know**:  
       - **Sieve of Eratosthenes**: An efficient algorithm to find all primes less than \(n\).  
   - **Time Complexity**: \(O(n log log n)\).  
   - **Space Complexity**: \(O(n)\).  

---

### 5. **Evenly Divides** [CPP Code](./_128_count_digits.cpp)  
   - **File**: _128_count_digits.cpp  
   - **Description**: Count digits in a number \(n\) that divide \(n\) evenly (remainder is 0).  
   - **Approach**:  
     1. Extract digits of the number using `% 10` in a loop.  
     2. For each digit:
        - Skip if the digit is 0 (to avoid division by 0).  
        - Check if \(n\) is divisible by the digit. If yes, increment the count.  
     3. Return the final count.  
     - **Terms to Know**:  
       - **Digit Extraction**: Use `% 10` to get the last digit and `/ 10` to remove it.  
   - **Time Complexity**: \(O(d)\), where \(d\) is the number of digits in \(n\).  
   - **Space Complexity**: \(O(1)\).  

---

### 6. **Count the Digits That Divide a Number** [CPP Code](./_129_count_the_digits_that_divide_a_number.cpp)  
   - **File**: _129_count_the_digits_that_divide_a_number.cpp  
   - **Description**: Count digits in a number that divide the number evenly (similar to Problem 5).  
   - **Approach**:  
     1. Extract digits from the number as described in Problem 5.  
     2. For each digit:
        - Check if it divides the number without a remainder.  
        - Increment the count if true.  
     3. Return the count.  
     - **Terms to Know**: Same as **Evenly Divides**.  
   - **Time Complexity**: \(O(d)\), where \(d\) is the number of digits in \(n\).  
   - **Space Complexity**: \(O(1)\).  

--- 
