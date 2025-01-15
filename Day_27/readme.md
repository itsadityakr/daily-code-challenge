## Day 27 - Problems

---

### 89. **Max Consecutive Ones** [CPP Code](./_89_max_consecutive_ones.cpp)
   - **File**: _89_max_consecutive_ones.cpp
   - **Description**: Find the maximum number of consecutive 1s in a binary array.
   - **Approach**:
     1. **Initialize Counters**: Create two variables: `maxCount` to store the maximum consecutive 1s found and `currentCount` to count the current sequence of 1s.
     2. **Iterate through the Array**: Loop through each element of the binary array.
        - If the current element is 1, increase `currentCount` by 1 and update `maxCount` to be the larger of `maxCount` and `currentCount`.
        - If the current element is 0, reset `currentCount` to 0 because the sequence of 1s is interrupted.
     3. **Return the Result**: After processing the entire array, return the value of `maxCount` which contains the longest sequence of consecutive 1s.
     - **Why this works**: The solution works by keeping track of the longest sequence of consecutive 1s using simple comparisons. It's efficient because it only traverses the array once.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array, since we are iterating through the array once.
   - **Space Complexity**: \(O(1)\), as we only use a few variables for counting and don't use any additional space proportional to the input size.

---

### 90. **Find Single Element Along Pairs** [CPP Code](./_90_find_single_element_along_pairs.cpp)
   - **File**: _90_find_single_element_along_pairs.cpp
   - **Description**: Find the single element in a sorted array where every other element appears twice.
   - **Approach**:
     1. **Binary Search Setup**: Set up two pointers: `left` to the beginning of the array and `right` to the end.
     2. **Binary Search Loop**: Keep halving the search range:
        - Find the middle index `mid` and check if the element at `mid` forms a valid pair with the next or previous element.
        - If `mid` is even and `nums[mid] == nums[mid + 1]`, then the single element must be in the right half of the array (since elements on the left are paired).
        - If `mid` is odd and `nums[mid] == nums[mid - 1]`, again move to the right half.
        - If neither of these conditions hold, the single element must be on the left half.
     3. **Update Search Range**: Based on the above conditions, adjust the `left` and `right` pointers to narrow down the range.
     4. **Return the Result**: Once the search range is narrowed down, return the element at `left`, which will be the single element.
     - **Why this works**: The array is sorted and contains only one element that doesn't have a pair. Binary search is used to efficiently find this element by halving the search space at each step.
   - **Time Complexity**: \(O(\log n)\), due to the binary search reducing the search space by half each time.
   - **Space Complexity**: \(O(1)\), as no extra space is used other than a few variables for indices.

---

### 91. **Subarray with Sum K** [CPP Code](./_91_subarray_with_sum_k.cpp)
   - **File**: _91_subarray_with_sum_k.cpp
   - **Description**: Count the number of subarrays with a sum equal to \(k\).
   - **Approach**:
     1. **Prefix Sum Array**: Calculate the cumulative sum of the elements of the array at each index and store it in the `prefix` array.
        - `prefix[i]` will contain the sum of elements from `arr[0]` to `arr[i]`.
     2. **HashMap for Frequency**: Use a hashmap (`mp`) to store the frequency of prefix sums.
     3. **Check for Valid Subarrays**: For each `prefix[i]`:
        - If `prefix[i] == k`, it means that the subarray from index 0 to i has the sum equal to \(k\), so increment the answer.
        - If `prefix[i] - k` is already in the hashmap, it means there exists a subarray from some previous index to `i` whose sum equals \(k\), so add the frequency of `prefix[i] - k` to the answer.
        - Update the hashmap to include the current `prefix[i]`.
     4. **Return the Result**: After iterating through the array, the result will be the number of valid subarrays.
     - **Why this works**: By storing the cumulative sums, we can efficiently calculate the sum of any subarray. The hashmap helps in checking if a valid subarray exists with the desired sum in constant time.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array, since we loop through the array once and perform constant-time operations.
   - **Space Complexity**: \(O(n)\), due to the hashmap storing prefix sums.

---

### 92. **Maximum Sum of Distinct Subarrays with Length K** [CPP Code](./_92_maximum_sum_of_distinct_subarrays_with_length_k.cpp)
   - **File**: _92_maximum_sum_of_distinct_subarrays_with_length_k.cpp
   - **Description**: Find the maximum sum of a subarray of length \(k\) with all distinct elements.
   - **Approach**:
     1. **Sliding Window**: Use a sliding window of size \(k\) to traverse the array. The window will maintain the current subarray of size \(k\) as we move through the array.
     2. **Maintain Element Frequency**: Use a hashmap to keep track of the frequency of elements in the current window. This helps in ensuring that all elements are distinct.
     3. **Calculate Sum**: Maintain a variable `currentSum` that stores the sum of elements in the current window.
     4. **Adjust Window**: When the window size exceeds \(k\), remove the leftmost element from the window:
        - Subtract it from the sum and decrease its frequency in the hashmap.
        - If its frequency becomes 0, remove it from the hashmap.
     5. **Update Maximum Sum**: After adjusting the window, if the window contains exactly \(k\) distinct elements, check if `currentSum` is the largest found so far.
     6. **Return the Result**: After processing the entire array, return the maximum sum found for a subarray of size \(k\) with distinct elements.
     - **Why this works**: The sliding window allows us to efficiently maintain a subarray of size \(k\), while the hashmap ensures that the elements remain distinct. The sum is updated dynamically as the window slides, ensuring optimal performance.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array, since each element is added and removed from the hashmap at most once.
   - **Space Complexity**: \(O(k)\), for the hashmap storing at most \(k\) distinct elements.

---

### 93. **Two Sum** [CPP Code](./_93_two_sum.cpp)
   - **File**: _93_two_sum.cpp
   - **Description**: Find two indices such that their corresponding numbers add up to the target value.
   - **Approach**:
     1. **Hashmap for Lookup**: Use a hashmap (`mp`) to store each number's complement (i.e., `target - num`) as we traverse the array. The key is the number, and the value is its index.
     2. **Iterate through the Array**: For each number:
        - Calculate its complement (i.e., `target - num`).
        - If the complement already exists in the hashmap, return the index of the complement and the current index, as their sum equals the target.
        - If the complement doesn't exist, store the current number and its index in the hashmap.
     3. **Return the Result**: The result will be the two indices that satisfy the condition.
     - **Why this works**: The hashmap provides constant-time lookup, allowing us to efficiently find the pair that adds up to the target while traversing the array once.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array, as each lookup and insertion operation on the hashmap is \(O(1)\).
   - **Space Complexity**: \(O(n)\), due to the hashmap storing up to \(n\) elements.

---
