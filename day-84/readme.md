## Day X - Problems  

---  

### 294. **Subarray with K Different Integers** [C++ Code](./_294_Subarray_with_K_Different_Integers.cpp)  

- **File**: _294_Subarray_with_K_Different_Integers.cpp_  
- **Description**:  
  - Given an integer array `nums` and an integer `k`, return the number of subarrays that contain exactly `k` different integers.  
  - A subarray is a contiguous part of an array.  
  - The constraints ensure that `nums.length` is at most `2 * 10^4`.  

- **Understanding the Problem**:  
  - We need to count the number of subarrays that contain exactly `k` distinct numbers.  
  - Instead of counting directly, we count subarrays with at most `k` distinct numbers and subtract subarrays with at most `k-1` distinct numbers.  
  
- **Pseudocode**:
```
Function atMostK(nums, k):
    Initialize a hashmap to store frequency counts
    Initialize left pointer, result counter, and distinct count
    Loop through the array with right pointer:
        Add nums[right] to the hashmap
        If new distinct element, increment distinct count
        While distinct count exceeds k:
            Remove nums[left] from hashmap
            If count goes to zero, decrement distinct count
            Move left pointer forward
        Add subarrays count (right - left + 1) to result
    Return result

Function subarraysWithKDistinct(nums, k):
    Return atMostK(nums, k) - atMostK(nums, k-1)
```

- **Approach**:  
  - Use a sliding window technique to efficiently count subarrays.  
  - Maintain a hash map to store frequency counts of elements in the window.  
  - Expand the window to include new elements until the distinct count exceeds `k`.  
  - Shrink from the left to maintain at most `k` distinct elements.  
  - Count subarrays dynamically and return the difference of `atMostK(k) - atMostK(k-1)`.  

- **Key Concepts Explained**:  
  - **Sliding Window**: Expanding and contracting the window dynamically based on conditions.  
  - **Hash Map for Frequency Count**: Helps in tracking the number of distinct elements efficiently.  

- **Time Complexity**: **O(N)** (Each element is processed at most twice)  
- **Space Complexity**: **O(K)** (To store frequency counts)  

#### **Example**:
- Input: `nums = [1, 2, 1, 2, 3]`, `k = 2`  
- Output: `7`  

#### **Dry Run**:
We use the helper function `atMostK(nums, k)` to count subarrays with **at most** `k` distinct integers. Then, we subtract `atMostK(nums, k-1)` to get the count of subarrays with **exactly** `k` distinct integers.

---

#### **Step 1: Calculate `atMostK(nums, 2)`**  
We count all subarrays with **at most 2 distinct integers**.

- Initialize:
  - `left = 0`, `result = 0`, `distinct = 0`
  - `count = {}` (empty hash map to store frequency of elements)

- Iterate through the array:

| **Right** | **nums[right]** | **Window**          | **Distinct** | **Action**                                                                 | **Result Update**       |
|-----------|-----------------|---------------------|--------------|----------------------------------------------------------------------------|-------------------------|
| 0         | 1               | [1]                 | 1            | Add `1` to `count`. No need to shrink.                                     | `result += 1` (1 subarray: `[1]`) |
| 1         | 2               | [1, 2]              | 2            | Add `2` to `count`. No need to shrink.                                     | `result += 2` (2 new subarrays: `[2]`, `[1, 2]`) |
| 2         | 1               | [1, 2, 1]           | 2            | Add `1` to `count`. No need to shrink.                                     | `result += 3` (3 new subarrays: `[1]`, `[2, 1]`, `[1, 2, 1]`) |
| 3         | 2               | [1, 2, 1, 2]        | 2            | Add `2` to `count`. No need to shrink.                                     | `result += 4` (4 new subarrays: `[2]`, `[1, 2]`, `[2, 1, 2]`, `[1, 2, 1, 2]`) |
| 4         | 3               | [1, 2, 1, 2, 3]     | 3            | Add `3` to `count`. Now `distinct > k`, so shrink the window from the left. | Shrink until `distinct <= 2`:<br>Remove `1` (window = `[2, 1, 2, 3]`), `distinct = 3`<br>Remove `2` (window = `[1, 2, 3]`), `distinct = 3`<br>Remove `1` (window = `[2, 3]`), `distinct = 2`<br>Now, `result += 2` (2 new subarrays: `[3]`, `[2, 3]`) |

