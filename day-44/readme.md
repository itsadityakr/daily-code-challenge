## Day 44 - Problems

---

### 169. **Floor in a Sorted Array** [C++ Code](./_169_floor_in_a_sorted_array.cpp)
   - **File**: _169_floor_in_a_sorted_array.cpp
   - **Description**: Given a sorted array and a number `x`, find the floor and ceil of `x` in the array. The floor of `x` is the largest element in the array that is less than or equal to `x`, and the ceil of `x` is the smallest element in the array that is greater than or equal to `x`.
   - **Approach**: 
     - We initialize two variables, `floor` and `ceil`, to keep track of the largest element less than or equal to `x` and the smallest element greater than or equal to `x`, respectively.
     - We iterate through the array and update `floor` and `ceil` based on the current element:
       - If the current element is less than or equal to `x` and greater than the current `floor`, we update `floor`.
       - If the current element is greater than or equal to `x` and less than the current `ceil`, we update `ceil`.
     - After iterating through the array, we check if `floor` and `ceil` were updated. If they were, we store their values in the result vector; otherwise, we store `-1` to indicate that no valid floor or ceil was found.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. We traverse the array once.
   - **Space Complexity**: O(1), as we use a constant amount of extra space.

---

### 170. **Ceil the Floor** [C++ Code](./_170_ceil_the_floor.cpp)
   - **File**: _170_ceil_the_floor.cpp
   - **Description**: This problem is similar to the previous one. Given a sorted array and a number `x`, find the floor and ceil of `x` in the array.
   - **Approach**: 
     - The approach is identical to the previous problem. We initialize `floor` and `ceil` and iterate through the array to find the appropriate values.
     - We update `floor` and `ceil` based on the current element and store the results in a vector.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. We traverse the array once.
   - **Space Complexity**: O(1), as we use a constant amount of extra space.

---

### 171. **Search Insert Position** [C++ Code](./_171_search_insert_position.cpp)
   - **File**: _171_search_insert_position.cpp
   - **Description**: Given a sorted array and a target value, return the index where the target would be inserted to maintain the sorted order. If the target is already present, return its index.
   - **Approach**: 
     - We use binary search to efficiently find the position where the target should be inserted.
     - We initialize two pointers, `low` and `high`, to the start and end of the array, respectively.
     - We repeatedly calculate the middle index (`mid`) and compare the element at `mid` with the target:
       - If the element at `mid` is equal to the target, we return `mid`.
       - If the element at `mid` is less than the target, we move the `low` pointer to `mid + 1`.
       - If the element at `mid` is greater than the target, we move the `high` pointer to `mid - 1`.
     - If the target is not found, the `low` pointer will point to the position where the target should be inserted.
   - **Time Complexity**: O(log n), where `n` is the number of elements in the array. Binary search halves the search space in each iteration.
   - **Space Complexity**: O(1), as we use a constant amount of extra space.

---

### 172. **Find First and Last Position of Element in Sorted Array** [C++ Code](./_172_find_first_and_last_position_of_element_in_sorted_array.cpp)
   - **File**: _172_find_first_and_last_position_of_element_in_sorted_array.cpp
   - **Description**: Given a sorted array and a target value, find the starting and ending position of the target in the array. If the target is not found, return `[-1, -1]`.
   - **Approach**: 
     - We use two separate binary search functions to find the first and last occurrence of the target.
     - For the first occurrence:
       - We perform a binary search and when we find the target, we continue searching in the left half to find the earliest occurrence.
     - For the last occurrence:
       - We perform a binary search and when we find the target, we continue searching in the right half to find the latest occurrence.
     - We return the indices of the first and last occurrences.
   - **Time Complexity**: O(log n), where `n` is the number of elements in the array. We perform two binary searches.
   - **Space Complexity**: O(1), as we use a constant amount of extra space.

---

### 173. **Number of Occurrence** [C++ Code](./_173_number_of_occurence.cpp)
   - **File**: _173_number_of_occurence.cpp
   - **Description**: Given a sorted array and a target value, find the number of occurrences of the target in the array.
   - **Approach**: 
     - We use the same approach as the previous problem to find the first and last occurrence of the target.
     - Once we have the indices of the first and last occurrences, we calculate the number of occurrences as `last - first + 1`.
     - If the target is not found, we return `0`.
   - **Time Complexity**: O(log n), where `n` is the number of elements in the array. We perform two binary searches.
   - **Space Complexity**: O(1), as we use a constant amount of extra space.

---