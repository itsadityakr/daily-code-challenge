## Day 86 - Problems  

---

### 303. **Left Rotate the Array by One Place** [C++ Code](./_303_Left_rotate_the_array_by_one_place.cpp)

- **File**: _303_Left_rotate_the_array_by_one_place.cpp  
- **Description**:  
  - Given an array, rotate it to the left by one place.  
  - For example, if the array is `[1, 2, 3, 4, 5]`, after rotating it to the left by one place, it becomes `[2, 3, 4, 5, 1]`.  
  - Constraints: The array is non-empty, and the rotation is in-place (no extra space is used).

- **Understanding the Problem**:  
  - Imagine you have a row of numbered blocks. Rotating the array to the left by one place means moving the first block to the end of the row.  
  - Example:  
    - Input: `[1, 2, 3, 4, 5]`  
    - Output: `[2, 3, 4, 5, 1]`  
  - The first element (`1`) is moved to the end, and all other elements shift one place to the left.

- **Pseudocode**:
```
1. Store the first element of the array in a temporary variable.
2. Shift all elements one place to the left.
3. Place the temporary variable (stored first element) at the end of the array.
```

- **Approach**:  
  1. **Step 1**: Save the first element of the array in a temporary variable. This is because we will overwrite it when shifting the elements.  
  2. **Step 2**: Use a loop to shift all elements one place to the left. For example, the element at index `1` moves to index `0`, the element at index `2` moves to index `1`, and so on.  
  3. **Step 3**: Place the temporary variable (the original first element) at the last position of the array.  
  4. This approach ensures that the rotation is done in-place, meaning no extra space is used.

- **Key Concepts Explained**:  
  - **In-place operation**: Modifying the array without using additional memory for another array.  
  - **Temporary variable**: A variable used to store a value temporarily to avoid losing it during operations.  

- **Time Complexity**: O(n), where `n` is the size of the array. We loop through the array once to shift the elements.  
- **Space Complexity**: O(1), as we are using only a constant amount of extra space (the temporary variable).

- **Dry Run**:  
  - Input: `[1, 2, 3, 4, 5]`  
  - Step 1: Store `1` in a temporary variable.  
  - Step 2: Shift elements: `[2, 3, 4, 5, 5]` (last element is still `5`).  
  - Step 3: Place the temporary variable at the end: `[2, 3, 4, 5, 1]`.  
  - Output: `[2, 3, 4, 5, 1]`.

---

### 304. **Left Rotate the Array by K Places** [C++ Code](./_304_Left_rotate_the_array_by_K_places.cpp)

- **File**: _304_Left_rotate_the_array_by_K_places.cpp  
- **Description**:  
  - Given an array and an integer `k`, rotate the array to the left by `k` places.  
  - For example, if the array is `[1, 2, 3, 4, 5, 6, 7]` and `k = 3`, the output should be `[4, 5, 6, 7, 1, 2, 3]`.  
  - Constraints: The array is non-empty, and `k` can be larger than the size of the array.

- **Understanding the Problem**:  
  - Rotating the array to the left by `k` places means moving the first `k` elements to the end of the array.  
  - Example:  
    - Input: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
    - Output: `[4, 5, 6, 7, 1, 2, 3]`  
  - The first three elements (`1, 2, 3`) are moved to the end, and the remaining elements shift to the left.

- **Pseudocode**:
```
1. Normalize `k` by taking `k % n` (where `n` is the size of the array) to handle cases where `k` is larger than `n`.
2. Reverse the first `k` elements of the array.
3. Reverse the remaining `n - k` elements of the array.
4. Reverse the entire array.
```

- **Approach**:  
  1. **Step 1**: Normalize `k` by taking `k % n`. This ensures that if `k` is larger than the size of the array, we only rotate by the necessary amount.  
  2. **Step 2**: Reverse the first `k` elements of the array. This moves the first `k` elements to the end but in reverse order.  
  3. **Step 3**: Reverse the remaining `n - k` elements of the array. This corrects the order of the remaining elements.  
  4. **Step 4**: Reverse the entire array to get the final rotated array.  
  5. This approach ensures that the rotation is done in-place with minimal extra space.

- **Key Concepts Explained**:  
  - **Reversing an array**: Swapping elements symmetrically around the center of the array.  
  - **Modulo operation**: Used to handle cases where `k` is larger than the size of the array.  

- **Time Complexity**: O(n), where `n` is the size of the array. We reverse parts of the array multiple times, but each reversal takes linear time.  
- **Space Complexity**: O(1), as we are using only a constant amount of extra space.

