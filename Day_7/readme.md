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

### 34. **Longest Substring Without Repeating Characters**
   - **File**: `_34_longest_substring_without_repeating_characters.cpp`
   - **Description**: Given a string, find the length of the longest substring without repeating characters. The solution uses the sliding window technique to dynamically adjust the window's start and end to ensure no repeating characters.
   - **Approach**: 
     - Use a sliding window with two pointers (`windowStart` and `windowEnd`) to track the current window of non-repeating characters.
     - Maintain an array `charIndex` of size 256 to store the most recent index of each character in the string.
     - When encountering a repeating character, adjust `windowStart` to ensure the window contains only unique characters.
     - Track the maximum length of the window without repeating characters.
   - **Time Complexity**: O(n), where n is the length of the input string. We traverse the string once, and each character is processed in constant time.
   - **Space Complexity**: O(1) because the space used by the `charIndex` array is constant (256 for all possible ASCII characters).

---

### 35. **Find All Permutations of a String**
   - **File**: `_35_find_all_permutations_of_a_string.cpp`
   - **Description**: Given a list of numbers, find all permutations of the given list. This problem involves generating all possible permutations and returning them in lexicographical order.
   - **Approach**: 
     - First, sort the input array to ensure permutations are generated in lexicographical order.
     - Use the `next_permutation` function to generate each subsequent permutation of the input array.
     - Push each permutation into a result vector.
   - **Time Complexity**: O(n * n!), where n is the length of the input array. This comes from generating all n! permutations, and for each permutation, the next_permutation function takes O(n) time.
   - **Space Complexity**: O(n!), due to the space needed to store all permutations.

---

### 36. **Count Frequency of Characters in a String**
   - **File**: `_36_count_frequency_of_characters_in_string.cpp`
   - **Description**: Given a string, count the frequency of each character in it. Only lowercase English letters are considered.
   - **Approach**: 
     - Create an array `freq` of size 26 to count occurrences of each character.
     - Traverse the string and update the frequency count for each character.
     - After processing the string, print the frequency of each character that occurs at least once.
   - **Time Complexity**: O(n), where n is the length of the string, as we need to process each character exactly once.
   - **Space Complexity**: O(1), since the frequency array size is fixed (26 letters).

---

### 37. **Largest Common Prefix in Array of Strings**
   - **File**: `_37_largest_common_prefix_in_array_of_strings.cpp`
   - **Description**: Given an array of strings, find the longest common prefix (LCP) shared by all the strings.
   - **Approach**: 
     - First, sort the array to bring similar prefixes together.
     - Compare the first and last strings in the sorted array, as they will have the smallest common prefix.
     - Iterate through both strings and find the longest common prefix.
   - **Time Complexity**: O(n * m), where n is the number of strings and m is the length of the longest string. Sorting the strings takes O(n log n), and comparing the first and last strings takes O(m).
   - **Space Complexity**: O(1), as we only need space for a few auxiliary variables.

---

### 38. **Find ASCII Values of String**
   - **File**: `_38_find_ascii_values_of_string.cpp`
   - **Description**: Given a string, return the ASCII values of its characters.
   - **Approach**: 
     - Iterate over the string and convert each character to its ASCII value using type casting.
     - Store the ASCII values in a vector and return it.
   - **Time Complexity**: O(n), where n is the length of the string, as we process each character once.
   - **Space Complexity**: O(n), as we store the ASCII values of all characters in a vector.

---
