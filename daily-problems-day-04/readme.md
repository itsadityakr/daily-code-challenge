## Day 4 - Problems
---

### 13. **Count Frequency of Elements in a Range**
   - **File**: `_13_count_freq_in_range.cpp`
   - **Description**: Efficiently counts the frequency of elements within a given range using an auxiliary frequency array.
   - **Approach**: We initialize an array `freq_arr` with a size equal to `n`, where `n` is the number of elements. We iterate over the input array `nums` and for each element, we increment the corresponding index in `freq_arr`. This is done by subtracting 1 from the element to adjust it to a zero-based index. This ensures that the frequencies of all elements are counted correctly and stored efficiently.
   - **Time Complexity**: O(n), where `n` is the number of elements in the input array. The algorithm iterates through the array once to calculate the frequencies.
   - **Space Complexity**: O(n), as we use an extra array to store the frequency of each element.

---

### 14. **Count Frequencies of Array Elements in O(1) Extra Space**
   - **File**: `_14_count_the_frequencies_of_array_elements_in_O1_extra_space.cpp`
   - **Description**: Counts frequencies directly in the input array without using extra space by manipulating indices.
   - **Approach**: To count the frequency without using extra space, we modify the input array itself. Each time an element is encountered, we mark its presence by changing its corresponding index in the array. By using clever index manipulation (e.g., marking indices as negative or using modulo arithmetic), we are able to store the frequency information directly in the input array. This eliminates the need for any additional space, keeping the space complexity constant.
   - **Time Complexity**: O(n), as the algorithm processes each element in the array exactly once.
   - **Space Complexity**: O(1), since no extra space beyond the input array is used.

---

### 15. **Count Element with Maximum Frequency**
   - **File**: `_15_count_element_with_max_frequency.cpp`
   - **Description**: Finds the element with the highest frequency using an unordered map to track frequencies.
   - **Approach**: The function uses an unordered map to store the frequency of each element in the array. It then iterates over the map to track the element with the highest frequency. By maintaining a variable `maxFrequency`, we can ensure that we always know the most frequent element during the iteration.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array, since we need to iterate through all elements to calculate their frequencies.
   - **Space Complexity**: O(n), as we need extra space to store the frequencies in the map.

---

### 16. **Rearrange Array Elements Alternately (Max-Min)**
   - **File**: `_16_rearrange_array_elements_alternately_max_min.cpp`
   - **Description**: Rearranges elements so that the largest elements appear at even indices and the smallest at odd indices.
   - **Approach**: First, we sort the input array to make sure the smallest and largest elements are in known positions. Then, we use two pointers: one starting from the left (for smallest elements) and the other from the right (for largest elements). We alternate placing elements from the right and left ends into the result array, ensuring that the largest elements go to even indices and the smallest to odd indices.
   - **Time Complexity**: O(n log n), due to the sorting step. Sorting dominates the time complexity.
   - **Space Complexity**: O(n), since a new array is created to store the rearranged elements.

---

### 17. **Find the Second Largest Element in an Array**
   - **File**: `_17_second_largest_element_in_array.cpp`
   - **Description**: Identifies the second largest element by iterating through the array and comparing values.
   - **Approach**: We initialize two variables, `largest` and `second_largest`, to the smallest possible integer values. As we iterate through the array, we update `largest` and `second_largest` based on the values encountered. If a number is greater than the current `largest`, it becomes the new `largest`, and the old `largest` becomes the `second_largest`. If a number is smaller than `largest` but larger than `second_largest`, we update `second_largest`.
   - **Time Complexity**: O(n), where `n` is the number of elements in the array. We only need a single pass through the array.
   - **Space Complexity**: O(1), as we only use two variables to track the largest and second largest elements.

---

### 18. **Find Kth Largest Element**
   - **File**: `_18_find_kth_largest_element.cpp`
   - **Description**: Finds the kth largest element in an array using the QuickSelect algorithm for optimal performance.
   - **Approach**: We use the QuickSelect algorithm, which is a variation of the QuickSort algorithm. The array is partitioned around a pivot, and depending on the position of the pivot, we either recursively search the left or right partition. This process continues until we find the `k`th largest element. QuickSelect is more efficient than sorting because it only partially sorts the array.
   - **Time Complexity**: O(n) on average, but in the worst case, it can be O(n^2) due to poor pivot selection.
   - **Space Complexity**: O(1), as the algorithm is implemented in-place.

---

### 19. **Find Kth Smallest and Kth Largest Element**
   - **File**: `_19_find_kth_smallest_and_largest_element.cpp`
   - **Description**: Uses QuickSelect twice to find both the kth smallest and kth largest elements in an array.
   - **Approach**: We use the QuickSelect algorithm twice: once to find the `k`th smallest element and once to find the `k`th largest element. QuickSelect is called for each of these queries separately, allowing us to avoid the overhead of fully sorting the array.
   - **Time Complexity**: O(n) for each QuickSelect call, so overall time complexity is O(n).
   - **Space Complexity**: O(1), as the selection is done in-place.

---
### License
This repository is licensed under the MIT License.