## Day 81 - Problems  

---

### 289. **Longest Repeating Character Replacement** [C++ Code](./_289_Longest_Repeating_Character_Replacement.cpp)  

- **File**: _289_Longest_Repeating_Character_Replacement.cpp_  
- **Description**:  
  - Given a string `s` consisting of uppercase English letters and an integer `k`, we can replace at most `k` characters in `s` to create the longest possible substring consisting of the same letter.  
  - The task is to determine the length of this longest possible substring.  
  - Constraints: `1 <= s.length <= 10^5`, `0 <= k <= s.length`, `s` consists of uppercase English letters.  

- **Understanding the Problem**:  
  - We have a string of uppercase letters and can change up to `k` characters to make the longest contiguous substring of the same letter.  
  - Example: Given `s = "AABABBA"` and `k = 1`, we can change one `B` to `A`, forming "AAABBA" which has a longest substring of length `4`.  
  
- **Pseudocode**:
```
Initialize left and right pointers to 0
Initialize maxFrequency to 0
Initialize an array count of size 26 with all zeros
Initialize result to 0

While right pointer is within bounds:
    Increment count of the character at right pointer
    Update maxFrequency with the highest occurring character in the current window
    
    If window size minus maxFrequency is greater than k:
        Reduce count of character at left pointer
        Move left pointer to the right
    
    Update result with the maximum window size
    Move right pointer to the right

Return result
```

- **Approach**:  
  1. Use a sliding window approach to expand the window with `right` and adjust `left` when needed.  
  2. Maintain a frequency array to keep track of letter counts within the window.  
  3. Keep track of the most frequent character in the window.  
  4. If the number of changes needed (`window size - maxFrequency`) exceeds `k`, shrink the window from the left.  
  5. Continue expanding and updating the result until we traverse the string.  

- **Key Concepts Explained**:  
  - **Sliding Window**: A technique that helps efficiently process a subset of elements by expanding and contracting a window instead of iterating over all possible substrings.  
  - **Frequency Array**: A simple array storing counts of characters to help determine the most frequent letter in a window efficiently.  

- **Time Complexity**: `O(n)`, since both left and right pointers traverse the string once.  
- **Space Complexity**: `O(1)`, as the frequency array is of fixed size (26 elements for English uppercase letters).  

#### **Input:**
```cpp
s = "AABABBA", k = 1
```

#### **Initialization:**
- `left = 0`, `right = 0`
- `maxFrequency = 0`
- `count` array initialized with all zeros
- `result = 0`

#### **Step-by-Step Execution:**

| Step | `right` | `s[right]` | Count Array (`A`, `B`, ...) | `maxFrequency` | Window Size | `Window Size - maxFrequency` | Adjust `left`? | `result` |
|------|--------|------------|-----------------------------|---------------|-------------|------------------------------|---------------|---------|
| 1    | 0      | A          | (1, 0, ...)                 | 1             | 1           | 0                            | No            | 1       |
| 2    | 1      | A          | (2, 0, ...)                 | 2             | 2           | 0                            | No            | 2       |
| 3    | 2      | B          | (2, 1, ...)                 | 2             | 3           | 1                            | No            | 3       |
| 4    | 3      | A          | (3, 1, ...)                 | 3             | 4           | 1                            | No            | 4       |
| 5    | 4      | B          | (3, 2, ...)                 | 3             | 5           | 2                            | Yes (`left++`)| 4       |
| 6    | 5      | B          | (2, 3, ...)                 | 3             | 4           | 1                            | No            | 4       |
| 7    | 6      | A          | (3, 3, ...)                 | 3             | 4           | 1                            | No            | 4       |

#### **Final Result:** `4`

---
### **Explanation of Adjustments**
1. The window expands by increasing `right` and adding characters to the count array.
2. `maxFrequency` tracks the highest frequency of any letter in the window.
3. The condition `(right - left + 1) - maxFrequency > k` checks if the number of replacements needed is greater than `k`. If it is, we move `left` forward.
4. The final `result` is the maximum window size where replacements fit within `k`.

---


