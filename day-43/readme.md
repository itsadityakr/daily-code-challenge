## Day 43 - Problems

---

### 161. **Two Sum** [C++ Code](./_161_two_sum.cpp)
   - **File**: _161_two_sum.cpp
   - **Description**: Given an array of integers `nums` and an integer `target`, return `true` if there are two numbers in the array that add up to the `target`, otherwise return `false`.
   - **Approach**: 
     - We use a hash map (unordered_map) to store the numbers we have seen so far.
     - For each number in the array, we calculate its complement (i.e., `target - num`).
     - If the complement is already in the hash map, it means we have found two numbers that add up to the target, so we return `true`.
     - If the complement is not in the hash map, we add the current number to the hash map and continue.
     - If we finish the loop without finding such a pair, we return `false`.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), due to the hash map storing up to `n` elements.

---

### 162. **Majority Element (n/2)** [C++ Code](./_162_majority_element_n_by_2.cpp)
   - **File**: _162_majority_element_n_by_2.cpp
   - **Description**: Given an array of integers, find the majority element that appears more than `n/2` times, where `n` is the size of the array.
   - **Approach**: 
     - We use the **Boyer-Moore Voting Algorithm** to solve this problem efficiently.
     - We initialize two variables: `candidate` (to store the potential majority element) and `count` (to keep track of the candidate's frequency).
     - We iterate through the array:
       - If `count` is 0, we set the current element as the `candidate`.
       - If the current element is the same as the `candidate`, we increment `count`.
       - Otherwise, we decrement `count`.
     - At the end of the loop, the `candidate` will be the majority element.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(1), as we are using only a few extra variables.

---

### 163. **K-Diff Pairs in Array** [C++ Code](./_163_k_diff_pairs_in_array.cpp)
   - **File**: _163_k_diff_pairs_in_array.cpp
   - **Description**: Given an array of integers and an integer `k`, find the number of unique pairs of numbers that have a difference of `k`.
   - **Approach**: 
     - We use a hash map (unordered_map) to store the frequency of each number in the array.
     - We then iterate through the hash map:
       - If `k == 0`, we count how many numbers appear more than once.
       - If `k > 0`, we check if `num + k` exists in the hash map.
     - We count the valid pairs and return the result.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), due to the hash map storing up to `n` elements.

---

### 164. **Missing Number** [C++ Code](./_164_missing_number.cpp)
   - **File**: _164_missing_number.cpp
   - **Description**: Given an array containing `n` distinct numbers taken from the range `[0, n]`, find the missing number.
   - **Approach**: 
     - We create a vector `series` containing numbers from `0` to `n`.
     - We use a hash map (unordered_map) to store the frequency of each number in the original array and the `series`.
     - The number with a frequency of `1` in the hash map is the missing number.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), due to the hash map and the `series` vector.

---

### 165. **First Repeating Element** [C++ Code](./_165_first_repeating_element.cpp)
   - **File**: _165_first_repeating_element.cpp
   - **Description**: Given an array of integers, find the first element that repeats.
   - **Approach**: 
     - We use a hash map (unordered_map) to store the frequency of each element in the array.
     - We then iterate through the array and return the index of the first element that has a frequency greater than 1.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array.
   - **Space Complexity**: O(n), due to the hash map storing up to `n` elements.

---

### 166. **Valid Anagram** [C++ Code](./_166_valid_anagram.cpp)
   - **File**: _166_valid_anagram.cpp
   - **Description**: Given two strings `s` and `t`, determine if they are anagrams (i.e., they contain the same characters in the same frequency).
   - **Approach**: 
     - We first check if the lengths of the two strings are the same. If not, they cannot be anagrams.
     - We use a hash map (unordered_map) to store the frequency of each character in the first string.
     - We then iterate through the second string and decrement the frequency of each character in the hash map.
     - If any character's frequency becomes negative, the strings are not anagrams.
     - If we finish the loop without finding any discrepancies, the strings are anagrams.
   - **Time Complexity**: O(n), where `n` is the length of the strings.
   - **Space Complexity**: O(1), since the hash map stores a fixed number of characters (26 for lowercase English letters).

---

### 167. **Group Anagrams** [C++ Code](./_167_group_anagrams.cpp)
   - **File**: _167_group_anagrams.cpp
   - **Description**: Given an array of strings, group the anagrams together.
   - **Approach**: 
     - We use a hash map (unordered_map) where the key is the sorted version of each string, and the value is a vector of strings that are anagrams of each other.
     - For each string in the input array, we sort it and use it as a key in the hash map.
     - We then push the original string into the vector corresponding to its sorted key.
     - Finally, we collect all the vectors from the hash map and return them as the result.
   - **Time Complexity**: O(n * k log k), where `n` is the number of strings and `k` is the maximum length of a string.
   - **Space Complexity**: O(n * k), due to the hash map storing all the strings.

---

### 168. **Longest Substring Without Repeating Characters** [C++ Code](./_168_longest_substring_without_repeating_characters.cpp)
   - **File**: _168_longest_substring_without_repeating_characters.cpp
   - **Description**: Given a string, find the length of the longest substring without repeating characters.
   - **Approach**: 
     - We use a sliding window approach with two pointers (`left` and `right`) to represent the current substring.
     - We also use a hash map (unordered_map) to store the last index of each character.
     - As we move the `right` pointer, we check if the current character has been seen before and if it is within the current window.
     - If it is, we move the `left` pointer to the right of the last occurrence of the character.
     - We update the hash map with the current character's index and calculate the maximum length of the substring.
   - **Time Complexity**: O(n), where `n` is the length of the string.
   - **Space Complexity**: O(min(m, n)), where `m` is the size of the character set (e.g., 26 for lowercase English letters).

---