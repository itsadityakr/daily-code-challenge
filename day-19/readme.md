## Day 19 - Problems

---
## 71. **Longest Palindromic Substring** [🧲](./_71_longest_palindromic_substring.cpp)
   - **File**: _71_longest_palindromic_substring.cpp
   - **Description**: The problem is to find the longest substring in a given string that is a palindrome. A palindrome is a string that reads the same forward and backward, such as "aba" or "racecar". The task requires efficient computation to handle even large strings.

   - **Approach**: 
     - **Key Idea**: A palindrome expands symmetrically around its center. We can identify potential centers and expand outward to check for the longest palindrome.
     - **Algorithm**:
       1. **Edge Case**: If the input string is empty, return an empty string immediately.
       2. **Initialization**: Variables `start` and `maxLength` are initialized to track the starting index and length of the longest palindrome found so far.
       3. **Iterate Over the String**: For every character in the string, consider two cases:
          - **Odd-Length Palindromes**: Treat the current character as the center and expand outward symmetrically.
          - **Even-Length Palindromes**: Treat the current and next character as the center and expand outward symmetrically.
       4. **Expansion Logic**:
          - Start with pointers `l` and `r` initialized at the center(s).
          - While the characters at `l` and `r` are equal and within bounds, calculate the length of the palindrome.
          - Update `start` and `maxLength` if the current palindrome is longer than the previously recorded one.
       5. **Result**: After processing all potential centers, return the substring starting at `start` with a length of `maxLength`.
     - **Code Walkthrough**: 
       - Two nested while loops handle odd and even-length palindromes. 
       - The first loop checks for palindromes with a single character center.
       - The second loop checks for two-character centers.
       - The substring extraction `s.substr(start, maxLength)` efficiently retrieves the result.

   - **Time Complexity**: \(O(n^2)\)
     - For each character (n iterations), we may expand outward in both directions, which can take up to \(O(n)\) in the worst case. Therefore, the complexity is quadratic.
   - **Space Complexity**: \(O(1)\)
     - The algorithm uses only a few variables for calculations and does not require additional space for auxiliary data structures.

---