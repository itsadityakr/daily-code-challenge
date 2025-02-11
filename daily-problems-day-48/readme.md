## Day 48 - Problems

---

### 186. **Capacity To Ship Packages Within D Days** [C++ Code](./186_Capacity_To_Ship_Packages_Within_D_Days.cpp)
   - **File**: _186_Capacity_To_Ship_Packages_Within_D_Days.cpp
   - **Description**: Given an array of package weights, you need to find the minimum capacity of a ship that can ship all the packages within `D` days. Each day, the ship can carry a certain weight, and if the total weight of the packages exceeds the ship's capacity, they need to be shipped the next day. You need to determine the minimum capacity required to ship all packages within `D` days.
   - **Understanding the Problem**: Imagine you have a list of packages with different weights, and you need to ship them within a given number of days, `D`. The ship can only carry a certain amount of weight each day. The goal is to determine the smallest capacity the ship must have to get all packages delivered in the specified time.
   - **How to Approach the Problem**: 
     1. We need to find the minimum capacity of the ship. This means we need to test various capacities and check if they are sufficient to ship all packages in `D` days.
     2. Start with the maximum weight of any single package (since the ship must carry at least that much in one day).
     3. The ship's capacity could be as high as the sum of all the weights of the packages, because the ship could potentially carry everything in a single day.
     4. Use binary search to narrow down the possible ship capacities, and for each candidate capacity, check if it's possible to ship all packages within `D` days using that capacity.
   - **Approach**: 
     1. **Binary Search**: Start with a range for the capacity: `low = max(weight)` and `high = sum(weights)`.
     2. For each midpoint `mid` between `low` and `high`, use a helper function `canShip` to check if the current `mid` capacity is sufficient to ship all packages within `D` days. 
     3. The `canShip` function simulates the process of shipping the packages by adding the weight of each package to the ship's current load. If adding the next package exceeds the capacity, we move to the next day and repeat. If we need more than `D` days, then this capacity is too small.
     4. Update the search range based on the result: if the current capacity works, try smaller capacities; if it doesn't, try larger capacities.
     5. Finally, return the smallest valid capacity.
   - **Key Concepts Explained**: 
     - **Binary Search**: A technique for efficiently searching through a sorted range. Here, we use binary search to find the minimum capacity needed.
     - **Greedy Approach**: The `canShip` function implements a greedy approach by trying to fit as many packages into each day as possible.
   - **Time Complexity**: `O(n log(sum(weights) - max(weights)))`, where `n` is the number of packages.
   - **Space Complexity**: `O(1)` as we're only using a few variables to keep track of the current state.

---

### 187. **Kth Missing Positive Number** [C++ Code](./187_Kth_Missing_Positive_Number.cpp)
   - **File**: _187_Kth_Missing_Positive_Number.cpp
   - **Description**: Given a sorted array of positive integers, you need to find the `k`th missing positive integer. The missing integers are the ones not present in the array, starting from 1.
   - **Understanding the Problem**: You are given a list of positive integers, and you need to find the `k`th number that is missing from the list. For example, if the list is `[2, 3, 4, 7, 11]` and `k = 5`, the 5th missing number would be `9` because the missing numbers are `1, 5, 6, 8, 9, ...`.
   - **How to Approach the Problem**: 
     1. The array is sorted, so you can efficiently use binary search to find the position where the missing numbers are located.
     2. For each index `i` in the array, calculate how many numbers are missing before it (e.g., if the element is `arr[i]`, then the number of missing elements is `arr[i] - (i + 1)`).
     3. Use binary search to find the smallest index where the total number of missing numbers reaches or exceeds `k`.
   - **Approach**: 
     1. Use binary search over the array to find the smallest index where the missing number count reaches `k`.
     2. If `arr[mid] - (mid + 1) < k`, it means the kth missing number is after this index, so adjust the left pointer of binary search.
     3. Once the binary search completes, calculate the exact missing number by adding the remaining missing numbers to the current index.
   - **Key Concepts Explained**: 
     - **Binary Search**: This allows us to find the position where the missing numbers are likely located.
   - **Time Complexity**: `O(log n)`, where `n` is the size of the input array.
   - **Space Complexity**: `O(1)` as only a few variables are used.

