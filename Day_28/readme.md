## Day 28 - Problems

---

### X94. **Sort Colors** [CPP Code](./_94_sort_0_1_2.cpp)
   - **File**: _94_sort_0_1_2.cpp
   - **Description**: 
     Given an array with numbers 0, 1, and 2, representing colors, sort the array so that all 0's come first, followed by all 1's and all 2's. This is also known as the "Dutch National Flag problem."
   - **Approach**: 
     The approach to solving this problem involves counting the occurrences of 0's, 1's, and 2's in the array, then modifying the array accordingly. Here's a step-by-step breakdown:
     1. Initialize three variables: `zeros`, `ones`, and `twos` to count how many 0's, 1's, and 2's are in the array.
     2. Traverse through the array, increment the respective count (i.e., if the element is 0, increment `zeros`, etc.).
     3. After counting the occurrences of each number, use these counts to modify the array. 
        - First, fill the positions of the array with `zeros` number of 0's, 
        - Then, the next `ones` positions with 1's, 
        - Finally, the rest of the array will be filled with 2's.
   - **Time Complexity**: O(n), where n is the size of the input array. We traverse the array twice: once for counting and once for placing the values.
   - **Space Complexity**: O(1), as we are only using a constant amount of extra space for the counts.

---

### X95. **Majority Element** [CPP Code](./_95_majority_element.cpp)
   - **File**: _95_majority_element.cpp
   - **Description**: 
     Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. It is guaranteed that a majority element always exists.
   - **Approach**: 
     The Boyer-Moore Voting Algorithm is used to solve this problem efficiently:
     1. Initialize two variables: `candidate` and `count`.
     2. Traverse the array:
        - If the count is 0, assign the current number to `candidate` and set `count` to 1.
        - Otherwise, increment or decrement `count` depending on whether the current number matches the candidate.
     3. After the traversal, the candidate will be the majority element.
   - **Time Complexity**: O(n), where n is the size of the input array. We only make one pass through the array.
   - **Space Complexity**: O(1), since we are only using a fixed amount of extra space for the variables.

---

### X96. **Maximum Subarray (Kadane's Algorithm)** [CPP Code](./_96_maximum_subarray_kadanes_algorithm.cpp)
   - **File**: _96_maximum_subarray_kadanes_algorithm.cpp
   - **Description**: 
     Given an integer array, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
   - **Approach**: 
     Kadane's Algorithm is an efficient way to solve the problem:
     1. Initialize two variables: `maxSum` and `currentSum`. Set both to the first element of the array.
     2. Iterate through the array starting from the second element:
        - Update `currentSum` to be either the current element or the sum of the current element and `currentSum`, whichever is larger.
        - Update `maxSum` to be the maximum of `maxSum` and `currentSum`.
     3. The value of `maxSum` at the end of the iteration is the answer.
   - **Time Complexity**: O(n), where n is the size of the input array. The algorithm only requires one pass through the array.
   - **Space Complexity**: O(1), as the solution only uses a constant amount of extra space for tracking the sum.

---

### X97. **Subarrays with Sum Equals K** [CPP Code](./_97_subarrays_with_sum_equals_k.cpp)
   - **File**: _97_subarrays_with_sum_equals_k.cpp
   - **Description**: 
     Given an array of integers and an integer k, find all the continuous subarrays whose sum equals k.
   - **Approach**: 
     This problem can be solved using a prefix sum and a hash map:
     1. Compute the prefix sum as you iterate through the array. The prefix sum at index `i` is the sum of all elements from the start to index `i`.
     2. Use a hash map to store the frequencies of each prefix sum encountered so far.
     3. For each prefix sum, check if the difference between the current prefix sum and `k` exists in the hash map. If it does, that means there exists a subarray that sums to `k`.
     4. Add all valid subarrays to the result.
   - **Time Complexity**: O(n), where n is the size of the array. Each element is processed once.
   - **Space Complexity**: O(n), as the hash map stores the prefix sums and their frequencies.

---

### X98. **Stock Buy and Sell** [CPP Code](./_98_stock_buy_and_sell.cpp)
   - **File**: _98_stock_buy_and_sell.cpp
   - **Description**: 
     Given an array where each element represents the price of a stock on a given day, find the maximum profit you can make by buying and selling the stock at most once.
   - **Approach**: 
     The strategy here is to track the minimum price encountered so far and calculate the potential profit at each step:
     1. Initialize `min_price` to a very large number and `max_profit` to 0.
     2. Iterate through the price array:
        - For each price, check if it's lower than `min_price`, and update `min_price` accordingly.
        - Calculate the profit by subtracting `min_price` from the current price and update `max_profit` if the profit is higher than the current `max_profit`.
     3. Return the maximum profit found.
   - **Time Complexity**: O(n), where n is the size of the price array. Each element is processed once.
   - **Space Complexity**: O(1), as we only use a constant amount of extra space to store `min_price` and `max_profit`.

---