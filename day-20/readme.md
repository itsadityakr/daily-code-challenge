## Day 20 - Problems

---

### 72. **Minimum Window Substring** [🧲](./_72_minimum_window_substring.cpp)
   - **File**: _72_MinimumWindowSubstring.cpp_
   - **Description**:  
     Given two strings, `s` (the source string) and `t` (the target string), find the smallest substring in `s` that contains all characters from `t` (including duplicates). If no such substring exists, return an empty string.  
     For example:  
     - Input: `s = "ADOBECODEBANC"`, `t = "ABC"`  
     - Output: `"BANC"`

   - **Approach**:  
     The solution uses the **Sliding Window** technique with the help of hash maps to efficiently find the minimum window substring. Here's the detailed breakdown of the approach:  

     1. **Frequency Map Initialization**:  
        - First, build a frequency map for the characters in string `t`. This helps keep track of how many times each character needs to appear in the window.  
        - Example: For `t = "ABC"`, the frequency map would be `{A: 1, B: 1, C: 1}`.

     2. **Sliding Window Expansion**:  
        - Use two pointers, `left` and `right`, to define the boundaries of the sliding window. Start with both at the beginning of string `s`.  
        - As you expand the window by moving `right`, add the characters of `s` into a `windowFreq` map to track their frequencies.  
        - If a character's frequency in the window matches its frequency in `tFreq`, increment a counter `formed`. This indicates that the window satisfies the condition for one character in `t`.

     3. **Window Contraction**:  
        - Once the `formed` counter matches the number of unique characters in `t` (denoted by `required`), attempt to shrink the window by moving the `left` pointer.  
        - For each possible contraction:  
          - Check if the current window is smaller than the previously recorded minimum length. If yes, update the minimum length and starting position.  
          - Remove the `left` character from the `windowFreq` map and adjust the `formed` counter if the condition for a character in `tFreq` is no longer met.  

     4. **Result Calculation**:  
        - After the loop ends, if no valid window was found (minimum length is still `INT_MAX`), return an empty string. Otherwise, return the substring starting from `minStart` with length `minLen`.

     This approach ensures that every character in `t` is accounted for efficiently, and the window size is dynamically adjusted to find the smallest valid substring.

   - **Time Complexity**:  
     - **O(N + M)**, where `N` is the length of string `s` and `M` is the length of string `t`.  
       - Building the frequency map takes **O(M)**.  
       - Expanding and contracting the sliding window processes each character of `s` at most twice, resulting in **O(N)**.

   - **Space Complexity**:  
     - **O(U)**, where `U` is the number of unique characters in `s` or `t` (whichever is larger).  
       - The `tFreq` and `windowFreq` maps require **O(U)** space.

---