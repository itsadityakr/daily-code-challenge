## Day 93 - Sort Colors Problem

---

### 337. **Sort Colors** [C++ Code](_337_Find_the_pair_with_a_given_sum.cpp) [Py Code](_337_Find_the_pair_with_a_given_sum.py)

- **File**: *75_Sort_Colors*  

- **Description**:  
  - Sort an array of numbers representing colors (0 = red, 1 = white, 2 = blue)
  - Sort the colors in-place (modify the original array)
  - Colors must be sorted in the order: red (0), white (1), blue (2)
  - Cannot use built-in sorting functions
  - Must solve in a single pass with constant extra space

- **Understanding the Problem**:  
  Imagine you have a row of colored balls - red, white, and blue. Your task is to rearrange them so that:
  - All red balls come first
  - Then all white balls
  - Finally, all blue balls
  
  For example:
  - Input: [2, 0, 2, 1, 1, 0]
  - Correct Output: [0, 0, 1, 1, 2, 2]

  Think of it like sorting laundry by color, but you can only move clothes once and can't use extra space.

- **Pseudocode**: 
```
function sortColors(array):
    three pointers: low, mid, high
    
    while mid <= high:
        if current element is red (0):
            swap with low pointer
            move low and mid forward
        else if current element is white (1):
            just move mid forward
        else if current element is blue (2):
            swap with high pointer
            move high backward
```

- **Approach**:  
  1. We'll use a technique called the "Dutch National Flag" algorithm.
  2. Use three pointers:
     - `low`: keeps track of where 0s (red) should be placed
     - `mid`: current element being examined
     - `high`: keeps track of where 2s (blue) should be placed
  3. Traverse the array with the `mid` pointer:
     - If we find a 0, swap it to the `low` section
     - If we find a 1, leave it in place
     - If we find a 2, swap it to the `high` section
  4. This approach ensures:
     - All elements before `low` are 0
     - All elements between `low` and `mid` are 1
     - All elements after `high` are 2

- **Key Concepts Explained**:  
  - **In-place Sorting**: Modifying the original array without using extra space
   
  - **Three-way Partitioning**: 
    Imagine dividing a bookshelf into three sections:
    - Left section (0s/red): Completed organized books
    - Middle section (1s/white): Books currently being sorted
    - Right section (2s/blue): Completed right-side books

  - **Pointer Manipulation**: 
    Using pointers to track and move elements efficiently

- **Time Complexity**: O(n)
  - We go through the array only once
  - Each element is touched at most once
  - Very efficient! 🚀

- **Space Complexity**: O(1)
  - We use only three extra variables (low, mid, high)
  - No additional data structures are created
  - Constant extra space used

**Dry Run**:
- *Input*: [2, 0, 2, 1, 1, 0]
- *Output*: [0, 0, 1, 1, 2, 2]
- *Explanation*: 
  Step-by-step breakdown of how the pointers move and swap elements

### Initial Setup
- **Array**: [2, 0, 2, 1, 1, 0]
- **Pointers**:
  - `low` = 0 (start of red/0 section)
  - `mid` = 0 (current element being examined)
  - `high` = 5 (end of blue/2 section)

### Step-by-Step Breakdown

#### Step 1: First Iteration
- **Current Element**: 2 (at index 0)
- **Action**: Swap with element at `high`
- **New Array**: [0, 0, 2, 1, 1, 2]
- **New Pointers**:
  - `low` = 0
  - `mid` = 0
  - `high` = 4

#### Step 2: Second Iteration
- **Current Element**: 0 (at index 0)
- **Action**: Swap with element at `low` (which is itself)
- **New Array**: [0, 0, 2, 1, 1, 2]
- **New Pointers**:
  - `low` = 1
  - `mid` = 1
  - `high` = 4

#### Step 3: Third Iteration
- **Current Element**: 2 (at index 2)
- **Action**: Swap with element at `high`
- **New Array**: [0, 0, 1, 1, 2, 2]
- **New Pointers**:
  - `low` = 1
  - `mid` = 1
  - `high` = 3

#### Step 4: Fourth Iteration
- **Current Element**: 1 (at index 2)
- **Action**: No swap, just move `mid`
- **Array**: [0, 0, 1, 1, 2, 2]
- **New Pointers**:
  - `low` = 1
  - `mid` = 2
  - `high` = 3