- **Dry Run**:  
  - Input: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
  - Step 1: Normalize `k`: `k = 3 % 7 = 3`.  
  - Step 2: Reverse first `k` elements: `[3, 2, 1, 4, 5, 6, 7]`.  
  - Step 3: Reverse remaining elements: `[3, 2, 1, 7, 6, 5, 4]`.  
  - Step 4: Reverse entire array: `[4, 5, 6, 7, 1, 2, 3]`.  
  - Output: `[4, 5, 6, 7, 1, 2, 3]`.

---

### 305. **Right Rotate the Array by K Places** [C++ Code](./_305_Right_rotate_the_array_by_K_places.cpp)

- **File**: _305_Right_rotate_the_array_by_K_places.cpp  
- **Description**:  
  - Given an array and an integer `k`, rotate the array to the right by `k` places.  
  - For example, if the array is `[1, 2, 3, 4, 5, 6, 7]` and `k = 3`, the output should be `[5, 6, 7, 1, 2, 3, 4]`.  
  - Constraints: The array is non-empty, and `k` can be larger than the size of the array.

- **Understanding the Problem**:  
  - Rotating the array to the right by `k` places means moving the last `k` elements to the beginning of the array.  
  - Example:  
    - Input: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
    - Output: `[5, 6, 7, 1, 2, 3, 4]`  
  - The last three elements (`5, 6, 7`) are moved to the beginning, and the remaining elements shift to the right.

- **Pseudocode**:
```
1. Normalize `k` by taking `k % n` (where `n` is the size of the array) to handle cases where `k` is larger than `n`.
2. Reverse the entire array.
3. Reverse the first `k` elements of the array.
4. Reverse the remaining `n - k` elements of the array.
```

- **Approach**:  
  1. **Step 1**: Normalize `k` by taking `k % n`. This ensures that if `k` is larger than the size of the array, we only rotate by the necessary amount.  
  2. **Step 2**: Reverse the entire array. This moves the last `k` elements to the front but in reverse order.  
  3. **Step 3**: Reverse the first `k` elements of the array. This corrects the order of the first `k` elements.  
  4. **Step 4**: Reverse the remaining `n - k` elements of the array. This corrects the order of the remaining elements.  
  5. This approach ensures that the rotation is done in-place with minimal extra space.

- **Key Concepts Explained**:  
  - **Reversing an array**: Swapping elements symmetrically around the center of the array.  
  - **Modulo operation**: Used to handle cases where `k` is larger than the size of the array.  

- **Time Complexity**: O(n), where `n` is the size of the array. We reverse parts of the array multiple times, but each reversal takes linear time.  
- **Space Complexity**: O(1), as we are using only a constant amount of extra space.

- **Dry Run**:  
  - Input: `[1, 2, 3, 4, 5, 6, 7]`, `k = 3`  
  - Step 1: Normalize `k`: `k = 3 % 7 = 3`.  
  - Step 2: Reverse entire array: `[7, 6, 5, 4, 3, 2, 1]`.  
  - Step 3: Reverse first `k` elements: `[5, 6, 7, 4, 3, 2, 1]`.  
  - Step 4: Reverse remaining elements: `[5, 6, 7, 1, 2, 3, 4]`.  
  - Output: `[5, 6, 7, 1, 2, 3, 4]`.

---

### 306. **Linear Search** [C++ Code](./_306_Linear_Search.cpp)

- **File**: _306_Linear_Search.cpp  
- **Description**:  
  - Given an array and a target element, find the index of the target element in the array.  
  - If the element is not present, return `-1`.  
  - Constraints: The array is non-empty, and the elements can be in any order.

- **Understanding the Problem**:  
  - Imagine you have a list of numbers, and you need to find the position of a specific number in the list.  
  - Example:  
    - Input: `[1, 2, 3, 4]`, target = `3`  
    - Output: `2` (since `3` is at index `2`)  
  - If the target is not in the list, return `-1`.

- **Pseudocode**:
```
1. Loop through each element in the array.
2. Compare the current element with the target.
3. If they match, return the current index.
4. If the loop ends without finding the target, return -1.
```

- **Approach**:  
  1. **Step 1**: Start from the first element of the array.  
  2. **Step 2**: Compare the current element with the target.  
  3. **Step 3**: If they match, return the current index.  
  4. **Step 4**: If no match is found after checking all elements, return `-1`.  
  5. This approach is straightforward and works for any array, but it may not be efficient for large arrays.

