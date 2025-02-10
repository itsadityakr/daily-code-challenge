Here’s a structured breakdown for the given problems using the provided template:

---

## Day X - Problems  

---

### 204. **Roman to Integer** [C++ Code](./_204_Roman_to_Integer.cpp)  

- **File**: _204_Roman_to_Integer.cpp_  
- **Description**:  
  - Convert a Roman numeral string into an integer.  
  - Roman numerals follow a set of rules:  
    - `I` = 1, `V` = 5, `X` = 10, `L` = 50, `C` = 100, `D` = 500, `M` = 1000  
    - If a smaller numeral precedes a larger numeral, it is subtracted (e.g., `IV` = 4).  

- **Understanding the Problem**:  
  - Read the string from left to right, adding values.  
  - If a numeral is smaller than the next, subtract its value instead of adding it.  
  - Example:  
    - `"XIV"` → `10 - 1 + 5 = 14`  

- **How to Approach the Problem**:  
  - Use a map to store numeral values.  
  - Loop through the string, adding values normally.  
  - If a numeral is smaller than the next one, adjust by subtracting twice.  

- **Approach**:  
  1. Create a dictionary for numeral values.  
  2. Initialize `result = 0` and `prevValue = 0`.  
  3. Loop through the string, update `result`, and handle subtraction when needed.  

- **Key Concepts Explained**:  
  - Hash Maps for quick lookups.  
  - Iterating through a string efficiently.  

- **Time Complexity**: **O(n)** (one pass through string).  
- **Space Complexity**: **O(1)** (constant extra space).  


- **Dry Run Table for `"MCMXCIV"`**
| Index | Char | Value | PrevValue | Result | Action |
|-------|------|-------|----------|--------|--------|
| 0     | 'M'  | 1000  | 0        | 1000   | Add 1000 |
| 1     | 'C'  | 100   | 1000     | 1100   | Add 100  |
| 2     | 'M'  | 1000  | 100      | 1900   | Add 1000, Subtract 2×100 |
| 3     | 'X'  | 10    | 1000     | 1910   | Add 10   |
| 4     | 'C'  | 100   | 10       | 1990   | Add 100, Subtract 2×10 |
| 5     | 'I'  | 1     | 100      | 1991   | Add 1    |
| 6     | 'V'  | 5     | 1        | 1994   | Add 5, Subtract 2×1 |

---

### 205. **String to Integer (atoi)** [C++ Code](./_205_String_to_Integer_a_to_i.cpp)  

- **File**: _205_String_to_Integer_a_to_i.cpp_  
- **Description**:  
  - Convert a string representation of an integer into an actual integer.  
  - Handle spaces, optional signs (`+/-`), and overflow cases.  

- **Understanding the Problem**:  
  - Ignore leading spaces.  
  - Check for a sign (`+/-`).  
  - Read digits until a non-digit is found.  
  - Handle integer overflow cases properly.  

- **How to Approach the Problem**:  
  - Use a loop to scan characters.  
  - Track sign and overflow conditions.  

- **Approach**:  
  1. Skip leading spaces.  
  2. Detect and store sign (`+/-`).  
  3. Convert digits into an integer while checking for overflow.  
  4. Stop at the first non-digit character.  

- **Key Concepts Explained**:  
  - ASCII-based digit conversion.  
  - Integer overflow detection.  

- **Time Complexity**: **O(n)** (one pass through string).  
- **Space Complexity**: **O(1)** (constant extra space).  

- **Dry Run Table for `"  -42abc"`**

| Index | Char  | Sign | Num  | Action                      |
|-------|------|------|------|-----------------------------|
| 0     | ' '  | +    | 0    | Skip leading space          |
| 1     | ' '  | +    | 0    | Skip leading space          |
| 2     | '-'  | -    | 0    | Set sign to negative        |
| 3     | '4'  | -    | 4    | Convert to number (4)       |
| 4     | '2'  | -    | 42   | Convert to number (42)      |
| 5     | 'a'  | -    | 42   | Stop parsing (non-digit)    |

---

### 206. **Substrings with K Distinct Characters** [C++ Code](./_206_Substrings_with_K_Distinct.cpp)  

- **File**: _206_Substrings_with_K_Distinct.cpp_  
- **Description**:  
  - Count the number of substrings containing exactly `K` distinct characters.  
  - Uses the sliding window technique for efficiency.  

- **Understanding the Problem**:  
  - Given a string `s`, find substrings with `K` distinct characters.  
  - Example: `"abcba", K = 2` → `{"ab", "abc", "b", "bc", "ba", "cb", "cba"}`.  

- **How to Approach the Problem**:  
  - Use the **sliding window** technique to efficiently count substrings.  
  - Maintain a frequency map to track distinct characters.  
  - Compute `countAtMostKDistinct(s, K) - countAtMostKDistinct(s, K-1)`.  

- **Approach**:  
  1. Use a frequency map and two pointers (`left` and `right`).  
  2. Expand `right` while maintaining at most `K` distinct characters.  
  3. If `distinctCount > K`, move `left` to reduce count.  
  4. Use the difference of counts for `K` and `K-1` substrings.  

- **Key Concepts Explained**:  
  - Sliding Window technique.  
  - Using frequency maps for character tracking.  

- **Time Complexity**: **O(n)** (linear scan with two pointers).  
- **Space Complexity**: **O(K)** (hash map storing at most `K` entries).  

- **Dry Run Table for `countAtMostKDistinct(s, K)`**

| Right | Char | Freq Map            | Distinct Count | Left | Count (Valid Substrings) |
|-------|------|---------------------|---------------|------|-------------------------|
| 0     | 'a'  | {a:1}               | 1             | 0    | 1                       |
| 1     | 'b'  | {a:1, b:1}          | 2             | 0    | 3  (`"a", "ab", "b"`)  |
| 2     | 'c'  | {a:1, b:1, c:1}     | 3 (exceeds K) | 1    | 5  (`"b", "bc", "c"`)  |
| 3     | 'b'  | {b:2, c:1}          | 2             | 1    | 8  (`"b", "bc", "c", "b"`) |
| 4     | 'a'  | {b:2, c:1, a:1}     | 3 (exceeds K) | 2    | 10 (`"c", "b", "ba"`) |

---
- **Dry Run Table for `countAtMostKDistinct(s, K-1)` (K = 1)**

| Right | Char | Freq Map   | Distinct Count | Left | Count |
|-------|------|-----------|---------------|------|-------|
| 0     | 'a'  | {a:1}     | 1             | 0    | 1     |
| 1     | 'b'  | {a:1, b:1}| 2 (exceeds)   | 1    | 2     |
| 2     | 'c'  | {b:1, c:1}| 2 (exceeds)   | 2    | 3     |
| 3     | 'b'  | {b:1}     | 1             | 3    | 4     |
| 4     | 'a'  | {b:1, a:1}| 2 (exceeds)   | 4    | 5     |

countSubstr(s,K)=countAtMostKDistinct(s,K)−countAtMostKDistinct(s,K−1)

10−5=5
---

