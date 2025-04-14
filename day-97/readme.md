## Day 97 - Problems  

---

### 345. **Is Subsequence**  [Py Code](./_345_LC_392_Is_Subsequence.py)  

- **File**: _345_LC_392_Is_Subsequence_  
- **Description**:  
  - Given two strings `s` and `t`, check if `s` is a subsequence of `t`.  
  - A subsequence means characters of `s` appear in `t` in the same order but not necessarily contiguously.  
  - Constraints:  
    - `0 <= s.length <= 100`  
    - `0 <= t.length <= 10^4`  
    - Strings consist only of lowercase English letters.

- **Understanding the Problem**:  
  - You’re given two strings. You need to check if the characters of the first string (`s`) appear in the second string (`t`) in the correct order (but not necessarily next to each other).  
  - Example:  
    - `s = "abc"`, `t = "ahbgdc"` → True (`a`, then `b`, then `c` appears in order)  
    - `s = "axc"`, `t = "ahbgdc"` → False (`x` is not in correct place)

- **Pseudocode**:
```
Set two pointers, one for s and one for t.
While both pointers are in range:
    If characters match, move s pointer.
    Always move t pointer.
If s pointer reaches end of s, return True.
Otherwise, return False.
```

- **Approach**:  
  1. Use two pointers to track positions in `s` and `t`.  
  2. Start from the beginning of both strings.  
  3. If the current characters match, move the pointer for `s`.  
  4. Always move the pointer for `t`.  
  5. If you finish scanning `s` (i.e., matched all characters), return `True`. Otherwise, return `False`.

- **Key Concepts Explained**:  
  - **Two Pointers**: A simple way to scan two things at once while maintaining order.  
  - **Subsequence vs Substring**: Subsequence allows skipping characters, but order must be preserved.

- **Time Complexity**: O(n) where n = length of `t`  
- **Space Complexity**: O(1), no extra space needed.

**Dry Run**:  
- *Input* : `s = "abc"`, `t = "ahbgdc"`  
- *Output* : `True`  
- *Explanation* :  
  - `a` → match  
  - `h` → skip  
  - `b` → match  
  - `g` → skip  
  - `d` → skip  
  - `c` → match  
  - All characters of `s` matched in order.

---

### 346. **Best Time to Buy and Sell Stock**  [Py Code](./_346_LC_121_Best_Time_to_Buy_and_Sell_Stock.py)

- **File**: _346_LC_121_Best_Time_to_Buy_and_Sell_Stock_  
- **Description**:  
  - Given an array of stock prices, find the max profit by buying on one day and selling on another future day.  
  - You cannot sell before you buy.  
  - Return 0 if no profit can be made.  
  - Constraints:  
    - `1 <= prices.length <= 10^5`  
    - `0 <= prices[i] <= 10^4`

- **Understanding the Problem**:  
  - You're looking for the biggest difference between two prices where the smaller price comes before the larger one.  
  - Example:  
    - `prices = [7,1,5,3,6,4]` → Buy at 1, Sell at 6 → Profit = 5  
    - `prices = [7,6,4,3,1]` → No profit possible → Return 0

- **Pseudocode**:
```
Set min_price as first element.
Set max_profit as 0.
Loop through all prices:
    If current price < min_price:
        Update min_price
    Calculate profit = current - min_price
    Update max_profit if profit is more
Return max_profit
```

- **Approach**:  
  1. Track the minimum price seen so far (buying point).  
  2. At each step, calculate what profit you'd get if you sell at current price.  
  3. Keep updating the maximum profit if the current profit is higher.  
  4. If the current price is lower than the minimum, update the minimum.

- **Key Concepts Explained**:  
  - **Greedy Algorithm**: Always pick the best at each step (lowest price to buy, highest difference to sell).  
  - **One-pass scan**: You don’t need nested loops – a single loop suffices.

- **Time Complexity**: O(n)  
- **Space Complexity**: O(1)

**Dry Run**:  
- *Input* : `[7,1,5,3,6,4]`  
- *Output* : `5`  
- *Explanation* :  
  - Buy at 1, Sell at 6 → Profit = 5 (maximum possible)

---

### 347. **Longest Common Prefix**  [Py Code](./_347_LC_14_Longest_Common_Prefix.py)  

- **File**: _347_LC_14_Longest_Common_Prefix_  
- **Description**:  
  - You're given an array of strings. Find the longest common prefix among all the strings.  
  - If no common prefix exists, return an empty string `""`.  
  - Constraints:  
    - `1 <= strs.length <= 200`  
    - `0 <= strs[i].length <= 200`  
    - All strings consist of lowercase English letters.

- **Understanding the Problem**:  
  - A **prefix** is the beginning part of a string.  
  - A **common prefix** means all the strings start with the same letters.  
  - You need to find the longest such beginning part that all strings share.  
  - Example:  
    - Input: `["flower", "flow", "flight"]` → Output: `"fl"`  
    - Input: `["dog", "racecar", "car"]` → Output: `""` (no shared prefix)

- **Pseudocode**:
```
If the list is empty, return "".
Find the length of the shortest string.
Initialize an empty result string.
Loop over each index up to the shortest length:
    Get the character at that index from the first string.
    Check if this character matches in all strings at the same index.
    If yes, add it to the result.
    If not, return result immediately.
Return result.
```

- **Approach**:  
  1. First, handle the edge case: If the list is empty, return an empty string.  
  2. Find the length of the shortest string in the list—because the common prefix can't be longer than that.  
  3. Loop through characters (by index) of the first string, up to that shortest length.  
  4. At each character position, compare the character across all strings.  
  5. If all strings have the same character at that index, add it to the result.  
  6. As soon as you find a mismatch, stop and return the prefix collected so far.

- **Key Concepts Explained**:  
  - **Prefix**: A string's starting portion. In `"prefix"`, `"pre"` is a prefix.  
  - **Character-wise comparison**: Instead of checking entire strings, compare letter by letter.  
  - **Early stopping**: The algorithm stops checking once any mismatch is found, saving time.

- **Time Complexity**:  
  - O(n × m), where `n` is the number of strings and `m` is the length of the shortest string.  
  - Each character of each string is compared once until a mismatch is found.

- **Space Complexity**:  
  - O(1) extra space (excluding output), as we only store the resulting prefix string.

**Dry Run**:  
- *Input* : `["flower", "flow", "flight"]`  
- *Output* : `"fl"`  
- *Explanation* :  
  - Index 0: All have `'f'` → OK  
  - Index 1: All have `'l'` → OK  
  - Index 2: `'o'`, `'o'`, `'i'` → mismatch → stop  
  - Result: `"fl"`

- Steps (Show all steps in depth):  
  1. First string: `"flower"`  
  2. Minimum length: 4 (`"flow"`)  
  3. Compare chars:  
     - Index 0 → `'f'` → all match  
     - Index 1 → `'l'` → all match  
     - Index 2 → `'o'`, `'o'`, `'i'` → mismatch  
  4. Final result: `"fl"`

---