- **Key Concepts Explained**:  
  - **Linear Search**: A method to find an element in a list by checking each element one by one.  
  - **Index**: The position of an element in the array (starting from `0`).  

- **Time Complexity**: O(n), where `n` is the size of the array. In the worst case, we may need to check all elements.  
- **Space Complexity**: O(1), as no extra space is used.

- **Dry Run**:  
  - Input: `[1, 2, 3, 4]`, target = `3`  
  - Step 1: Check `1` (index `0`) → Not a match.  
  - Step 2: Check `2` (index `1`) → Not a match.  
  - Step 3: Check `3` (index `2`) → Match found.  
  - Output: `2`.

---

### 307. **Binary Search** [C++ Code](./_307_Binary_Search.cpp)

- **File**: _307_Binary_Search.cpp  
- **Description**:  
  - Given a sorted array and a target element, find the index of the target element using binary search.  
  - If the element is not present, return `-1`.  
  - Constraints: The array must be sorted in ascending order.

- **Understanding the Problem**:  
  - Imagine you have a sorted list of numbers, and you need to find the position of a specific number efficiently.  
  - Example:  
    - Input: `[1, 2, 3, 4, 5]`, target = `4`  
    - Output: `3` (since `4` is at index `3`)  
  - If the target is not in the list, return `-1`.

- **Pseudocode**:
```
1. Initialize two pointers: `low` (start of the array) and `high` (end of the array).
2. While `low` <= `high`:
   a. Calculate the middle index: `mid = low + (high - low) / 2`.
   b. If the middle element equals the target, return `mid`.
   c. If the middle element is less than the target, move `low` to `mid + 1`.
   d. If the middle element is greater than the target, move `high` to `mid - 1`.
3. If the loop ends without finding the target, return -1.
```

- **Approach**:  
  1. **Step 1**: Start with two pointers, `low` and `high`, representing the current search range.  
  2. **Step 2**: Calculate the middle index and compare the middle element with the target.  
  3. **Step 3**: If the middle element matches the target, return the index.  
  4. **Step 4**: If the middle element is less than the target, search the right half of the array.  
  5. **Step 5**: If the middle element is greater than the target, search the left half of the array.  
  6. **Step 6**: Repeat until the target is found or the search range is exhausted.  

- **Key Concepts Explained**:  
  - **Binary Search**: A divide-and-conquer algorithm that halves the search range in each step.  
  - **Sorted Array**: A prerequisite for binary search to work efficiently.  

- **Time Complexity**: O(log n), where `n` is the size of the array. The search range is halved in each step.  
- **Space Complexity**: O(1), as no extra space is used.

- **Dry Run**:  
  - Input: `[1, 2, 3, 4, 5]`, target = `4`  
  - Step 1: `low = 0`, `high = 4`, `mid = 2` → `3` < `4` → Move `low` to `3`.  
  - Step 2: `low = 3`, `high = 4`, `mid = 3` → `4` == `4` → Match found.  
  - Output: `3`.

---

### 308. **Bubble Sort** [C++ Code](./_308_Bubble_Sort.cpp)

- **File**: _308_Bubble_Sort.cpp  
- **Description**:  
  - Given an array, sort it in ascending order using the bubble sort algorithm.  
  - Constraints: The array is non-empty.

- **Understanding the Problem**:  
  - Imagine you have a list of numbers in random order, and you need to arrange them from smallest to largest.  
  - Example:  
    - Input: `[4, 1, 3, 9, 7]`  
    - Output: `[1, 3, 4, 7, 9]`  
  - Bubble sort works by repeatedly swapping adjacent elements if they are in the wrong order.

- **Pseudocode**:
```
1. Loop through the array from the first element to the second last element.
2. For each element, compare it with the next element.
3. If the current element is greater than the next element, swap them.
4. Repeat the process until no more swaps are needed.
```

- **Approach**:  
  1. **Step 1**: Start from the first element and compare it with the next element.  
  2. **Step 2**: If the current element is greater, swap them.  
  3. **Step 3**: Move to the next pair of elements and repeat the process.  
  4. **Step 4**: After one full pass, the largest element will be at the end.  
  5. **Step 5**: Repeat the process for the remaining unsorted portion of the array.  

- **Key Concepts Explained**:  
  - **Bubble Sort**: A simple sorting algorithm that repeatedly swaps adjacent elements if they are in the wrong order.  
  - **Swapping**: Exchanging the positions of two elements.  

- **Time Complexity**: O(n²), where `n` is the size of the array. In the worst case, we need to perform `n` passes.  
- **Space Complexity**: O(1), as no extra space is used.

