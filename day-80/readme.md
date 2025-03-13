## Day 80 - Problems  

---

### 286. **Longest Substring Without Repeating Characters** [C++ Code](./_286_Longest_Substring_Without_Repeating_Characters.cpp)  

- **File**: _286_Longest_Substring_Without_Repeating_Characters.cpp_  
- **Description**:  
  - Given a string `s`, find the length of the longest substring without repeating characters.  
  - Constraints: `1 <= s.length <= 10^5`, `s` consists of English letters, digits, symbols, and spaces.  

- **Understanding the Problem**:  
  - Find the longest sequence of unique characters in `s`.  
  - Example: `abcabcbb` → Longest substring is `abc`, length = 3.  
  
- **Pseudocode**:
  ```
  Initialize a hashmap to store character indices.
  Use two pointers: left and right.
  Move right pointer while adding characters to the map.
  If a character repeats, move the left pointer to exclude the previous occurrence.
  Update max length of unique substring.
  ```

- **Approach**:  
  1. Use a hash map to track last seen indices of characters.  
  2. Expand the window from the right while characters are unique.  
  3. If a duplicate appears, move the left pointer past the previous occurrence.  
  4. Maintain a max length of valid substrings.  

- **Key Concepts Explained**:  
  - **Sliding Window**: Expanding and contracting a window over `s` for efficient substring checking.  
  - **Hash Map**: Stores character indices for O(1) lookups.  

- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(min(N, 26))** (bounded by alphabet size)

#### **Example Input**  
`s = "abcabcbb"`  

#### **Initial State**  
- `lastIndex = {}` (stores the last seen index of characters)  
- `left = 0`, `maxLen = 0`  

#### **Step-by-Step Execution**  
| Step | `right` (char) | `left` | `lastIndex` (map) | Substring | `maxLen` |
|------|---------------|--------|------------------|------------|---------|
| 1    | `a`          | 0      | `{a: 0}`        | "a"        | 1       |
| 2    | `b`          | 0      | `{a: 0, b: 1}`  | "ab"       | 2       |
| 3    | `c`          | 0      | `{a: 0, b: 1, c: 2}` | "abc" | 3       |
| 4    | `a` (duplicate) | 1  | `{a: 3, b: 1, c: 2}` | "bca" | 3       |
| 5    | `b` (duplicate) | 2  | `{a: 3, b: 4, c: 2}` | "cab" | 3       |
| 6    | `c` (duplicate) | 3  | `{a: 3, b: 4, c: 5}` | "abc" | 3       |
| 7    | `b` (duplicate) | 5  | `{a: 3, b: 6, c: 5}` | "cb" | 3       |
| 8    | `b` (duplicate) | 7  | `{a: 3, b: 7, c: 5}` | "b" | 3       |

#### **Final Output**  
`maxLen = 3` (Longest substring is "abc")  


---

### 287. **Max Consecutive Ones III** [C++ Code](./_287_Max_Consecutive_Ones_III.cpp)  

- **File**: _287_Max_Consecutive_Ones_III.cpp_  
- **Description**:  
  - Given a binary array `nums` and an integer `k`, find the longest subarray containing only 1s after flipping at most `k` 0s.  
  - Constraints: `1 <= nums.length <= 10^5`, `nums[i]` is either `0` or `1`, `0 <= k <= nums.length`.  

- **Understanding the Problem**:  
  - We can flip at most `k` zeroes to `1` and need the longest contiguous `1` sequence.  
  - Example: `[1,1,0,0,1,1,1,0,1,1,0,1,1]`, `k = 2` → Output: `7`.  
  
- **Pseudocode**:
  ```
  Initialize left pointer and zero count.
  Expand right pointer and track zeros.
  If zeros exceed k, move left pointer until within limit.
  Track max length of valid subarray.
  ```

- **Approach**:  
  1. Use **two pointers** (`left` and `right`) as a sliding window.  
  2. Expand the window until zero count exceeds `k`.  
  3. If exceeded, shrink from `left` until valid again.  
  4. Track the max length of a valid window.  

- **Key Concepts Explained**:  
  - **Sliding Window**: Efficiently finds the longest valid subarray.  
  - **Two-Pointer Technique**: Moves `left` only when necessary.  

- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(1)**  

