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

Example: `"babad"` → `"bab"` (or `"aba"`, since both are valid).

| **Iteration (i)** | **Left (l), Right (r)** | **Current Substring** | **Is Palindrome?** | **Updated Start & MaxLen?** |
|------------------|----------------------|----------------------|-------------------|-------------------------|
| 0                | (0,0)                 | "b"                  | Yes            | Start = 0, MaxLen = 1  |
| 1                | (1,1)                 | "a"                  | Yes            | No change               |
|                  | (0,2)                 | "bab"                | Yes            | Start = 0, MaxLen = 3  |
| 2                | (2,2)                 | "b"                  | Yes            | No change               |
|                  | (1,3)                 | "aba"                | Yes            | Start = 1, MaxLen = 3  |
| 3                | (3,3)                 | "a"                  | Yes            | No change               |
| 4                | (4,4)                 | "d"                  | Yes            | No change               |


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

- **Dry Run**:  

Example: `"aabcb"` → `5`.

| **i (start index)** | **j (end index)** | **Substring** | **Frequency Table (a,b,c,...)** | **Max Freq** | **Min Freq (non-zero)** | **Beauty** | **Total Sum** |
|----------------------|------------------|--------------|---------------------------------|-------------|---------------------|---------|-------------|
| 0                   | 0                | `"a"`        | (1,0,0,...)                     | 1           | 1                   | 0       | 0           |
| 0                   | 1                | `"aa"`       | (2,0,0,...)                     | 2           | 2                   | 0       | 0           |
| 0                   | 2                | `"aab"`      | (2,1,0,...)                     | 2           | 1                   | 1       | 1           |
| 0                   | 3                | `"aabc"`     | (2,1,1,...)                     | 2           | 1                   | 1       | 2           |
| 0                   | 4                | `"aabcb"`    | (2,2,1,...)                     | 2           | 1                   | 1       | 3           |
| 1                   | 1                | `"a"`        | (1,0,0,...)                     | 1           | 1                   | 0       | 3           |
| 1                   | 2                | `"ab"`       | (1,1,0,...)                     | 1           | 1                   | 0       | 3           |
| 1                   | 3                | `"abc"`      | (1,1,1,...)                     | 1           | 1                   | 0       | 3           |
| 1                   | 4                | `"abcb"`     | (1,2,1,...)                     | 2           | 1                   | 1       | 4           |
| 2                   | 2                | `"b"`        | (0,1,0,...)                     | 1           | 1                   | 0       | 4           |
| 2                   | 3                | `"bc"`       | (0,1,1,...)                     | 1           | 1                   | 0       | 4           |
| 2                   | 4                | `"bcb"`      | (0,2,1,...)                     | 2           | 1                   | 1       | 5           |
| 3                   | 3                | `"c"`        | (0,0,1,...)                     | 1           | 1                   | 0       | 5           |
| 3                   | 4                | `"cb"`       | (0,1,1,...)                     | 1           | 1                   | 0       | 5           |
| 4                   | 4                | `"b"`        | (0,1,0,...)                     | 1           | 1                   | 0       | 5           |

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

Example: `"  hello world  "` → `"world hello"`.

| **Step** | **Variable State / Action** | **Value** |
|----------|---------------------------|-----------|
| **1** | Initialize `words` (empty vector) | `[]` |
| **2** | Initialize `i = 0`, `n = 17` (length of `"  hello   world  "`) | `i = 0, n = 17` |
| **3** | Skip leading spaces (`s[i] == ' '`) | `i = 2` |
| **4** | Found start of word (`hello`), set `j = 2` | `j = 2` |
| **5** | Expand `j` until space (`j = 7`), extract `"hello"` | `words = ["hello"]` |
| **6** | Skip spaces (`s[j] == ' '`) | `i = 10` |
| **7** | Found start of word (`world`), set `j = 10` | `j = 10` |
| **8** | Expand `j` until space (`j = 15`), extract `"world"` | `words = ["hello", "world"]` |
| **9** | Skip trailing spaces (`s[j] == ' '`) | `i = 17` (loop exits) |
| **10** | Reverse `words` vector | `["world", "hello"]` |
| **11** | Construct output string `"world hello"` | `"world hello"` |
| **12** | **Return output** | `"world hello"` |

---