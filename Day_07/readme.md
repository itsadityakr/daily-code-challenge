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
   - **Description**: Finds the length of the longest substring without repeating characters in a given string.
   - **Approach**: 
     1. Initialize variables:
        - `longest` to store the maximum length of the substring found so far.
        - `windowStart` to manage the starting index of the current substring.
        - A `charIndex` vector of size 256 (ASCII range) initialized to `-1` to track the most recent occurrence of each character.
     2. Iterate through the string using a `windowEnd` pointer.
     3. For each character, check if it has appeared after the current `windowStart`. If so, update `windowStart` to the index of its most recent occurrence (`charIndex` value).
     4. Update `charIndex` for the current character to its latest index.
     5. Calculate the length of the current substring (`windowEnd - windowStart`) and update `longest` if this length is greater than the previous maximum.
     6. Return the `longest` length at the end.
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the string (each character is processed once).
   - **Space Complexity**: \(O(1)\) (fixed size for 256 ASCII characters).

---

### 35. **Find All Permutations of a String**
   - **File**: `_35_find_all_permutations_of_a_string.cpp`
   - **Description**: Generates all permutations of a given string (or vector of characters) in lexicographical order.
   - **Approach**:
     1. Sort the input string or vector to start with the smallest lexicographical order.
     2. Store the first permutation in the result list.
     3. Use the **next permutation algorithm** to find subsequent permutations:
        - Find the rightmost position (`i`) where the character is smaller than the one after it.
        - If no such position exists, all permutations have been generated (terminate).
        - Find the smallest character to the right of `i` that is larger than `nums[i]` and swap them.
        - Reverse the substring to the right of position `i` to restore ascending order.
     4. Add each permutation to the result list until no more permutations are possible.
     5. Return the list of permutations.
   - **Time Complexity**: \(O(n! \times n)\), where \(n\) is the length of the input string.
   - **Space Complexity**: \(O(1)\), excluding the storage for permutations.

---

### 36. **Count Frequency of Characters in a String**
   - **File**: `_36_count_frequency_of_characters_in_string.cpp`
   - **Description**: Counts the frequency of each character in a given string and prints the result.
   - **Approach**:
     1. Initialize a frequency vector of size 26 (for each lowercase letter) with zeros.
     2. Iterate through the string character by character:
        - If the character is between 'a' and 'z', calculate its index (`c - 'a'`) and increment the corresponding frequency count.
     3. After processing the string, iterate through the frequency vector:
        - For each non-zero frequency, convert the index back to the character and print the character along with its frequency.
     4. Handle only lowercase letters; other characters are ignored.
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the string.
   - **Space Complexity**: \(O(1)\), fixed array size for 26 characters.

---

### 37. **Largest Common Prefix in an Array of Strings**
   - **File**: `_37_largest_common_prefix_in_array_of_strings.cpp`
   - **Description**: Finds the longest common prefix among an array of strings.
   - **Approach**:
     1. If the array is empty, return an empty string.
     2. Sort the array lexicographically so the smallest and largest strings will have the least overlap.
     3. Compare the first and last strings in the sorted array character by character:
        - Continue matching characters until a mismatch is found or the end of either string is reached.
     4. Extract the matching portion of the prefix (from the start to the mismatch index).
     5. Return the extracted prefix as the longest common prefix.
   - **Time Complexity**: \(O(n \times m \log n)\), where \(n\) is the number of strings, \(m\) is the average length of the strings, and sorting dominates the runtime.
   - **Space Complexity**: \(O(1)\), excluding input storage.

---

### 38. **Find ASCII Values of a String**
   - **File**: `_38_find_ascii_values_of_string.cpp`
   - **Description**: Converts each character in a string to its ASCII value and stores the values in a vector.
   - **Approach**:
     1. Initialize an empty vector to store ASCII values.
     2. Traverse the input string using a loop.
     3. For each character in the string:
        - Use the `int` conversion to find its ASCII value.
        - Store the ASCII value in the vector at the corresponding index.
     4. Return the vector containing all ASCII values of the string.
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the string.
   - **Space Complexity**: \(O(n)\), required for the vector to store ASCII values.

---