- Final `result` for `atMostK(nums, 2)` = `1 + 2 + 3 + 4 + 2 = 12`

---

#### **Step 2: Calculate `atMostK(nums, 1)`**  
We count all subarrays with **at most 1 distinct integer**.

- Initialize:
  - `left = 0`, `result = 0`, `distinct = 0`
  - `count = {}` (empty hash map to store frequency of elements)

- Iterate through the array:

| **Right** | **nums[right]** | **Window**          | **Distinct** | **Action**                                                                 | **Result Update**       |
|-----------|-----------------|---------------------|--------------|----------------------------------------------------------------------------|-------------------------|
| 0         | 1               | [1]                 | 1            | Add `1` to `count`. No need to shrink.                                     | `result += 1` (1 subarray: `[1]`) |
| 1         | 2               | [1, 2]              | 2            | Add `2` to `count`. Now `distinct > k`, so shrink the window from the left. | Remove `1` (window = `[2]`), `distinct = 1`<br>`result += 1` (1 new subarray: `[2]`) |
| 2         | 1               | [2, 1]              | 2            | Add `1` to `count`. Now `distinct > k`, so shrink the window from the left. | Remove `2` (window = `[1]`), `distinct = 1`<br>`result += 1` (1 new subarray: `[1]`) |
| 3         | 2               | [1, 2]              | 2            | Add `2` to `count`. Now `distinct > k`, so shrink the window from the left. | Remove `1` (window = `[2]`), `distinct = 1`<br>`result += 1` (1 new subarray: `[2]`) |
| 4         | 3               | [2, 3]              | 2            | Add `3` to `count`. Now `distinct > k`, so shrink the window from the left. | Remove `2` (window = `[3]`), `distinct = 1`<br>`result += 1` (1 new subarray: `[3]`) |

- Final `result` for `atMostK(nums, 1)` = `1 + 1 + 1 + 1 + 1 = 5`

---

#### **Step 3: Final Result**  
- Subarrays with **exactly 2 distinct integers** = `atMostK(nums, 2) - atMostK(nums, 1)` = `12 - 5 = 7`

---  

### 295. **Minimum Window Substring** [C++ Code](./_295_Minimum_Window_Substring.cpp)  

- **File**: _295_Minimum_Window_Substring.cpp_  
- **Description**:  
  - Given two strings `s` and `t`, return the minimum window substring of `s` that contains all characters of `t` including duplicates.  
  - If no such substring exists, return an empty string `""`.  

- **Understanding the Problem**:  
  - We need to find the smallest contiguous substring in `s` that contains all characters from `t`.  
  - Use a sliding window approach to dynamically track and adjust the window.  
  
- **Pseudocode**:
```
Function minWindow(s, t):
    Initialize hashmap t_count to store frequency of characters in t
    Initialize window_count hashmap, left pointer, right pointer, minLen, and minStart
    Initialize variables: required (unique chars in t), formed (matching chars in window)
    Loop through s with right pointer:
        Add s[right] to window_count
        If s[right] matches required frequency in t_count, increment formed
        While formed == required:
            Update minLen and minStart if smaller window found
            Remove s[left] from window_count
            If frequency in window_count is less than required, decrement formed
            Move left pointer forward
    Return substring from minStart with length minLen if found, else return ""
```

- **Approach**:  
  - Use a hash map to store required character counts from `t`.  
  - Expand the window by moving the right pointer.  
  - Shrink the window when all characters from `t` are found.  
  - Track the minimum length substring dynamically.  

