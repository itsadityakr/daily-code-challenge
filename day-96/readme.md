
## Day 96 - Problems

---

### 342. **Find Closest Number to Zero** [Py Code](./_342_LC_2239_Find_Closest_Number_to_Zero.py)

- **File**: _342_LC_2239_Find_Closest_Number_to_Zero_  
- **Description**:  
  - Given an array of integers, find the number closest to 0.
  - If two numbers are equally close, return the **larger** one.

- **Understanding the Problem**:  
  - We are given a list like `[-4, -2, 1, 4, 8]`.
  - We check how close each number is to `0`. The closest one is the smallest in absolute value.
  - If two numbers like `-1` and `1` are both equally close, we pick the **positive one** (`1`).

- **Pesudocode**:
```
Set closest = first number in the list
For each number in the list:
    If absolute of number < absolute of closest
        Set closest = number
    If absolute values are same and number is greater than closest
        Set closest = number
Return closest
```

- **Approach**:  
  1. Start by assuming the first number is the closest.
  2. Loop through each number and check its distance to 0 using `abs()`.
  3. Update the closest if:
     - It’s nearer to 0.
     - OR it’s equally close but **larger** (to prefer positive over negative).
  4. Return the result after the loop ends.

- **Key Concepts Explained**:  
  - `abs(x)`: Returns the absolute value (i.e., distance from 0 without sign).
  - Comparison logic to handle ties when both positive and negative versions exist.

- **Time Complexity**: `O(n)` → We go through the array once.
- **Space Complexity**: `O(1)` → We only store one closest number.

**Dry Run**:
- *Input* : `[-4, -2, 1, 4, 8]`
- *Output* : `1`
- *Explanation* : 1 is closest to 0 among all.

- Steps:
  - Start with -4 → closest
  - -2 is closer → update
  - 1 is even closer → update
  - 4 and 8 are farther → no update

---

### 343. **Merge Strings Alternately** [Py Code](./_343_LC_1768_Merge_Strings_Alternately.py)

- **File**: _343_LC_1768_Merge_Strings_Alternately_  
- **Description**:  
  - Merge two strings one character at a time from each string.
  - If one string ends first, add the remaining part of the longer string.

- **Understanding the Problem**:  
  - Given `word1 = "abc"` and `word2 = "pqr"`, merge them like: `a` + `p` + `b` + `q` + `c` + `r` = `"apbqcr"`.

- **Pesudocode**:
```
Initialize empty string result
Initialize two pointers for word1 and word2
While both have characters:
    Add one from word1 and one from word2 to result
If word1 has leftover, add to result
If word2 has leftover, add to result
Return result
```

- **Approach**:  
  1. Use two pointers, one for each word.
  2. While both words have letters left, add one letter from each alternately.
  3. When one finishes, append the rest of the other string.
  4. Return the combined string.

- **Key Concepts Explained**:  
  - **String concatenation**: Joining letters one by one.
  - **Pointer logic**: Looping with two counters.

- **Time Complexity**: `O(n + m)` → n and m are lengths of the strings.
- **Space Complexity**: `O(n + m)` → Final merged string.

**Dry Run**:
- *Input* : `"ab"`, `"pqrs"`
- *Output* : `"apbqrs"`
- *Explanation* : Alternate till one ends, then add leftover `"rs"`.

- Steps:
  - a + p = ap
  - b + q = apbq
  - Add rs → apbqrs

---

### 344. **Roman to Integer** [Py Code](./_344_LC_13_Roman_to_Integer.py)

- **File**: _344_LC_13_Roman_to_Integer_  
- **Description**:  
  - Convert a Roman numeral string into its integer value.
  - Includes special rules for subtractive notation (like IV = 4).

- **Understanding the Problem**:  
  - Roman numerals map letters to numbers.
  - Normally added left to right.
  - But if a smaller value comes before a bigger one (like `I` before `V`), subtract.

- **Pesudocode**:
```
Map Roman symbols to values
Start from the right of the string
If current symbol < previous symbol, subtract
Else, add to total
Return total
```

- **Approach**:  
  1. Use a dictionary to store Roman symbol values.
  2. Traverse the string from right to left.
  3. If the current symbol is less than the last seen one, subtract its value.
  4. Otherwise, add it to the total.
  5. This handles all special subtractive cases.

- **Key Concepts Explained**:  
  - **Subtractive Notation**: Smaller numeral before bigger means subtraction.
  - **Right-to-Left Traversal**: Helps catch subtraction logic.

- **Time Complexity**: `O(n)` → n = length of Roman numeral string.
- **Space Complexity**: `O(1)` → Fixed dictionary + few variables.

**Dry Run**:
- *Input* : `"MCMXCIV"`
- *Output* : `1994`
- *Explanation* :  
  - M = 1000  
  - CM = 900 (C before M)  
  - XC = 90 (X before C)  
  - IV = 4 (I before V)  
  → 1000 + 900 + 90 + 4 = 1994

- Steps:
  - V (5) → total = 5
  - I (1) → 1 < 5 → subtract → total = 4
  - C (100) → total = 94
  - X (10) → subtract → total = 90
  - M (1000) → total = 1990
  - C (100) → subtract → total = 1900
  - M (1000) → total = 1994

---
