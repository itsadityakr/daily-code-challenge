## Day 6 - Problems

---

### 26. **Reverse Array from a Given Position**
   - **File**: `_26_reverse_array.cpp`
   - **Description**: This problem involves reversing a part of an array starting from a given position `m` to the end. The task is to reverse the elements of the array starting from index `m + 1` to the last index, and then print the resulting array.
   - **Approach**: The array is traversed from the given position `m + 1` to the end, and elements are swapped in pairs. The process continues until the start index is greater than the end index.
   - **Time Complexity**: O(n) where `n` is the size of the array. We iterate through half of the array to reverse the elements.
   - **Space Complexity**: O(1) as we only use a constant amount of extra space for variables.

---

### 27. **Intersection and Union of Unsorted Arrays**
   - **File**: `_27_intersection_and_union_of_unsorted_array.cpp`
   - **Description**: This problem involves finding both the intersection and union of two unsorted arrays. The intersection contains elements that appear in both arrays, while the union contains all unique elements from both arrays.
   - **Approach**: 
     - **Intersection**: Use two unordered sets to store the elements of both arrays. Traverse the first set and check if each element is present in the second set. If found, add it to the result.
     - **Union**: Insert all elements from both arrays into a single unordered set to ensure uniqueness, then convert the set to a vector for the result.
   - **Time Complexity**: O(n + m), where `n` and `m` are the sizes of the two arrays. We iterate over both arrays to populate the sets and check for intersections.
   - **Space Complexity**: O(n + m) as we use additional sets to store elements of both arrays.

---

### 28. **Intersection and Union of Sorted Arrays**
   - **File**: `_28_intersection_and_union_of_sorted_array.cpp`
   - **Description**: This problem involves finding both the intersection and union of two sorted arrays. The intersection contains elements that appear in both arrays, while the union contains all unique elements from both arrays.
   - **Approach**: 
     - **Intersection**: Use a two-pointer technique to traverse both arrays simultaneously. Compare the elements at the pointers and if they are equal, add them to the result. If not, move the pointer that points to the smaller element.
     - **Union**: Similar to intersection, but when elements are unequal, add the smaller element to the result and move the corresponding pointer.
   - **Time Complexity**: O(n + m), where `n` and `m` are the sizes of the two arrays. We traverse both arrays once using the two-pointer technique.
   - **Space Complexity**: O(n + m) to store the resulting intersection and union arrays.

---