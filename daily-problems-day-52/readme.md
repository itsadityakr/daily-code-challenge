## Day 52 - Problems  

---

### 200. **Rotate String** [C++ Code](./_200_Rotate_String.cpp)  

- **File**: _200_Rotate_String.cpp_  
- **Description**:  
  - The problem requires checking if one string is a rotation of another. You are given two strings `s` and `goal`, and you need to determine if `goal` can be obtained by rotating `s` any number of times. A string `s` is considered a rotation of `goal` if you can rotate `s` and match `goal` after some rotations.  
  - Constraints:  
    - Both strings `s` and `goal` have the same length.

- **Understanding the Problem**:  
  - Imagine rotating a string, where you shift the first character to the end of the string, and repeat this operation several times. For example:
    - `s = "abcde"`
    - First rotation: `"bcdea"`
    - Second rotation: `"cdeab"`
    - Third rotation: `"deabc"`
    - Fourth rotation: `"eabcd"`
    - If any of these rotations match `goal`, then it is a valid rotation.
  - Example:  
    - `s = "abcde"`  
    - `goal = "cdeab"`  
    - After 3 rotations, `s` becomes `goal`. Hence, return `true`.

- **How to Approach the Problem**:  
  - The problem is a check if any rotation of string `s` matches `goal`.  
  - Start by checking if the strings have the same length; if they don't, return `false` immediately.
  - For every rotation of `s`, check if it matches `goal`. If it does, return `true`.
  - If no match is found after all rotations, return `false`.

- **Approach**:  
  1. Check if the lengths of both strings are the same. If not, return `false`.
  2. Create a function to rotate `s` by moving the first character to the end.
  3. Rotate `s` up to `n` times and check if any rotated string matches `goal`. If it matches, return `true`.
  4. If no match is found, return `false`.

- **Key Concepts Explained**:  
  - **Rotation**: This refers to the process of shifting characters in a string. For instance, rotating `"abc"` by one position gives `"bca"`, and rotating it by two gives `"cab"`.
  - **String Comparison**: Comparing two strings means checking if their characters are identical at each position.

- **Time Complexity**:  
  - The time complexity is O(n^2), where `n` is the length of the string. Each rotation takes O(n) time, and we perform up to `n` rotations.
  
- **Space Complexity**:  
  - The space complexity is O(1), since no extra space is used except for a few temporary variables.

- **Dry Run**:

| **Function**         | **Operation**             | **String**   | **Result** |  
|----------------------|---------------------------|--------------|------------|  
| **leftRotate**        | Initialize: `firstChar = s[0]` | `"abcde"`   |            |  
|                      | Rotate string: Shift all characters one position left | `"bcdea"`   |            |  
|                      | Update the last character | `"bcdea"`   |            |  
| **rotateString**      | Compare rotated string with `goal` | `"bcdea"`   |            |  
|                      | Rotate again and check | `"cdeab"`   | True       |  

---

### 201. **Valid Anagram** [C++ Code](./_201_Valid_Anagram.cpp)  

- **File**: _201_Valid_Anagram.cpp_  
- **Description**:  
  - The problem is to check if two given strings `s` and `t` are anagrams. Two strings are anagrams if they contain the same characters with the same frequency, but possibly in a different order.  
  - Constraints:  
    - Both strings `s` and `t` have the same length.

- **Understanding the Problem**:  
  - An anagram is a rearrangement of the characters in another string. For example:
    - `"listen"` and `"silent"` are anagrams because they both contain the same characters with the same frequency.
    - `"hello"` and `"bye"` are not anagrams because they contain different characters.
  
- **How to Approach the Problem**:  
  - First, check if the lengths of the two strings are the same. If not, they cannot be anagrams.
  - Count the frequency of each character in both strings. If the frequencies match, then the strings are anagrams.
  
- **Approach**:  
  1. If the lengths of `s` and `t` are different, return `false`.
  2. Create a frequency map for the characters in `s` and `t`.
  3. Compare the frequency maps; if they are identical, return `true`, otherwise return `false`.

- **Key Concepts Explained**:  
  - **Frequency Map**: This is a dictionary or hash map where each character is mapped to its occurrence count in the string.
  - **Anagram**: Two strings are anagrams if they have the same characters, each with the same frequency.

- **Time Complexity**:  
  - The time complexity is O(n), where `n` is the length of the string. We only traverse the string once to build the frequency map and check if the frequencies match.

- **Space Complexity**:  
  - The space complexity is O(n), where `n` is the length of the string, as we need extra space to store the frequency map.

