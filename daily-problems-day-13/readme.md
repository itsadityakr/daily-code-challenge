## Day 13 - Problems

---

### 53. **Kadane's Algorithm - Maximum Subarray Sum** [🧲](./_53_kadanes_algorithm_maximum_sub_array_sum.cpp)
   - **File**: _53_kadanes_algorithm_maximum_sub_array_sum.cpp
   - **Description**: Given an array of integers, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
   - **Approach**: 
     1. Initialize two variables:
        - `max_sum` to store the maximum subarray sum found so far (start with the first element).
        - `current_sum` to store the sum of the current subarray being processed (start with the first element).
     2. Iterate through the array starting from the second element:
        - For each element, decide whether to:
          - Add it to the current subarray (`current_sum + nums[i]`), or
          - Start a new subarray with the current element (`nums[i]`).
        - Update `current_sum` to the maximum of these two choices.
     3. Update `max_sum` if the current subarray's sum (`current_sum`) is greater than the previously recorded `max_sum`.
     4. Continue this process until all elements have been processed.
     5. Return `max_sum` as the result.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the array.
   - **Space Complexity**: \(O(1)\), as no additional data structures are used.

---

### 54. **Trapping Rain Water** [🧲](./_54_trapping_rain_water.cpp)
   - **File**: _54_trapping_rain_water.cpp
   - **Description**: Given \(n\) non-negative integers representing the height of bars, compute how much water it can trap after raining.
   - **Approach**: 
     1. Use two pointers, `left` and `right`, to iterate from both ends of the array toward the center:
        - `left` starts at index 0.
        - `right` starts at the last index.
     2. Maintain two variables, `left_max` and `right_max`, to store the highest bar encountered so far from the left and right, respectively.
     3. While `left` is less than `right`:
        - If the bar at `left` is shorter than the bar at `right`:
          - If `height[left]` is greater than or equal to `left_max`, update `left_max`.
          - Otherwise, calculate the water trapped at `left` as `left_max - height[left]` and add it to the total.
          - Move the `left` pointer one step to the right.
        - If the bar at `right` is shorter than or equal to the bar at `left`:
          - If `height[right]` is greater than or equal to `right_max`, update `right_max`.
          - Otherwise, calculate the water trapped at `right` as `right_max - height[right]` and add it to the total.
          - Move the `right` pointer one step to the left.
     4. Return the total trapped water.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the height array.
   - **Space Complexity**: \(O(1)\), as only pointers and a few variables are used.

---

### 55. **Longest Consecutive Subsequence** [🧲](./_55_longest_consecutive_subsequence.cpp)
   - **File**: _55_longest_consecutive_subsequence.cpp
   - **Description**: Find the length of the longest consecutive sequence in an unsorted array of integers.
   - **Approach**: 
     1. Sort the input array to bring all consecutive numbers together.
     2. Use `unique()` to remove duplicate elements and reduce the array size.
     3. Initialize two variables:
        - `count` to count the length of the current consecutive sequence (start with 1).
        - `maxcount` to track the longest consecutive sequence found so far.
     4. Traverse the sorted array:
        - For each pair of consecutive elements, check if the second element is exactly one more than the first:
          - If true, increment `count`.
          - Otherwise, update `maxcount` with `count` if it's larger, and reset `count` to 1.
     5. After the loop, update `maxcount` one final time in case the longest sequence ends at the last element.
     6. Return `maxcount` as the result.
   - **Time Complexity**: \(O(n log n)\), dominated by the sorting operation.
   - **Space Complexity**: \(O(n)\), required for the sorted and deduplicated array.

---

### 56. **Best Time to Buy and Sell Stock** [🧲](./_56_best_time_to_buy_and_sell_stock.cpp)
   - **File**: _56_best_time_to_buy_and_sell_stock.cpp
   - **Description**: Given an array where each element represents the price of a stock on a given day, find the maximum profit you can achieve from one transaction (buy and sell once).
   - **Approach**: 
     1. Initialize two variables:
        - `min_price` to track the minimum stock price seen so far (start with `INT_MAX`).
        - `max_profit` to track the maximum profit found so far (start with 0).
     2. Traverse the array of prices:
        - For each price, update `min_price` to be the smaller of the current `min_price` or the current price.
        - Calculate the potential profit as the difference between the current price and `min_price`.
        - Update `max_profit` to be the larger of the current `max_profit` or the potential profit.
     3. After processing all prices, return `max_profit` as the result.
   - **Time Complexity**: \(O(n)\), where \(n\) is the size of the prices array.
   - **Space Complexity**: \(O(1)\), as only a few variables are used.

---
