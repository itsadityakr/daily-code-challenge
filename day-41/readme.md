### Day 41 - Problems

---

### 148. **Recursive Bubble Sort** [.cpp Code](./_148_recursive_bubble_sort.cpp)
   - **Description**: Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order. The recursive version reduces the problem size by one in each recursive call.
   - **Approach**:
     1. **Base Case**:
        - If the array size is 1, it’s already sorted, so stop the recursion.
     2. **Recursive Case**:
        - Perform a single pass through the array:
          - Compare each pair of adjacent elements.
          - If they are in the wrong order (e.g., `arr[i] > arr[i + 1]`), swap them.
        - After one pass, the largest element will "bubble up" to the end of the array.
        - Now, recursively sort the remaining part of the array (excluding the last element).
     3. **Repeat**:
        - Continue this process until the entire array is sorted.
   - **Key Points**:
     - Each recursive call reduces the problem size by one.
     - The largest unsorted element is placed in its correct position in each pass.
   - **Time Complexity**: O(n²) - Inefficient for large datasets.
   - **Space Complexity**: O(n) - Due to the recursion stack.

---

### 149. **Recursive Insertion Sort** [.cpp Code](./_149_recursive_insertion_sort.cpp)
   - **Description**: Insertion Sort builds the final sorted array one element at a time. The recursive version sorts the array by inserting the last element into its correct position in the already sorted part.
   - **Approach**:
     1. **Base Case**:
        - If the array size is 1, it’s already sorted, so stop the recursion.
     2. **Recursive Case**:
        - Recursively sort the first `n-1` elements of the array.
        - Now, take the last element (`arr[n-1]`) and insert it into its correct position in the already sorted part of the array.
        - To insert:
          - Compare the last element with the elements in the sorted part from right to left.
          - Shift elements greater than the last element one position to the right.
          - Place the last element in its correct position.
     3. **Repeat**:
        - Continue this process until the entire array is sorted.
   - **Key Points**:
     - The recursive call sorts the smaller subarray, and the insertion step places the last element in its correct position.
   - **Time Complexity**: O(n²) - Inefficient for large datasets.
   - **Space Complexity**: O(n) - Due to the recursion stack.

---

### 150. **Selection Sort** [.cpp Code](./_150_selection_sort.cpp)
   - **Description**: Selection Sort repeatedly selects the smallest element from the unsorted portion and swaps it with the first unsorted element.
   - **Approach**:
     1. **Iterate**:
        - Start with the entire array as unsorted.
        - For each position `i` in the array (from `0` to `n-1`):
          - Find the smallest element in the unsorted portion of the array (from `i` to `n-1`).
     2. **Swap**:
        - Swap the smallest element found with the element at position `i`.
        - Now, the first `i+1` elements are sorted.
     3. **Repeat**:
        - Continue this process until the entire array is sorted.
   - **Key Points**:
     - In each iteration, the smallest unsorted element is placed in its correct position.
   - **Time Complexity**: O(n²) - Inefficient for large datasets.
   - **Space Complexity**: O(1) - In-place sorting, no extra space required.

---

### 151. **Binary Search** [.cpp Code](./_151_binary_search.cpp)
   - **Description**: Binary Search is an efficient algorithm for finding an item in a sorted list by repeatedly dividing the search range in half.
   - **Approach**:
     1. **Initialize**:
        - Set two pointers: `low` (start of the array) and `high` (end of the array).
     2. **Middle Element**:
        - Calculate the middle index: `mid = low + (high - low) / 2`.
     3. **Comparison**:
        - If the middle element is equal to the target, return its index.
        - If the middle element is less than the target, search the right half (set `low = mid + 1`).
        - If the middle element is greater than the target, search the left half (set `high = mid - 1`).
     4. **Repeat**:
        - Continue this process until the target is found or the search range is exhausted (`low > high`).
   - **Key Points**:
     - Binary Search works only on **sorted arrays**.
     - Each comparison reduces the search range by half, making it very efficient.
   - **Time Complexity**: O(log n) - Very efficient for large datasets.
   - **Space Complexity**: O(1) - No extra space required.

---