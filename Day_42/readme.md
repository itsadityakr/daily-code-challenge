### Day 42 - Problems

---

## 152. **Find Unique Element** [CPP Code](./_152_find_unique_element.cpp)  
- **File**: _152_find_unique_element.cpp_  
- **Description**: Given an array where each element appears exactly `k` times except for one unique element that appears less than `k` times, find that unique element.  
- **Approach**:  
  1. **Use a Hash Map (unordered_map)**:  
     - Create a hash map to store the frequency of each number in the array.  
     - Iterate over the array and update the frequency of each element.  
  2. **Find the Unique Element**:  
     - Iterate over the hash map.  
     - Check which element has a frequency that is *not a multiple of `k`*.  
     - Return that element.  
  3. **Edge Cases**:  
     - If all numbers appear `k` times, return `-1`.  
     - If the array has only one number, return that number.  
- **Time Complexity**: **O(N)** (where N is the number of elements in the array, as we traverse the array twice).  
- **Space Complexity**: **O(N)** (as we store the frequencies of elements in a hash map).  

---

## 153. **Sum of Unique Elements** [CPP Code](./_153_sum_of_unique_elements.cpp)  
- **File**: _153_sum_of_unique_elements.cpp_  
- **Description**: Given an array, return the sum of elements that appear exactly once.  
- **Approach**:  
  1. **Use a Hash Map (unordered_map)**:  
     - Store the frequency of each element in a hash map.  
  2. **Calculate Sum**:  
     - Iterate over the hash map.  
     - If an element appears exactly once, add it to the sum.  
  3. **Edge Cases**:  
     - If all elements appear more than once, return `0`.  
     - If the array has only one element, return that element.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

---

## 154. **Find the Frequency** [CPP Code](./_154_find_the_frequency.cpp)  
- **File**: _154_find_the_frequency.cpp_  
- **Description**: Given an array and a target element `x`, return its frequency (number of occurrences).  
- **Approach**:  
  1. **Use a Hash Map**:  
     - Store the frequency of each element in a hash map.  
  2. **Find Frequency of `x`**:  
     - If `x` exists in the map, return its frequency.  
     - Otherwise, return `0`.  
  3. **Edge Cases**:  
     - If `x` is not in the array, return `0`.  
     - If `x` appears only once, return `1`.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

---

## 155. **Frequencies in a Limited Array** [CPP Code](./_155_frequencies_in_a_limited_array.cpp)  
- **File**: _155_frequencies_in_a_limited_array.cpp_  
- **Description**: Given an array of numbers from `1` to `N`, return an array where the `i-th` index contains the frequency of `(i+1)`.  
- **Approach**:  
  1. **Use a Hash Map to Count Frequencies**  
  2. **Create a Result Array (`series`)**:  
     - Initialize an array of size `N` with zeros.  
     - Fill in the frequencies for numbers that exist in the input array.  
  3. **Edge Cases**:  
     - If an element is missing from the input, it remains `0` in the result.  
     - If all numbers are present exactly once, return an array of all `1`s.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

---

## 156. **Check if Array Contains Duplicates** [CPP Code](./_156_check_if_array_contains_duplicated.cpp)  
- **File**: _156_check_if_array_contains_duplicated.cpp_  
- **Description**: Check if an array contains duplicate elements.  
- **Approach**:  
  1. **Use a Hash Set (`unordered_set`)**:  
     - Iterate through the array.  
     - If an element is already in the set, return `true`.  
     - Otherwise, add it to the set.  
  2. **Edge Cases**:  
     - If the array is empty or has only one element, return `false`.  
     - If all elements are distinct, return `false`.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

---

## 157. Find the Duplicate Number [.cpp Code](./_157_find_the_duplicate_number.cpp)  
- **File**: _157_find_the_duplicate_number.cpp_  
- **Description**: Given an array of `N+1` integers where each integer is in the range `1` to `N` and one number appears **more than once**, find the duplicate number.  
- **Approach**:  
  1. **Use a Hash Map (unordered_map)**:  
     - Iterate through the array and store the frequency of each number in a hash map.  
  2. **Find the Duplicate**:  
     - Iterate over the hash map and find the number whose count is more than `1`.  
  3. **Edge Cases**:  
     - If all numbers are distinct (which shouldn't be the case as per the problem constraints).  
     - If the duplicate number appears multiple times.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(N)**  

---

## 158. First Unique Character in a String [.cpp Code](./_158_first_unique_character_in_a_string.cpp)  
- **File**: _158_first_unique_character_in_a_string.cpp_  
- **Description**: Given a string, find the index of the **first unique character** (a character that appears exactly once). If no unique character exists, return `-1`.  
- **Approach**:  
  1. **Use a Hash Map (unordered_map)**:  
     - Traverse the string and store the frequency of each character in a hash map.  
  2. **Find the First Unique Character**:  
     - Traverse the string again and return the index of the first character with frequency `1`.  
  3. **Edge Cases**:  
     - If all characters are the same, return `-1`.  
     - If the string has only one character, return `0`.  
- **Time Complexity**: **O(N)**  
- **Space Complexity**: **O(1)** (Since the number of unique characters is at most `26` for lowercase English letters)  

---

## 159. Union of Arrays with Duplicates [.cpp Code](./_159_union_of_arrays_with_duplicates.cpp)  
- **File**: _159_union_of_arrays_with_duplicates.cpp_  
- **Description**: Given two arrays, find the total number of unique elements present in either of the arrays (union operation).  
- **Approach**:  
  1. **Using Hash Map (unordered_map)**:  
     - Insert elements of both arrays into a hash map.  
     - Count the unique keys in the map.  
  2. **Alternative Approach - Using Hash Set (unordered_set)**:  
     - Insert all elements from both arrays into a hash set.  
     - The size of the hash set gives the total unique elements.  
  3. **Edge Cases**:  
     - If one array is empty, return the size of the other array.  
     - If both arrays are empty, return `0`.  
- **Time Complexity**: **O(N + M)**  
- **Space Complexity**: **O(N + M)**  

---

## 160. Intersection of Two Arrays [.cpp Code](./_160_intersection_of_two_arrays.cpp)  
- **File**: _160_intersection_of_two_arrays.cpp_  
- **Description**: Given two arrays, return a new array that contains only the elements that appear in **both arrays** (intersection operation).  
- **Approach**:  
  1. **Using Hash Set (unordered_set)**:  
     - Store all elements from the first array in a hash set.  
     - Iterate through the second array and check if any element exists in the set. If it does, store it in another set (to avoid duplicates in the output).  
  2. **Edge Cases**:  
     - If one or both arrays are empty, return an empty array.  
     - If there are no common elements, return an empty array.  
- **Time Complexity**: **O(N + M)**  
- **Space Complexity**: **O(min(N, M))**  

---
