## Day 46 - Problems

---

### 178. **Single Element in a Sorted Array** [C++ Code](./_178_single_element_in_a_sorted_array.cpp)
   - **File**: _178_single_element_in_a_sorted_array.cpp_
   - **Description**: Given a sorted array where every element appears exactly twice except for one element that appears once, find the single element.
   - **Understanding the Problem**: Imagine you have a row of pairs of numbers, but one number is left out and does not have a pair. The list is sorted, meaning similar numbers are grouped together. We need to find that single number efficiently.
   - **How to Approach the Problem**: Instead of checking every element (which is slow), use binary search. Observe that the index of elements changes depending on where the single element is.
   - **Approach**:
     1. Use **binary search** with two pointers (`left` and `right`).
     2. Find the middle index `mid`.
     3. If `mid` is even and `nums[mid]` matches `nums[mid+1]`, it means the single element is on the right half.
     4. If `mid` is odd and `nums[mid]` matches `nums[mid-1]`, it also means the single element is on the right half.
     5. Otherwise, the single element is on the left half.
     6. Keep adjusting `left` and `right` until they meet, and return `nums[left]`.
   - **Key Concepts Explained**: Binary search, odd-even index patterns.
   - **Time Complexity**: **O(log n)** (binary search reduces search space by half each time).
   - **Space Complexity**: **O(1)** (only a few extra variables are used).

---

### 179. **Find Peak Element** [C++ Code](./_179_find_peak_element.cpp)
   - **File**: _179_find_peak_element.cpp_
   - **Description**: Given an array, find a peak element (an element greater than its neighbors). The array does not necessarily need to be sorted.
   - **Understanding the Problem**: A peak element is simply an element that is larger than both its left and right neighbors. The array is unsorted, and there may be multiple peaks, but we only need to find one.
   - **How to Approach the Problem**: Instead of scanning the whole array, use binary search since if one side is greater, a peak must exist there.
   - **Approach**:
     1. Use **binary search** with `left` and `right`.
     2. Find `mid` index.
     3. If `nums[mid] > nums[mid+1]`, then the peak is in the left half.
     4. Otherwise, move `left` to `mid+1` because a peak must exist on the right half.
     5. Continue until `left` equals `right`, which is the peak.
   - **Key Concepts Explained**: Binary search, peak detection.
   - **Time Complexity**: **O(log n)**.
   - **Space Complexity**: **O(1)**.

---

### 180. **Square Root (Floor Value)** [C++ Code](./_180_square_root.cpp)
   - **File**: _180_square_root.cpp_
   - **Description**: Find the integer part of the square root of a given number `n`.
   - **Understanding the Problem**: The square root of a number `x` is a value `y` such that `y * y = x`. Since we need only the integer part, we return `floor(sqrt(x))`.
   - **How to Approach the Problem**: Instead of checking every number from `1` to `n`, use binary search.
   - **Approach**:
     1. Set `left = 1` and `right = n`.
     2. Find `mid` and calculate `mid * mid`.
     3. If `mid * mid == n`, return `mid`.
     4. If `mid * mid < n`, move `left` to `mid + 1` and store `mid` as an answer.
     5. If `mid * mid > n`, move `right` to `mid - 1`.
     6. Repeat until `left` crosses `right`, and return `ans`.
   - **Key Concepts Explained**: Binary search, square root approximation.
   - **Time Complexity**: **O(log n)**.
   - **Space Complexity**: **O(1)**.

---

### 181. **Find Nth Root of M** [C++ Code](./_181_find_nth_root_of_m.cpp)
   - **File**: _181_find_nth_root_of_m.cpp_
   - **Description**: Given two numbers `n` and `m`, find the `n`th root of `m`. If it does not exist as an integer, return -1.
   - **Understanding the Problem**: The `n`th root of `m` is a number `x` such that `x^n = m`. We need to find this `x` efficiently.
   - **How to Approach the Problem**: Instead of trying every possible value, use binary search.
   - **Approach**:
     1. Use binary search with `left = 1` and `right = m`.
     2. Find `mid` and compute `mid^n` using a helper function.
     3. If `mid^n == m`, return `mid`.
     4. If `mid^n > m`, move `right` to `mid - 1`.
     5. If `mid^n < m`, move `left` to `mid + 1`.
     6. If no value satisfies `x^n = m`, return `-1`.
   - **Key Concepts Explained**: Binary search, exponentiation.
   - **Time Complexity**: **O(log m)**.
   - **Space Complexity**: **O(1)**.

---