
## Day 51 - Problems  

---

### 198. **Longest Common Prefix** [C++ Code](./_198_Longest_Common_Prefix.cpp)  

- **File**: _198_Longest_Common_Prefix.cpp  
- **Description**:  
  - Given an array of strings, find the longest common prefix shared by all strings.  
  - If no common prefix exists, return an empty string `""`.  
  - Constraints:  
    - `1 <= strs.length <= 200`  
    - `0 <= strs[i].length <= 200`  
    - `strs[i]` consists of lowercase English letters only.  

- **Understanding the Problem**:  
  - A prefix is a sequence of characters at the beginning of a string. For example, in the string "flower", "fl" is a prefix.  
  - The goal is to find the longest prefix that is common to all strings in the array.  
  - Example:  
    - Input: `["flower", "flow", "flight"]`  
    - Output: `"fl"` (since "fl" is the longest prefix common to all three strings).  

- **How to Approach the Problem**:  
  - Start by comparing the first string with the rest of the strings.  
  - Use binary search to efficiently find the longest common prefix.  
  - Edge cases to consider:  
    - Empty array.  
    - Strings of varying lengths.  
    - No common prefix.  

- **Approach**:  
  1. Check if the array is empty. If it is, return an empty string.  
  2. Use binary search to determine the maximum possible length of the common prefix.  
     - Initialize `left` to 0 and `right` to the length of the first string.  
     - Calculate the middle point `mid`.  
     - Check if the first `mid` characters of the first string are a common prefix for all strings using the `isCommonPrefix` function.  
     - If they are, move `left` to `mid` to search for a longer prefix.  
     - If not, move `right` to `mid - 1` to search for a shorter prefix.  
  3. Return the longest common prefix found.  

- **Key Concepts Explained**:  
  - **Binary Search**: A technique to efficiently search for a value in a sorted array by repeatedly dividing the search interval in half.  
  - **Prefix**: A sequence of characters at the beginning of a string.  

- **Time Complexity**:  
  - The binary search runs in `O(log m)` time, where `m` is the length of the shortest string.  
  - For each midpoint, the `isCommonPrefix` function checks all strings, which takes `O(n * m)` time.  
  - Overall time complexity: `O(n * m * log m)`.  

- **Space Complexity**:  
  - The algorithm uses constant extra space, so the space complexity is `O(1)`.  

---

### 199. **Isomorphic Strings** [C++ Code](./_199_Isomorphic_Strings.cpp)  

- **File**: _199_Isomorphic_Strings.cpp  
- **Description**:  
  - Given two strings `s` and `t`, determine if they are isomorphic.  
  - Two strings are isomorphic if the characters in `s` can be replaced to get `t`.  
  - All occurrences of a character must be replaced with another character while preserving the order of characters.  
  - Constraints:  
    - `1 <= s.length <= 5 * 10^4`  
    - `t.length == s.length`  
    - `s` and `t` consist of any valid ASCII characters.  

- **Understanding the Problem**:  
  - Isomorphic strings have a one-to-one mapping between characters of `s` and `t`.  
  - Example:  
    - Input: `s = "egg"`, `t = "add"`  
    - Output: `true` (because `e` maps to `a`, and `g` maps to `d`).  
    - Input: `s = "foo"`, `t = "bar"`  
    - Output: `false` (because `o` cannot map to both `a` and `r`).  

- **How to Approach the Problem**:  
  - Use two hash maps to store the mapping from `s` to `t` and from `t` to `s`.  
  - Iterate through both strings simultaneously and check if the mappings are consistent.  
  - Edge cases to consider:  
    - Strings of different lengths.  
    - Repeated characters in one string mapping to different characters in the other.  

- **Approach**:  
  1. Check if the lengths of `s` and `t` are equal. If not, return `false`.  
  2. Create two hash maps: one to map characters from `s` to `t`, and another to map characters from `t` to `s`.  
  3. Iterate through each character of `s` and `t`:  
     - If the current character in `s` is already mapped, check if it maps to the corresponding character in `t`. If not, return `false`.  
     - Similarly, check the mapping from `t` to `s`.  
     - If no mapping exists, create a new mapping in both hash maps.  
  4. If the loop completes without inconsistencies, return `true`.  

- **Key Concepts Explained**:  
  - **Hash Map**: A data structure that stores key-value pairs and allows efficient lookups.  
  - **Isomorphic**: A one-to-one correspondence between elements of two sets.  

- **Time Complexity**:  
  - The algorithm iterates through both strings once, so the time complexity is `O(n)`, where `n` is the length of the strings.  

- **Space Complexity**:  
  - The algorithm uses two hash maps, each storing up to `n` mappings. Thus, the space complexity is `O(n)`.  

---