- **Dry Run**:

| **Function**          | **Operation**                             | **String s** | **String t** | **Frequency Map (s)** | **Frequency Map (t)** | **Result** |
|-----------------------|-------------------------------------------|--------------|--------------|-----------------------|-----------------------|------------|
| **isAnagram**          | Check length of `s` and `t`               | `"listen"`    | `"silent"`    | l:1, i:1, s:1, t:1, e:1, n:1 | l:1, i:1, s:1, t:1, e:1, n:1 | True       |

---

### 202. **Sort Characters By Frequency** [C++ Code](./_202_Sort_Characters_By_Frequency.cpp)  

- **File**: _202_Sort_Characters_By_Frequency.cpp_  
- **Description**:  
  - Given a string `s`, the task is to return a new string where the characters are sorted by their frequency in descending order.  
  - Constraints:  
    - The string consists of lowercase English letters.

- **Understanding the Problem**:  
  - You need to sort the characters of a string in such a way that the characters with higher frequency come first.
  - Example:  
    - `s = "tree"`  
    - Frequency of characters: t:1, r:1, e:2  
    - Sorted result: `"eetr"`

- **How to Approach the Problem**:  
  - Count the frequency of each character.
  - Sort the characters by their frequency in descending order.
  - Rebuild the string using the sorted characters.

- **Approach**:  
  1. Count the frequency of each character in the string.
  2. Sort the characters based on their frequency.
  3. Rebuild the string by appending each character multiplied by its frequency.

- **Key Concepts Explained**:  
  - **Frequency Count**: The number of times a character appears in the string.
  - **Sorting**: Sorting the characters based on their frequency, not alphabetically.

- **Time Complexity**:  
  - The time complexity is O(n log n), where `n` is the length of the string. Sorting takes O(n log n) time, and counting frequencies takes O(n).

- **Space Complexity**:  
  - The space complexity is O(n), where `n` is the length of the string, due to the frequency map and the sorted list.

- **Dry Run**:

| **Function**          | **Operation**                             | **String s** | **Frequency Map**    | **Sorted Characters** | **Result** |
|-----------------------|-------------------------------------------|--------------|----------------------|-----------------------|------------|
| **frequencySort**      | Count frequencies                         | `"tree"`      | t:1, r:1, e:2         | e:2, t:1, r:1         | "eetr"     |

---

### 203. **Maximum Nesting Depth of the Parentheses** [C++ Code](./_203_Maximum_Nesting_Depth_of_the_Parentheses.cpp)  

- **File**: _203_Maximum_Nesting_Depth_of_the_Parentheses.cpp_  
- **Description**:  
  - The problem requires determining the maximum depth of nested parentheses in a given string `s`.  
  - Constraints:  
    - The string consists only of parentheses `()` characters.

- **Understanding the Problem**:  
  - The depth refers to how many parentheses are "nested" inside each other. For example:
    - In the string `"(1+(2*3)+((8)/4))+1"`, the maximum depth of parentheses is 3.
    - For each `(`, the depth increases by one, and for each `)`, the depth decreases by one.

- **How to Approach the Problem**:  
  - Traverse the string and keep a counter for the current depth.
  - Every time you encounter `(`, increase the depth.
  - Every time you encounter `)`, check if the current depth is the maximum so far and then decrease the depth.
  
- **Approach**:  
  1. Initialize two variables: one to track the current depth and another to track the maximum depth.
  2. Traverse the string and adjust the depth when encountering `(` or `)`.
  3. After updating the depth, check if it's the maximum so far and update the maximum depth accordingly.

- **Key Concepts Explained**:  
  - **Nesting Depth**: The level of "nesting" refers to how deep a set of parentheses is within others.
  - **Parentheses Matching**: Matching every `(` with a corresponding `)`.

- **Time Complexity**:  
  - The time complexity is O(n), where `n` is the length of the string, since we only need to traverse the string once.

- **Space Complexity**:  
  - The space complexity is O(1), since we only need a few variables to track the depth.

- **Dry Run**:  

  | Step | Input String | Current Depth | Max Depth |  
  |------|--------------|---------------|-----------|  
  | 1    | "(1+(2*3)+((8)/4))+1" | 0             | 0         |  
  | 2    | "("          | 1             | 1         |  
  | 3    | "("          | 2             | 2         |  
  | 4    | "("          | 3             | 3         |  
  | 5    | ")"          | 2             | 3         |  
  | 6    | ")"          | 1             | 3         |  
  | 7    | ")"          | 0             | 3         |  

---

