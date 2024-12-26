### Day 7 - Problems

---

### 29. **Valid Anagrams**
   - **File**: `_29_valid_anagrams.cpp`
   - **Description**: This problem asks to determine if two strings are anagrams of each other. Two strings are considered anagrams if they contain the same characters with the same frequencies, but possibly in a different order. The function `isAnagram` takes two strings as input and returns `true` if the strings are anagrams, otherwise `false`.
   - **Approach**: 
     - First, we check if the lengths of both strings are the same. If not, we can immediately return `false`.
     - We use an unordered map to count the frequency of characters in the first string.
     - Then, we check the second string. For each character, we decrement its count in the map. If at any point the count becomes zero or negative, we return `false`.
     - Finally, if we successfully process both strings, we return `true`.
   - **Time Complexity**: O(n), where n is the length of the strings, as we are iterating over both strings only once.
   - **Space Complexity**: O(n), due to the unordered map used to store character counts.

---

### 30. **Check Palindrome**
   - **File**: `_30_check_palindrome.cpp`
   - **Description**: The task is to check if a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and case). The function `isPalindrome` checks if the string is a palindrome by comparing its formatted version with its reversed formatted version.
   - **Approach**:
     - The helper function `formatString` removes all non-alphanumeric characters and converts the string to lowercase.
     - The helper function `reverseString` reverses the formatted string.
     - Finally, `isPalindrome` compares the formatted string with its reversed version and returns `true` if they are the same, otherwise `false`.
   - **Time Complexity**: O(n), where n is the length of the input string, because we are iterating over the string a few times for formatting and reversing.
   - **Space Complexity**: O(n), due to the space used for storing the formatted string and the reversed string.

---

### 31. **Reverse String**
   - **File**: `_31_reverse_string.cpp`
   - **Description**: This problem involves reversing a given string. The function `reverseString` swaps characters from the start and end of the string until the string is reversed.
   - **Approach**:
     - Two pointers, `i` and `j`, are used to represent the start and end of the string.
     - The function swaps characters at positions `i` and `j` until `i` is no longer less than `j`.
   - **Time Complexity**: O(n), where n is the length of the string, as we need to iterate through the string once.
   - **Space Complexity**: O(1), since the reversal is done in-place without using additional space.

---

### 32. **Check if String Contains Only Digits**
   - **File**: `_32_check_if_string_contains_only_digits.cpp`
   - **Description**: This problem checks if a string contains only digit characters (0-9). The function `containsOnlyDigits` returns `true` if all characters in the string are digits, and `false` otherwise.
   - **Approach**:
     - The function iterates over each character in the string and checks if it falls between '0' and '9'. If any character is found outside this range, the function returns `false`.
   - **Time Complexity**: O(n), where n is the length of the string, as we need to check each character.
   - **Space Complexity**: O(1), since the function uses a constant amount of space.

---

### 33. **Convert String to Integer (Implementing `atoi`)**
   - **File**: `_33_convert_string_to_integer_implementing_a_to_i.cpp`
   - **Description**: This problem implements a function similar to the C `atoi` function, which converts a string to an integer. The function `myAtoi` processes the string, handles optional leading whitespaces, optional signs, and converts the numeric part of the string into an integer, considering overflow conditions.
   - **Approach**:
     - The function first skips leading spaces.
     - It handles an optional '+' or '-' sign.
     - Then, it processes each digit of the string, multiplying the current number by 10 and adding the digit. If at any point the result exceeds the maximum or minimum allowed integer values, the function returns `INT_MAX` or `INT_MIN`, respectively.
   - **Time Complexity**: O(n), where n is the length of the string, as the function iterates through the string only once.
   - **Space Complexity**: O(1), since no additional space is used except for a few integer variables.

---