#### Step 5: Fifth Iteration
- **Current Element**: 1 (at index 3)
- **Action**: No swap, just move `mid`
- **Array**: [0, 0, 1, 1, 2, 2]
- **New Pointers**:
  - `low` = 1
  - `mid` = 3
  - `high` = 3

#### Final State
- **Final Array**: [0, 0, 1, 1, 2, 2]
- Pointers converge
- Algorithm complete

### Detailed Pointer Movements
- `low` tracks the boundary of 0s (red)
- `mid` explores the array
- `high` tracks the boundary of 2s (blue)

### Visual Representation
```
Initial:  [2, 0, 2, 1, 1, 0]
           ^  ^           ^
           |  |           |
          low mid        high

Final:    [0, 0, 1, 1, 2, 2]
           ^        ^     ^
           |        |     |
          low      mid   high
```

---

### 338. **Find all pairs with a given sum** [C++ Code](./_338_Sort_an_array_of_0s,_1s,_and_2s.cpp) 

- **File**: _X_FileName_  
- **Description**:  
  - Given two unsorted arrays `a[]` and `b[]`, the task is to find all pairs of elements (one from `a` and one from `b`) whose sum equals a given target value `x`.
  - The pairs should be returned in increasing order based on the elements from array `a`.

- **Understanding the Problem**:  
  - We need to find all possible pairs (u, v) where `u` is from `a[]`, `v` is from `b[]`, and `u + v = target`.
  - The pairs should be sorted in ascending order based on `u`. If multiple pairs have the same `u`, their order is determined by their occurrence.

- **Pseudocode**: 
```
1. Create a frequency map for elements in array a.
2. For each element in array b, calculate the complement (target - element).
3. If the complement exists in the frequency map, add all possible pairs (complement, current element) to the result.
4. Sort the result based on the first element of each pair.
5. Return the sorted result.
```

- **Approach**:  
  1. **Hash Map Approach**:
     - Use a hash map to store the frequency of each element in the first array `a[]`.
     - For each element in the second array `b[]`, check if its complement (target - element) exists in the hash map.
     - If it exists, add all occurrences of the complement paired with the current element to the result.
     - Finally, sort the result to ensure the pairs are in increasing order of `u`.

  2. **Two Pointer Approach** (for sorted arrays):
     - Sort both arrays `a[]` and `b[]`.
     - Use two pointers, one starting at the beginning of `a[]` (i) and one at the end of `b[]` (j).
     - Calculate the sum of elements at these pointers.
     - If the sum equals the target, count all consecutive duplicates of `a[i]` and `b[j]` to handle multiple pairs efficiently.
     - Add all valid pairs to the result and adjust the pointers accordingly.
     - If the sum is less than the target, move the `i` pointer forward. If the sum is greater, move the `j` pointer backward.

- **Key Concepts Explained**:  
  - **Hash Map**: A data structure that stores key-value pairs, allowing efficient lookups. Here, it helps quickly check if a complement exists.
  - **Two Pointer Technique**: A method where two pointers traverse an array (or arrays) from different ends to find pairs or other conditions efficiently.
  - **Complement**: For a given element `v` in `b[]`, the complement is `target - v`, which we search for in `a[]`.

- **Time Complexity**:  
  - **Hash Map Approach**: O(n + m + k log k), where `n` and `m` are the sizes of `a[]` and `b[]`, and `k` is the number of valid pairs (due to sorting).
  - **Two Pointer Approach**: O(n log n + m log m + n + m), due to sorting and then a linear pass through both arrays.

- **Space Complexity**:  
  - **Hash Map Approach**: O(n + k), where `n` is the size of `a[]` (for the hash map) and `k` is the number of pairs (for the result).
  - **Two Pointer Approach**: O(k) for storing the result (assuming sorting is done in-place).

**Dry Run**:
- *Input* : target = 9, a[] = [1, 2, 4, 5, 7], b[] = [5, 6, 3, 4, 8]
- *Output* :
  1 8
  4 5
  5 4
- *Explanation* :
  - For `8` in `b[]`, complement is `1` (exists in `a[]`).
  - For `5` in `b[]`, complement is `4` (exists in `a[]`).
  - For `4` in `b[]`, complement is `5` (exists in `a[]`).
  - Pairs are sorted by the first element.

- Steps:
  1. Create frequency map for `a[]`: {1:1, 2:1, 4:1, 5:1, 7:1}.
  2. For `b[]`:
     - `5`: complement = 4 → add (4, 5).
     - `6`: complement = 3 → not in map.
     - `3`: complement = 6 → not in map.
     - `4`: complement = 5 → add (5, 4).
     - `8`: complement = 1 → add (1, 8).
  3. Sort result: [(1,8), (4,5), (5,4)].