---

### 188. **Split Array Largest Sum** [C++ Code](./188_Split_Array_Largest_Sum.cpp)
   - **File**: _188_Split_Array_Largest_Sum.cpp
   - **Description**: Given an array of integers, split it into `k` non-empty subarrays such that the largest sum of any subarray is minimized. You need to find the minimum possible largest sum of the subarrays.
   - **Understanding the Problem**: You have a list of integers, and you want to split the list into `k` subarrays. Each subarray will have a sum, and your goal is to minimize the largest sum of any subarray.
   - **How to Approach the Problem**: 
     1. The minimum possible largest sum is the largest element in the array because each element must be in at least one subarray.
     2. The maximum possible largest sum is the sum of all elements in the array (i.e., putting all elements in a single subarray).
     3. Use binary search to find the minimum largest sum that works. 
     4. For each candidate largest sum, use a greedy approach to try and split the array into `k` subarrays, counting how many subarrays are needed. If more than `k` subarrays are needed, the current candidate largest sum is too small.
   - **Approach**: 
     1. **Binary Search**: Search between the largest element and the sum of all elements for the minimum largest sum.
     2. **Greedy Check**: For each candidate sum, check if it’s possible to split the array into `k` subarrays.
   - **Key Concepts Explained**: 
     - **Binary Search**: Helps efficiently find the minimum largest sum.
     - **Greedy Approach**: Helps split the array into subarrays without exceeding the current candidate sum.
   - **Time Complexity**: `O(n log S)`, where `n` is the number of elements and `S` is the sum of all elements.
   - **Space Complexity**: `O(1)` as we're only using a few variables for tracking the current state.

---

### 189. **Median of Two Sorted Arrays** [C++ Code](./189_Median_of_Two_Sorted_Arrays.cpp)
   - **File**: _189_Median_of_Two_Sorted_Arrays.cpp
   - **Description**: Given two sorted arrays, find the median of the two arrays. The median is the middle element if the combined array has an odd length, and the average of the two middle elements if the combined length is even.
   - **Understanding the Problem**: You are given two sorted arrays, and you need to find the median of the combined sorted array. The challenge is to do this efficiently without merging the arrays completely.
   - **How to Approach the Problem**: 
     1. The combined array’s median depends on the total number of elements. If it's odd, the median is the middle element; if it's even, it's the average of the two middle elements.
     2. Use binary search to partition the two arrays such that the left half contains half of the total elements, and the right half contains the other half.
     3. The partition ensures that the elements on the left are smaller than the elements on the right.
   - **Approach**: 
     1. Always binary search on the smaller array for better efficiency.
     2. Partition both arrays, ensuring the left partition contains half of the elements from both arrays.
     3. Once the partition is correct, calculate the median based on the values on the left and right partitions.
   - **Key Concepts Explained**: 
     - **Binary Search**: Used to partition the arrays efficiently.
   - **Time Complexity**: `O(log(min(m, n)))`, where `m` and `n` are the sizes of the two arrays.
   - **Space Complexity**: `O(1)` since no extra space is used beyond variables for indices.

---

### 190. **Row with Maximum 1s** [C++ Code](./190_Row_with_max_1s.cpp)
   - **File**: _190_Row_with_max_1s.cpp
   - **Description**: Given a 2D binary matrix, find the row that contains the maximum number of 1s. The rows are sorted, so 1s appear after 0s.
   - **Understanding the Problem**: You are given a matrix of 0s and 1s, where each row is sorted. Your task is to find the row that has the most 1s.
   - **How to Approach the Problem**: 
     1. Since each row is sorted, you can use binary search to find the first occurrence of 1 in each row.
     2. The row with the maximum number of 1s will have the smallest index where 1 appears.
   - **Approach**: 
     1. Iterate through each row, use binary search to find the first occurrence of 1, and count the number of 1s in the row.
     2. Keep track of the row with the highest count of 1s.
   - **Key Concepts Explained**: 
     - **Binary Search**: Used to find the first occurrence of 1 in each row.
   - **Time Complexity**: `O(n log m)`, where `n` is the number of rows and `m` is the number of columns.
   - **Space Complexity**: `O(1)` since we only use a few variables for tracking the row and count.
---