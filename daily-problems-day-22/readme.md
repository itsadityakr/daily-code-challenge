## Day 22 - Problems

### 75. **Squares of a Sorted Array** [🧲](./_75_squares_of_a_sorted_array.cpp)
---
   - **File**: _75_squares_of_a_sorted_array.cpp
   - **Description**: Given a sorted array `nums` of integers, the task is to return a new array that contains the squares of each number from the original array, sorted in non-decreasing order. The input array is sorted in non-decreasing order, but it may contain both negative and positive numbers.
   
   - **Approach**: 

     The problem asks us to return the squares of the numbers in a sorted array, but instead of directly squaring and sorting, we can use a more efficient two-pointer approach.

     1. **Understanding the Problem**: The array is already sorted, but it might contain negative numbers. Squaring negative numbers makes them positive, and this means the largest squares will either come from the largest positive number or the largest negative number in the array. Therefore, we need a way to pick the largest square first and place it in the result array.

     2. **Two-pointer technique**:
        - We initialize two pointers: one at the beginning (`left = 0`) and one at the end (`right = n - 1`) of the array.
        - At each step, compare the squares of the elements at the left and right pointers.
        - If the square of the number at the `left` pointer is greater than the square of the number at the `right` pointer, place the square of the `left` pointer into the `result` array at the correct position (starting from the end of the array).
        - If the square of the `right` pointer is greater, place its square into the result array instead.
        - Continue this process until all numbers are processed.

     3. **Why This Approach Works**:
        - Since the array is sorted, the largest squares will always be at the edges (either at the left or the right of the array).
        - By comparing the squares of both ends, we ensure that the largest square gets placed first, and the result array is filled in descending order from the end.
        - After processing each pair of numbers, we move the pointers inward and continue until the array is fully processed.

     4. **Efficient Sorting**:
        - Instead of squaring all numbers and then sorting the entire array, this approach ensures we place each squared number directly into its correct position, resulting in O(n) time complexity.

   - **Time Complexity**: 
     - The time complexity is **O(n)** because we only traverse the array once, and at each step, we perform constant-time operations (comparison and assignment).

   - **Space Complexity**: 
     - The space complexity is **O(n)** because we use an additional array `result` to store the squared values.

---