- **Dry Run**:  
  - Input: `[4, 1, 3, 9, 7]`  
  - Pass 1: `[1, 3, 4, 7, 9]` (largest element `9` is at the end).  
  - Pass 2: `[1, 3, 4, 7, 9]` (no swaps needed).  
  - Output: `[1, 3, 4, 7, 9]`.

---

### 309. **Selection Sort** [C++ Code](./_309_Selection_Sort.cpp)

- **File**: _309_Selection_Sort.cpp  
- **Description**:  
  - Given an array, sort it in ascending order using the selection sort algorithm.  
  - Constraints: The array is non-empty.

- **Understanding the Problem**:  
  - Imagine you have a list of numbers in random order, and you need to arrange them from smallest to largest.  
  - Example:  
    - Input: `[4, 1, 3, 9, 7]`  
    - Output: `[1, 3, 4, 7, 9]`  
  - Selection sort works by repeatedly finding the smallest element and swapping it with the first unsorted element.

- **Pseudocode**:
```
1. Loop through the array from the first element to the second last element.
2. Find the smallest element in the unsorted portion of the array.
3. Swap the smallest element with the first unsorted element.
4. Repeat the process until the entire array is sorted.
```

- **Approach**:  
  1. **Step 1**: Start from the first element and find the smallest element in the array.  
  2. **Step 2**: Swap the smallest element with the first element.  
  3. **Step 3**: Move to the next element and repeat the process for the remaining unsorted portion.  
  4. **Step 4**: Repeat until the entire array is sorted.  

- **Key Concepts Explained**:  
  - **Selection Sort**: A sorting algorithm that repeatedly selects the smallest element and swaps it with the first unsorted element.  
  - **Swapping**: Exchanging the positions of two elements.  

- **Time Complexity**: O(n²), where `n` is the size of the array. In the worst case, we need to perform `n` passes.  
- **Space Complexity**: O(1), as no extra space is used.

- **Dry Run**:  
  - Input: `[4, 1, 3, 9, 7]`  
  - Pass 1: `[1, 4, 3, 9, 7]` (smallest element `1` is at the beginning).  
  - Pass 2: `[1, 3, 4, 9, 7]` (smallest element `3` is swapped with `4`).  
  - Pass 3: `[1, 3, 4, 9, 7]` (no change).  
  - Pass 4: `[1, 3, 4, 7, 9]` (smallest element `7` is swapped with `9`).  
  - Output: `[1, 3, 4, 7, 9]`.

---

### 310. **Insertion Sort** [C++ Code](./_310_Insertion_Sort.cpp)

- **File**: _310_Insertion_Sort.cpp  
- **Description**:  
  - Given an array, sort it in ascending order using the insertion sort algorithm.  
  - Constraints: The array is non-empty.

- **Understanding the Problem**:  
  - Imagine you have a list of numbers in random order, and you need to arrange them from smallest to largest.  
  - Example:  
    - Input: `[4, 1, 3, 9, 7]`  
    - Output: `[1, 3, 4, 7, 9]`  
  - Insertion sort works by building a sorted portion of the array one element at a time.

- **Pseudocode**:
```
1. Start from the second element and consider it as the key.
2. Compare the key with the elements before it and shift them to the right if they are greater.
3. Insert the key in its correct position.
4. Repeat the process for all elements.
```

- **Approach**:  
  1. **Step 1**: Start from the second element and treat it as the key.  
  2. **Step 2**: Compare the key with the elements before it and shift them to the right if they are greater.  
  3. **Step 3**: Insert the key in its correct position.  
  4. **Step 4**: Repeat the process for all elements.  

- **Key Concepts Explained**:  
  - **Insertion Sort**: A sorting algorithm that builds the sorted array one element at a time by inserting each element in its correct position.  
  - **Shifting**: Moving elements to the right to make space for the key.  

- **Time Complexity**: O(n²), where `n` is the size of the array. In the worst case, we need to perform `n` passes.  
- **Space Complexity**: O(1), as no extra space is used.

- **Dry Run**:  
  - Input: `[4, 1, 3, 9, 7]`  
  - Pass 1: `[1, 4, 3, 9, 7]` (key = `1`).  
  - Pass 2: `[1, 3, 4, 9, 7]` (key = `3`).  
  - Pass 3: `[1, 3, 4, 9, 7]` (key = `4`).  
  - Pass 4: `[1, 3, 4, 7, 9]` (key = `7`).  
  - Output: `[1, 3, 4, 7, 9]`.

---