--- 

### 339. **3Sum** [C++ Code](./_339_Find_three_numbers_that_sum_to_zero.cpp) 

- **File**: _X_FileName_  
- **Description**:  
  - Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that their sum equals zero (`nums[i] + nums[j] + nums[k] = 0`).  
  - The solution must avoid duplicate triplets, and indices `i`, `j`, `k` must all be distinct.  

- **Understanding the Problem**:  
  - We need to find all sets of three numbers in the array that add up to zero.  
  - The order of numbers in the triplet doesn't matter, but duplicate triplets (like `[-1, 0, 1]` and `[0, -1, 1]`) should not appear in the result.  
  - Example:  
    - Input: `nums = [-1, 0, 1, 2, -1, -4]`  
    - Output: `[[-1, -1, 2], [-1, 0, 1]]`  

- **Pseudocode**:  
```
1. Sort the input array.
2. Iterate through the array (for each `nums[i]`):
   a. Skip duplicates to avoid redundant triplets.
   b. Set `target = -nums[i]` (since we need `nums[j] + nums[k] = -nums[i]`).
   c. Use two pointers (`left` and `right`) to find pairs that sum to `target`.
   d. If a valid triplet is found, add it to the result and skip duplicates for `left` and `right`.
3. Return the result.
```

- **Approach**:  
  1. **Sorting the Array**:  
     - Sorting helps in efficiently skipping duplicates and using the two-pointer technique.  
  2. **Two-Pointer Technique**:  
     - For each `nums[i]`, treat it as the first element of the triplet.  
     - The remaining problem reduces to finding two numbers (`nums[left]` and `nums[right]`) in the rest of the array that sum to `-nums[i]`.  
     - Adjust `left` and `right` pointers based on whether the current sum is less than or greater than the target.  
  3. **Skipping Duplicates**:  
     - After finding a valid triplet, skip all duplicate values for `left` and `right` to avoid adding the same triplet multiple times.  

- **Key Concepts Explained**:  
  - **Two-Pointer Technique**: A method where two pointers traverse a sorted array from opposite ends to efficiently find pairs that meet a condition (e.g., sum to a target).  
  - **Sorting**: Rearranging elements in order, which simplifies duplicate skipping and enables the two-pointer approach.  
  - **Complement Target**: For a fixed `nums[i]`, the target for the remaining two numbers is `-nums[i]` because `nums[i] + nums[left] + nums[right] = 0`.  

- **Time Complexity**:  
  - **O(n²)**: Sorting takes `O(n log n)`, and the nested loop (outer loop + two-pointer traversal) takes `O(n²)`.  

- **Space Complexity**:  
  - **O(1)** (excluding output storage): The algorithm uses a constant amount of extra space, aside from the space needed to store the result.  

**Dry Run**:  
- *Input*: `nums = [-1, 0, 1, 2, -1, -4]`  
- *Output*: `[[-1, -1, 2], [-1, 0, 1]]`  
- *Explanation*:  
  1. Sort the array: `[-4, -1, -1, 0, 1, 2]`.  
  2. For `nums[0] = -4`:  
     - Target = 4.  
     - Two-pointer search in `[-1, -1, 0, 1, 2]` finds no valid pairs.  
  3. For `nums[1] = -1`:  
     - Target = 1.  
     - Two-pointer search finds `[-1, 0, 1]` (sum = 0 + 1 = 1).  
  4. Skip `nums[2]` (duplicate of `nums[1]`).  
  5. For `nums[3] = 0`:  
     - Target = 0.  
     - Two-pointer search finds `[1, 2]` (sum = 1 + 2 = 3 ≠ 0).  
  6. For `nums[4] = 1`:  
     - Target = -1.  
     - Two-pointer search finds no valid pairs.  
  7. Result: `[[-1, -1, 2], [-1, 0, 1]]`.  

- **Steps**:  
  1. Sort the array.  
  2. For each `nums[i]`:  
     - Skip if it’s a duplicate.  
     - Set `left = i + 1`, `right = end`.  
     - While `left < right`:  
       - If `nums[left] + nums[right] == target`, add triplet to result.  
       - Skip duplicates for `left` and `right`.  
       - Adjust pointers based on the sum comparison.  

--- 
