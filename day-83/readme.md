## Day 83 - Problems  

---

### 292. **Number of Substrings Containing All Three Characters** [C++ Code](./_292_Number_of_Substrings_Containing_All_Three_Characters.cpp)  

- **File**: _292_Number_of_Substrings_Containing_All_Three_Characters.cpp_  
- **Description**:  
  - Given a string `s` consisting of only characters 'a', 'b', and 'c', the task is to find the number of substrings containing at least one occurrence of each character.  
  - Constraints: `1 <= s.length <= 100000`, `s` consists of only 'a', 'b', and 'c'.  

- **Understanding the Problem**:  
  - We need to count all possible substrings that contain 'a', 'b', and 'c'.  
  - Example: `s = "abcabc"`
    - Valid substrings include "abc", "abca", "abcab", etc.
  - We will use a sliding window approach to efficiently track substrings.  

- **Pseudocode**:
```
Initialize left pointer and result counter.
Initialize a frequency array for 'a', 'b', 'c'.
Loop through the string with a right pointer:
    Increment the count of the character at right pointer.
    While all three characters are present in the window:
        Increment the result by the number of valid substrings.
        Move left pointer to reduce the window size.
Return result.
```

- **Approach**:  
  1. Use a **sliding window** technique with two pointers (`left` and `right`).  
  2. Expand the window by moving `right` pointer and count occurrences of 'a', 'b', and 'c'.  
  3. When the window contains at least one occurrence of each, calculate the number of substrings.  
  4. Move `left` pointer to check for smaller valid substrings.  
  5. Repeat until `right` traverses the entire string.  

- **Key Concepts Explained**:  
  - **Sliding Window**: An optimal way to handle substring-related problems efficiently.  
  - **Two Pointers**: Helps reduce the time complexity by dynamically resizing the window.  

- **Time Complexity**: **O(N)** since each character is processed at most twice.  
- **Space Complexity**: **O(1)** since only a fixed-size array is used.  

Let's do an in-depth dry run for both problems.

---

**Example Input:**  
`s = "abcabc"`

### **Step-by-Step Execution (Sliding Window Approach)**

#### **Initialization**  
- `left = 0` (Left pointer)  
- `count = { 'a': 0, 'b': 0, 'c': 0 }` (Character frequency map)  
- `result = 0` (Final count of valid substrings)

#### **Iteration through `s` using `right` pointer**
| `right` | `s[right]` | Updated Count | Valid Window? | `left` Moves | Substrings Added |
|---------|-----------|--------------|--------------|-------------|----------------|
| 0       | 'a'       | `{a:1, b:0, c:0}` | No  | No | 0 |
| 1       | 'b'       | `{a:1, b:1, c:0}` | No  | No | 0 |
| 2       | 'c'       | `{a:1, b:1, c:1}` | Yes | No | `result += (n - right) = 6 - 2 = 4` |
| 3       | 'a'       | `{a:2, b:1, c:1}` | Yes | `left++` | `result += 6 - 3 = 3` |
| 4       | 'b'       | `{a:2, b:2, c:1}` | Yes | `left++` | `result += 6 - 4 = 2` |
| 5       | 'c'       | `{a:2, b:2, c:2}` | Yes | `left++` | `result += 6 - 5 = 1` |

#### **Final Answer:**  
`result = 10`

---

### 293. **Maximum Points You Can Obtain from Cards** [C++ Code](./_293_Maximum_Points_You_Can_Obtain_from_Cards.cpp)  

- **File**: _293_Maximum_Points_You_Can_Obtain_from_Cards.cpp_  
- **Description**:  
  - Given an array of card points, and an integer `k`, pick exactly `k` cards from either the beginning or end of the array to maximize the sum of points.  
  - Constraints: `1 <= cardPoints.length <= 100000`, `1 <= k <= cardPoints.length`.  

- **Understanding the Problem**:  
  - We can only take `k` cards from either end but need to maximize the sum.  
  - Example: `cardPoints = [1,2,3,4,5,6,1]`, `k = 3`  
    - Optimal choice: `[1,6,5]` with sum `12`.  
  - Instead of selecting `k` elements directly, we find the minimum sum of a window of `n-k` elements and subtract from the total sum.  

- **Pseudocode**:
```
Calculate total sum of cardPoints.
Find the minimum sum of a contiguous subarray of size (n - k).
Subtract this minimum sum from total sum to get the maximum points.
Return the result.
```

- **Approach**:  
  1. Compute the **total sum** of `cardPoints`.  
  2. Identify the **smallest sum subarray** of size `n - k`.  
  3. The optimal solution is `total sum - min subarray sum`.  
  4. Use a **sliding window** approach to find the minimum sum efficiently.  

- **Key Concepts Explained**:  
  - **Sliding Window**: Avoids recomputation by dynamically maintaining a subarray sum.  
  - **Prefix Sum**: Helps to quickly find total sum.  

- **Time Complexity**: **O(N)** since we only traverse the array twice.  
- **Space Complexity**: **O(1)** since no extra memory is used.  


**Example Input:**  
`cardPoints = [1,2,3,4,5,6,1]`, `k = 3`

### **Step-by-Step Execution (Sliding Window Approach)**

#### **1. Calculate Total Sum:**  
`totalSum = 1 + 2 + 3 + 4 + 5 + 6 + 1 = 22`

#### **2. Identify the Smallest Subarray of Size `n-k = 7-3 = 4`**
We find the smallest sum subarray of size `4`:

| Subarray  | Sum |
|-----------|-----|
| [1,2,3,4] | `10` |
| [2,3,4,5] | `14` |
| [3,4,5,6] | `18` |
| [4,5,6,1] | `16` |

Minimum sum = `10`

#### **3. Compute the Result:**  
`maxPoints = totalSum - minSum = 22 - 10 = 12`

#### **Final Answer:**  
`12`
---
