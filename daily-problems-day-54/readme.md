## Day 54 - Problems  

---

### 207. **Longest Palindromic Substring** [C++ Code](./_207_Longest_Palindromic_Substring.cpp)  

- **File**: _207_Longest_Palindromic_Substring.cpp_  
- **Description**:  
  - Given a string, find the longest substring that is a palindrome.  
  - Example: `"babad"` → `"bab"` (or `"aba"`, since both are valid).  

- **Understanding the Problem**:  
  - A palindrome is a sequence that reads the same forward and backward.  
  - We need to expand around each character (odd-length) and each pair (even-length).  

- **How to Solve the Problem**:  
  - Iterate over each character and expand outward to check for palindromes.  
  - Keep track of the longest palindrome found.  

- **Approach**:  
  1. Use two pointers expanding around each center.  
  2. Consider both single-character centers (odd) and two-character centers (even).  
  3. Update the maximum length and starting index accordingly.  

- **Key Concepts Explained**:  
  - **Two-pointer expansion**: Expanding outward to check for palindrome validity.  

- **Time Complexity**: **O(n²)** (expanding from each character).  
- **Space Complexity**: **O(1)** (only a few integer variables are used).  

- **Dry Run**:  

| Step | Center | Left | Right | Substring | Max Length |
|------|--------|------|-------|-----------|------------|
| 1    | `b`    | 0    | 0     | `"b"`     | 1          |
| 2    | `a`    | 1    | 1     | `"a"`     | 1          |
| 3    | `b`    | 0    | 2     | `"bab"`   | 3          |
| 4    | `a`    | 2    | 2     | `"a"`     | 3          |
| 5    | `d`    | 4    | 4     | `"d"`     | 3          |

---

### 208. **Sum of Beauty of All Substrings** [C++ Code](./_208_Sum_of_Beauty_of_All_Substrings.cpp)  

- **File**: _208_Sum_of_Beauty_of_All_Substrings.cpp_  
- **Description**:  
  - The beauty of a substring is defined as the difference between the most and least frequent characters.  
  - We need to sum up the beauty of all substrings.  

- **Understanding the Problem**:  
  - Iterate over all substrings and calculate the frequency difference.  

- **How to Solve the Problem**:  
  - Use a frequency array to count occurrences in substrings.  
  - Track max and min frequencies for each substring.  

- **Approach**:  
  1. Iterate over all start indices.  
  2. Maintain a frequency array for characters.  
  3. Find the max and min frequency for each substring and sum up the beauty.  

- **Key Concepts Explained**:  
  - **Sliding window** (though brute force is used).  
  - **Frequency counting** with an array.  

- **Time Complexity**: **O(n²)** (checking all substrings).  
- **Space Complexity**: **O(1)** (fixed-size array).  

---

### 209. **Reverse Words in a String** [C++ Code](./_209_Reverse_Words_in_a_String.cpp)  

- **File**: _209_Reverse_Words_in_a_String.cpp_  
- **Description**:  
  - Reverse the order of words in a string while removing extra spaces.  
  - Example: `"  hello world  "` → `"world hello"`.  

- **Understanding the Problem**:  
  - Split the string into words, reverse their order, and join them back.  

- **How to Solve the Problem**:  
  - Use a list to store words and reverse them before joining.  

- **Approach**:  
  1. Extract words while skipping extra spaces.  
  2. Store words in a list and reverse the order.  
  3. Join them back with single spaces.  

- **Key Concepts Explained**:  
  - **String parsing** to extract words.  
  - **List reversal** for ordering.  

- **Time Complexity**: **O(n)** (traversing and reversing).  
- **Space Complexity**: **O(n)** (storing words).  

- **Dry Run**:  

| Step | Operation | Words List | Reversed Words | Result String |
|------|----------|------------|----------------|--------------|
| 1    | Extract `hello` | `[hello]` | - | - |
| 2    | Extract `world` | `[hello, world]` | - | - |
| 3    | Reverse | `[world, hello]` | `[world, hello]` | `"world hello"` |

---