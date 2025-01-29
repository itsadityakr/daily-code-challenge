### Day 40 - Problems

---

### 142. **Container With Most Water** [.cpp Code](./_142_container_with_most_water.cpp)
   - **File**: _142_container_with_most_water.cpp
   - **Description**: Given an array of integers representing the heights of vertical lines, find two lines that together with the x-axis form a container that holds the most water.
   - **Approach**: 
     - We use a two-pointer approach, starting with one pointer at the beginning (`left`) and one at the end (`right`) of the array.
     - The area of the container is calculated as the distance between the two pointers (`weight`) multiplied by the minimum of the two heights (`minBarHeight`).
     - We move the pointer pointing to the shorter line inward, as moving the longer line would not increase the area.
     - We keep track of the maximum area found during this process.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. We only pass through the array once.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---

### 143. **Trapping Rain Water** [.cpp Code](./_143_trapping_rain_water.cpp)
   - **File**: _143_trapping_rain_water.cpp
   - **Description**: Given an array of non-negative integers representing an elevation map, compute how much water can be trapped after raining.
   - **Approach**: 
     - We use a two-pointer approach, starting with one pointer at the beginning (`left`) and one at the end (`right`) of the array.
     - We maintain two variables, `left_max` and `right_max`, to keep track of the highest bars encountered so far from the left and right.
     - We compare the heights at the `left` and `right` pointers:
       - If `left_max` is less than `right_max`, we move the `left` pointer forward and update `left_max`. The water trapped at the current position is `left_max - height[left]`.
       - Otherwise, we move the `right` pointer backward and update `right_max`. The water trapped at the current position is `right_max - height[right]`.
     - We accumulate the trapped water as we move the pointers.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. We only pass through the array once.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---

### 144. **Bubble Sort** [.cpp Code](./_144_bubble_sort.cpp)
   - **File**: _144_bubble_sort.cpp
   - **Description**: Implement the Bubble Sort algorithm to sort an array of integers in ascending order.
   - **Approach**: 
     - Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order.
     - We use two nested loops:
       - The outer loop runs from the first element to the second-to-last element.
       - The inner loop compares each pair of adjacent elements and swaps them if they are in the wrong order.
     - After each pass of the inner loop, the largest unsorted element "bubbles up" to its correct position.
     - The process repeats until the entire array is sorted.
   - **Time Complexity**: O(n^2), where `n` is the number of elements in the array. This is because we have two nested loops.
   - **Space Complexity**: O(1), as we are sorting the array in place and using a constant amount of extra space.

---

### 145. **Insertion Sort** [.cpp Code](./_145_insertion_sort.cpp)
   - **File**: _145_insertion_sort.cpp
   - **Description**: Implement the Insertion Sort algorithm to sort an array of integers in ascending order.
   - **Approach**: 
     - Insertion Sort works by building a sorted array one element at a time.
     - We start with the second element (index 1) and compare it with the elements before it.
     - If the current element is smaller than the previous element, we shift the previous elements to the right until we find the correct position for the current element.
     - We repeat this process for each element in the array until the entire array is sorted.
   - **Time Complexity**: O(n^2), where `n` is the number of elements in the array. This is because, in the worst case, we may have to shift elements multiple times.
   - **Space Complexity**: O(1), as we are sorting the array in place and using a constant amount of extra space.

---
### 146. **Merge Sort** [.cpp Code](./_146_merge_sort.cpp)
   - **Description**: Merge Sort is a sorting algorithm that divides the array into two halves, sorts each half, and then merges the sorted halves back together.
   - **Approach**:
     1. **Divide**:
        - Start with an unsorted array.
        - Find the middle point of the array: `mid = left + (right - left) / 2`.
        - Split the array into two halves:
          - Left half: from `left` to `mid`.
          - Right half: from `mid + 1` to `right`.
     2. **Conquer**:
        - Recursively sort the left half and the right half.
        - Keep dividing the array until each subarray has only one element (a single element is always sorted).
     3. **Combine (Merge)**:
        - Now, merge the two sorted halves back into a single sorted array.
        - Use two pointers, one for each half, to compare elements.
        - Take the smaller element from the two halves and place it in the original array.
        - Move the pointer of the half from which the element was taken.
        - Repeat this until all elements from both halves are merged.
        - If one half is exhausted, copy the remaining elements from the other half directly.
   - **Key Points**:
     - Merge Sort uses **recursion** to divide the problem into smaller subproblems.
     - The **merge step** is where the actual sorting happens by combining two sorted halves.
   - **Time Complexity**: O(n log n) - Efficient for large datasets.
   - **Space Complexity**: O(n) - Requires extra space for temporary arrays.

---

### 147. **Quick Sort** [.cpp Code](./_147_quick_sort.cpp)
   - **File**: _147_quick_sort.cpp
   - **Description**: Implement the Quick Sort algorithm to sort an array of integers in ascending order.
   - **Approach**: 
     - Quick Sort is a divide-and-conquer algorithm. It works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.
     - The pivot is then placed in its correct position, and the process is repeated recursively for the sub-arrays.
     - In this implementation, we choose the last element as the pivot.
     - The `partition` function rearranges the elements so that all elements less than the pivot come before it, and all elements greater than the pivot come after it.
     - The `quickSort` function recursively sorts the sub-arrays before and after the pivot.
   - **Time Complexity**: O(n log n) on average, where `n` is the number of elements in the array. In the worst case (e.g., when the array is already sorted), it can degrade to O(n^2).
   - **Space Complexity**: O(log n) due to the recursive call stack.

---