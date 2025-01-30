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