#### **Example Input**  
`nums = [1,1,0,0,1,1,1,0,1,1,0,1,1]`, `k = 2`  

#### **Initial State**  
- `left = 0`, `right = 0`, `zeroCount = 0`, `maxLen = 0`  

#### **Step-by-Step Execution**  
| Step | `right` (num) | `left` | `zeroCount` | Subarray | `maxLen` |
|------|-------------|--------|------------|----------|---------|
| 1    | `1`        | 0      | 0          | `[1]`    | 1       |
| 2    | `1`        | 0      | 0          | `[1,1]`  | 2       |
| 3    | `0`        | 0      | 1          | `[1,1,0]` | 3       |
| 4    | `0`        | 0      | 2          | `[1,1,0,0]` | 4       |
| 5    | `1`        | 0      | 2          | `[1,1,0,0,1]` | 5       |
| 6    | `1`        | 0      | 2          | `[1,1,0,0,1,1]` | 6       |
| 7    | `1`        | 0      | 2          | `[1,1,0,0,1,1,1]` | 7       |
| 8    | `0` (exceeds k) | 1  | 3          | `[1,0,0,1,1,1,0]` | 7       |
| 9    | `1`        | 2      | 2          | `[0,0,1,1,1,0,1]` | 7       |
| 10   | `1`        | 2      | 2          | `[0,0,1,1,1,0,1,1]` | 8       |

#### **Final Output**  
`maxLen = 7` (Longest subarray with at most 2 flipped zeros)  

---

### 288. **Length of Longest Subarray With at Most K Frequency** [C++ Code](./_288_Length_of_Longest_Subarray_With_at_Most_K_Frequency.cpp)  

- **File**: _288_Length_of_Longest_Subarray_With_at_Most_K_Frequency.cpp_  
- **Description**:  
  - Given an array `nums` and integer `k`, find the length of the longest contiguous subarray where every element appears at most `k` times.  
  - Constraints: `1 <= nums.length <= 10^5`, `1 <= nums[i] <= 10^9`, `1 <= k <= nums.length`.  

- **Understanding the Problem**:  
  - We need to maintain a **frequency limit** while finding the longest subarray.  
  - Example: `[1,2,3,1,2,3,1,2]`, `k=2` → Output: `6`.  
  
- **Pseudocode**:
  ```
  Initialize a frequency map.
  Expand right pointer and update frequency.
  If any element exceeds k occurrences, shrink left pointer.
  Track max valid subarray length.
  ```

- **Approach**:  
  1. Use a **hash map** to count occurrences.  
  2. Expand the window while keeping all elements' frequencies ≤ `k`.  
  3. If an element exceeds `k`, shrink from the left until valid.  
  4. Maintain the max valid subarray length.  

- **Key Concepts Explained**:  
  - **Sliding Window**: Adjusts size dynamically.  
  - **Hash Map**: Tracks frequency counts.  

- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)** (hash map storage)  

#### **Example Input**  
`nums = [1,2,3,1,2,3,1,2]`, `k = 2`  

#### **Initial State**  
- `left = 0`, `freq = {}`, `maxLen = 0`  

#### **Step-by-Step Execution**  
| Step | `right` (num) | `left` | `freq` | Subarray | `maxLen` |
|------|-------------|--------|------------|------------|---------|
| 1    | `1`        | 0      | `{1:1}`    | `[1]`      | 1       |
| 2    | `2`        | 0      | `{1:1,2:1}` | `[1,2]`    | 2       |
| 3    | `3`        | 0      | `{1:1,2:1,3:1}` | `[1,2,3]` | 3       |
| 4    | `1`        | 0      | `{1:2,2:1,3:1}` | `[1,2,3,1]` | 4       |
| 5    | `2`        | 0      | `{1:2,2:2,3:1}` | `[1,2,3,1,2]` | 5       |
| 6    | `3`        | 0      | `{1:2,2:2,3:2}` | `[1,2,3,1,2,3]` | 6       |
| 7    | `1` (exceeds k) | 1  | `{1:3,2:2,3:2}` | `[2,3,1,2,3,1]` | 6       |
| 8    | `2` (exceeds k) | 2  | `{1:2,2:3,3:2}` | `[3,1,2,3,1,2]` | 6       |

#### **Final Output**  
`maxLen = 6` (Longest subarray with all elements appearing at most `k` times)  

---