- **Key Concepts Explained**:  
  - **Sliding Window Technique**: Expanding and shrinking based on character requirements.  
  - **Frequency Count**: Using hash maps to track character frequencies.  
  - **Two Pointers**: One for expanding, one for contracting the window.  

- **Time Complexity**: **O(m + n)** (Each character is processed at most twice)  
- **Space Complexity**: **O(1)** (Since we only use a hash map for fixed English letters)  

#### **Example**:
- Input: `s = "ADOBECODEBANC"`, `t = "ABC"`  
- Output: `"BANC"`  

#### **Dry Run**:
We use the sliding window technique to find the smallest substring in `s` that contains all characters of `t`.

---

#### **Step 1: Initialize**  
- `t_count = {'A': 1, 'B': 1, 'C': 1}` (frequency of characters in `t`)  
- `left = 0`, `right = 0`, `minLen = infinity`, `minStart = 0`  
- `required = 3` (number of unique characters in `t`)  
- `formed = 0` (number of unique characters in the current window that match `t`)  
- `window_count = {}` (empty hash map to store frequency of characters in the current window)

---

#### **Step 2: Expand and Shrink the Window**  

| **Right** | **s[right]** | **Window**          | **Action**                                                                 | **Formed** | **Update Min Window** |
|-----------|--------------|---------------------|----------------------------------------------------------------------------|------------|------------------------|
| 0         | A            | "A"                 | Add `A` to `window_count`. `window_count['A'] == t_count['A']`, so `formed++`. | 1          | No valid window yet.   |
| 1         | D            | "AD"                | Add `D` to `window_count`. `D` is not in `t_count`, so no change.           | 1          | No valid window yet.   |
| 2         | O            | "ADO"               | Add `O` to `window_count`. `O` is not in `t_count`, so no change.           | 1          | No valid window yet.   |
| 3         | B            | "ADOB"              | Add `B` to `window_count`. `window_count['B'] == t_count['B']`, so `formed++`. | 2          | No valid window yet.   |
| 4         | E            | "ADOBE"             | Add `E` to `window_count`. `E` is not in `t_count`, so no change.           | 2          | No valid window yet.   |
| 5         | C            | "ADOBEC"            | Add `C` to `window_count`. `window_count['C'] == t_count['C']`, so `formed++`. | 3          | Valid window found!    |

- Now, `formed == required`, so we shrink the window from the left:
  - Current window: `"ADOBEC"` (length = 6)  
  - Update `minLen = 6`, `minStart = 0`  
  - Remove `A` from the window. `window_count['A']--`. Now, `window_count['A'] < t_count['A']`, so `formed--`.  
  - New window: `"DOBEC"`  

| **Left** | **Window** | **Action**                                                                 | **Formed** | **Update Min Window** |
|----------|------------|----------------------------------------------------------------------------|------------|------------------------|
| 1        | "DOBEC"    | Remove `D`. `D` is not in `t_count`, so no change.                        | 3          | No change.             |
| 2        | "OBEC"     | Remove `O`. `O` is not in `t_count`, so no change.                        | 3          | No change.             |
| 3        | "BEC"      | Remove `B`. `window_count['B']--`. Now, `window_count['B'] < t_count['B']`, so `formed--`. | 2          | No valid window.       |

- Continue expanding the window:

| **Right** | **s[right]** | **Window**          | **Action**                                                                 | **Formed** | **Update Min Window** |
|-----------|--------------|---------------------|----------------------------------------------------------------------------|------------|------------------------|
| 6         | O            | "BECO"              | Add `O` to `window_count`. `O` is not in `t_count`, so no change.           | 2          | No valid window yet.   |
| 7         | D            | "BECOD"             | Add `D` to `window_count`. `D` is not in `t_count`, so no change.           | 2          | No valid window yet.   |
| 8         | E            | "BECODE"            | Add `E` to `window_count`. `E` is not in `t_count`, so no change.           | 2          | No valid window yet.   |
| 9         | B            | "BECODEB"           | Add `B` to `window_count`. `window_count['B'] == t_count['B']`, so `formed++`. | 3          | Valid window found!    |

