## Day 47 - Problems

---

### 182. **Koko Eating Bananas** [C++ Code](./_182_koko_eating_bananas.cpp)
   - **File**: _182_koko_eating_bananas.cpp
   - **Description**: Koko loves to eat bananas. There are `n` piles of bananas, and the `i-th` pile has `piles[i]` bananas. Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them and won't eat any more bananas during this hour. Koko wants to eat all the bananas within `h` hours. We need to find the minimum integer `k` such that she can eat all the bananas within `h` hours.
   - **Understanding the Problem**: Imagine Koko has several piles of bananas, and she wants to eat them all in a certain number of hours. She can choose how many bananas she eats per hour, but she wants to eat as few as possible per hour while still finishing all the bananas in time. We need to find the smallest number of bananas she can eat per hour to achieve this.
   - **How to Approach the Problem**: We need to find the minimum eating speed `k` such that the total time taken to eat all the bananas is less than or equal to `h`. This can be done using binary search because the eating speed `k` has a range (from 1 to the maximum number of bananas in any pile), and we can check if a particular speed is feasible.
   - **Approach**:
     1. **Binary Search**: We will perform a binary search on the possible values of `k`. The search range will be from 1 to the maximum number of bananas in any pile.
     2. **Feasibility Check**: For each midpoint `k` in the binary search, we will calculate the total hours required to eat all the bananas at that speed. If the total hours are less than or equal to `h`, then `k` is a possible answer, and we try to find a smaller `k`. Otherwise, we need to increase `k`.
     3. **Calculate Hours**: To calculate the total hours required for a given `k`, we sum up the hours needed for each pile. For a pile with `pile` bananas, the hours required are `(pile + k - 1) / k`.
   - **Key Concepts Explained**:
     - **Binary Search**: A search algorithm that finds the position of a target value within a sorted array. It works by repeatedly dividing the search interval in half.
     - **Feasibility Check**: A function that checks if a given solution satisfies the problem's constraints.
   - **Time Complexity**: O(n log m), where `n` is the number of piles and `m` is the maximum number of bananas in any pile.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---

### 183. **Minimum Number of Days to Make m Bouquets** [C++ Code](./_183_minimum_number_of_days_to_make_m_bouquets.cpp)
   - **File**: _183_minimum_number_of_days_to_make_m_bouquets.cpp
   - **Description**: You are given an array `bloomDay` where `bloomDay[i]` is the day when the `i-th` flower will bloom. You are also given two integers `m` and `k`. You need to make `m` bouquets, each consisting of `k` adjacent flowers. You can only use flowers that have bloomed on or before a certain day. We need to find the minimum number of days required to make `m` bouquets.
   - **Understanding the Problem**: Imagine you have a garden with flowers that bloom on different days. You want to make bouquets, each made of `k` adjacent flowers. You need to make `m` such bouquets. The goal is to find the earliest day when you can make all the bouquets.
   - **How to Approach the Problem**: We need to find the minimum day such that we can make `m` bouquets, each with `k` adjacent flowers. This can be done using binary search on the possible days. For each day, we check if it's possible to make the required number of bouquets.
   - **Approach**:
     1. **Binary Search**: We will perform a binary search on the possible days. The search range will be from the minimum bloom day to the maximum bloom day.
     2. **Feasibility Check**: For each midpoint day in the binary search, we will check if it's possible to make `m` bouquets with `k` adjacent flowers. We do this by iterating through the `bloomDay` array and counting the number of adjacent flowers that have bloomed by that day.
     3. **Count Bouquets**: If we can make at least `m` bouquets, then we try to find a smaller day. Otherwise, we need to increase the day.
   - **Key Concepts Explained**:
     - **Binary Search**: A search algorithm that finds the position of a target value within a sorted array.
     - **Feasibility Check**: A function that checks if a given solution satisfies the problem's constraints.
   - **Time Complexity**: O(n log m), where `n` is the number of flowers and `m` is the range of bloom days.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---

### 184. **Find the Smallest Divisor Given a Threshold** [C++ Code](./_184_find_the_smallest_divisor_given_a_thershold.cpp)
   - **File**: _184_find_the_smallest_divisor_given_a_thershold.cpp
   - **Description**: Given an array of integers `nums` and an integer `threshold`, we need to find the smallest divisor such that the sum of the division results of all elements in `nums` by this divisor is less than or equal to `threshold`.
   - **Understanding the Problem**: You have a list of numbers, and you need to divide each number by a certain divisor and sum up the results. The goal is to find the smallest divisor such that this sum is less than or equal to a given threshold.
   - **How to Approach the Problem**: We need to find the smallest divisor such that the sum of the division results is less than or equal to `threshold`. This can be done using binary search on the possible divisors. For each divisor, we calculate the sum and check if it meets the threshold.
   - **Approach**:
     1. **Binary Search**: We will perform a binary search on the possible divisors. The search range will be from 1 to the maximum number in `nums`.
     2. **Feasibility Check**: For each midpoint divisor in the binary search, we will calculate the sum of the division results. If the sum is less than or equal to `threshold`, then we try to find a smaller divisor. Otherwise, we need to increase the divisor.
     3. **Calculate Sum**: To calculate the sum for a given divisor, we iterate through the `nums` array and sum up the results of dividing each number by the divisor, rounding up.
   - **Key Concepts Explained**:
     - **Binary Search**: A search algorithm that finds the position of a target value within a sorted array.
     - **Feasibility Check**: A function that checks if a given solution satisfies the problem's constraints.
   - **Time Complexity**: O(n log m), where `n` is the number of elements in `nums` and `m` is the maximum number in `nums`.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---

### 185. **Kth Element of Two Sorted Arrays** [C++ Code](./_185_kth_element_of_two_arrays.cpp)
   - **File**: _185_kth_element_of_two_arrays.cpp
   - **Description**: Given two sorted arrays `a` and `b`, we need to find the `k-th` smallest element in the combined array formed by merging `a` and `b`.
   - **Understanding the Problem**: You have two sorted lists of numbers, and you want to find the `k-th` smallest number if you were to combine both lists into one sorted list.
   - **How to Approach the Problem**: We need to find the `k-th` smallest element in the combined array without actually merging the arrays. This can be done using a modified binary search approach where we partition both arrays and compare the elements at the partition points.
   - **Approach**:
     1. **Binary Search**: We will perform a binary search on the smaller of the two arrays. The idea is to partition both arrays such that the combined left partition has `k` elements.
     2. **Partitioning**: For each partition, we compare the elements at the partition points to determine if we need to move the partition left or right.
     3. **Compare and Adjust**: If the partition is correct, we return the maximum element in the left partition. Otherwise, we adjust the partition and repeat the process.
   - **Key Concepts Explained**:
     - **Binary Search**: A search algorithm that finds the position of a target value within a sorted array.
     - **Partitioning**: Dividing an array into two parts based on a condition.
   - **Time Complexity**: O(log(min(n, m))), where `n` and `m` are the lengths of the two arrays.
   - **Space Complexity**: O(1), as we are using a constant amount of extra space.

---