- Shrink the window from the left:
  - Current window: `"BECODEB"` (length = 7)  
  - No update to `minLen` (since 7 > 6).  
  - Remove `B` from the window. `window_count['B']--`. Now, `window_count['B'] < t_count['B']`, so `formed--`.  
  - New window: `"ECODEB"`  

| **Left** | **Window** | **Action**                                                                 | **Formed** | **Update Min Window** |
|----------|------------|----------------------------------------------------------------------------|------------|------------------------|
| 4        | "ECODEB"   | Remove `E`. `E` is not in `t_count`, so no change.                        | 3          | No change.             |
| 5        | "CODEB"    | Remove `C`. `window_count['C']--`. Now, `window_count['C'] < t_count['C']`, so `formed--`. | 2          | No valid window.       |

- Continue expanding the window:

| **Right** | **s[right]** | **Window**          | **Action**                                                                 | **Formed** | **Update Min Window** |
|-----------|--------------|---------------------|----------------------------------------------------------------------------|------------|------------------------|
| 10        | A            | "CODEBA"            | Add `A` to `window_count`. `window_count['A'] == t_count['A']`, so `formed++`. | 3          | Valid window found!    |

- Shrink the window from the left:
  - Current window: `"CODEBA"` (length = 6)  
  - No update to `minLen` (since 6 == 6).  
  - Remove `C` from the window. `window_count['C']--`. Now, `window_count['C'] < t_count['C']`, so `formed--`.  
  - New window: `"ODEBA"`  

| **Left** | **Window** | **Action**                                                                 | **Formed** | **Update Min Window** |
|----------|------------|----------------------------------------------------------------------------|------------|------------------------|
| 6        | "ODEBA"    | Remove `O`. `O` is not in `t_count`, so no change.                        | 3          | No change.             |
| 7        | "DEBA"     | Remove `D`. `D` is not in `t_count`, so no change.                        | 3          | No change.             |
| 8        | "EBA"      | Remove `E`. `E` is not in `t_count`, so no change.                        | 3          | No change.             |
| 9        | "BA"       | Remove `B`. `window_count['B']--`. Now, `window_count['B'] < t_count['B']`, so `formed--`. | 2          | No valid window.       |

- Continue expanding the window:

| **Right** | **s[right]** | **Window**          | **Action**                                                                 | **Formed** | **Update Min Window** |
|-----------|--------------|---------------------|----------------------------------------------------------------------------|------------|------------------------|
| 11        | N            | "BAN"               | Add `N` to `window_count`. `N` is not in `t_count`, so no change.           | 2          | No valid window yet.   |
| 12        | C            | "BANC"              | Add `C` to `window_count`. `window_count['C'] == t_count['C']`, so `formed++`. | 3          | Valid window found!    |

- Shrink the window from the left:
  - Current window: `"BANC"` (length = 4)  
  - Update `minLen = 4`, `minStart = 9`  
  - Remove `B` from the window. `window_count['B']--`. Now, `window_count['B'] < t_count['B']`, so `formed--`.  
  - New window: `"ANC"`  

| **Left** | **Window** | **Action**                                                                 | **Formed** | **Update Min Window** |
|----------|------------|----------------------------------------------------------------------------|------------|------------------------|
| 10       | "ANC"      | Remove `A`. `window_count['A']--`. Now, `window_count['A'] < t_count['A']`, so `formed--`. | 2          | No valid window.       |

---

#### **Step 3: Final Result**  
- The smallest window is `"BANC"` with length `4`, starting at index `9`.  
- Return `s.substr(9, 4) = "BANC"`.  


---  