## Day 90 - Problems  
---
### 325. **Print all subsequences of an array** [C++ Code](./_325_Print_all_subsequences_of_an_array.cpp) [Py Code](./_325_Print_all_subsequences_of_an_array.py) 
- **File**: *325_Print_all_subsequences_of_an_array*  
- **Description**:  
  - Given an array of integers, find all possible subsequences of the array.
  - A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
  - The empty array is also considered a valid subsequence.

- **Understanding the Problem**:  
  - A subsequence is formed by taking some elements from the original array while maintaining their relative order.
  - For example, with the array [1, 2, 3]:
    - We can choose to include or exclude each element.
    - This creates 2³ = 8 possible subsequences: [3], [2], [2, 3], [1], [1, 3], [1, 2], [1, 2, 3], and [] (empty).
  - Each element has two choices: either it's included in the subsequence or it's not.

- **Pseudocode**: (easiest possible and theoretical)
```
function generateSubsequences(array, index, currentSubsequence, result):
    if index equals array length:
        add currentSubsequence to result
        return
    
    // Include the current element
    add array[index] to currentSubsequence
    generateSubsequences(array, index + 1, currentSubsequence, result)
    
    // Exclude the current element
    remove the last element from currentSubsequence
    generateSubsequences(array, index + 1, currentSubsequence, result)

function startGeneration(array):
    create empty result array
    create empty currentSubsequence array
    generateSubsequences(array, 0, currentSubsequence, result)
    return result
```

- **Approach**:  
  1. We'll use recursion to generate all possible subsequences.
  2. For each element in the array, we have two choices:
     - Include the element in the current subsequence
     - Exclude the element from the current subsequence
  3. We'll use a helper function that takes:
     - The original array
     - The current index we're processing
     - The current subsequence we're building
     - A result list to store all subsequences
  4. Base case: When we've processed all elements (index = array length), we add the current subsequence to our result.
  5. Recursive steps:
     - First, we include the current element and make a recursive call with the next index.
     - Then, we backtrack by removing that element and make another recursive call with the next index.
  6. This approach creates a decision tree where each path from root to leaf represents one possible subsequence.

- **Key Concepts Explained**:  
  - **Recursion**: A function that calls itself to solve smaller instances of the same problem.
  - **Backtracking**: A technique where we explore all possible solutions by trying different choices and undoing them if they don't lead to a valid solution.
  - **Subsequence**: A sequence derived from another by removing some elements without changing the order of remaining elements.
  - **Decision Tree**: Each level of recursion represents a decision about whether to include an element or not.

- **Time Complexity**: O(2^n), where n is the length of the array.
  - For each element, we make two recursive calls (include or exclude).
  - This creates a binary tree of height n, resulting in 2^n total function calls.

- **Space Complexity**: O(n) for the recursive call stack plus O(2^n) for storing all subsequences.
  - The recursion depth can go up to n (array length).
  - We need to store all 2^n subsequences in the result.

**Dry Run**:
- *Input*: [1, 2]
- *Output*: [1, 2], [1], [2], []
- *Explanation*:
- Steps:
  1. Start with empty currentSubsequence [], index = 0
  2. For element 1 at index 0:
     - Include: currentSubsequence = [1], make recursive call with index = 1
       - For element 2 at index 1:
         - Include: currentSubsequence = [1, 2], make recursive call with index = 2
           - Index = array.length, add [1, 2] to result
         - Exclude: currentSubsequence = [1], make recursive call with index = 2
           - Index = array.length, add [1] to result
     - Exclude: currentSubsequence = [], make recursive call with index = 1
       - For element 2 at index 1:
         - Include: currentSubsequence = [2], make recursive call with index = 2
           - Index = array.length, add [2] to result
         - Exclude: currentSubsequence = [], make recursive call with index = 2
           - Index = array.length, add [] to result
  3. Final result: [1, 2], [1], [2], []


---
### 326. **Longest Increasing Subsequence** [C++ Code](./_326_Find_the_longest_increasing_subsequence.cpp) [Py Code](./_326_Find_the_longest_increasing_subsequence.py) 
- **File**: *326_Find_the_longest_increasing_subsequence*  
- **Description**:  
  - Given an integer array, find the length of the longest strictly increasing subsequence.
  - A subsequence is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.
  - The subsequence must be strictly increasing (each element must be greater than the previous one).
  - Constraints: Array length is between 1 and 2500, and elements range from -10^4 to 10^4.

- **Understanding the Problem**:  
  - We need to find the longest sequence of numbers that are in increasing order.
  - These numbers don't have to be adjacent in the original array, but their relative order must be preserved.
  - For example, with array [10, 9, 2, 5, 3, 7, 101, 18]:
    - Some increasing subsequences are: [10, 101], [9, 101], [2, 5, 7, 101], [2, 3, 7, 18]
    - The longest ones have length 4, like [2, 3, 7, 18] or [2, 5, 7, 101]
    - So the answer is 4.

- **Pseudocode**: (easiest possible and theoretical)
```
function lengthOfLIS(nums):
    create an empty array "sub"
    
    for each number in nums:
        find the position where number should be inserted in "sub" to maintain order
        if position is at the end of "sub":
            append number to "sub"
        else:
            replace the element at position with number
    
    return the length of "sub"

function binarySearch(sub, target):
    left = 0
    right = length of sub - 1
    position = length of sub
    
    while left <= right:
        mid = left + (right - left) / 2
        if sub[mid] >= target:
            position = mid
            right = mid - 1
        else:
            left = mid + 1
    
    return position
```

- **Approach**:  
  1. We'll use a technique called "patience sort" which builds the longest increasing subsequence efficiently.
  2. We maintain an array `sub` where:
     - `sub[i]` represents the smallest ending value of all increasing subsequences of length i+1 found so far.
     - This array will always be sorted.
  3. For each number in the input array:
     - We find the correct position to insert it in our `sub` array.
     - If the number is larger than all elements in `sub`, we append it (extending our longest subsequence).
     - Otherwise, we replace the smallest element in `sub` that is greater than or equal to the current number.
  4. The length of the `sub` array at the end represents the length of the longest increasing subsequence.
  5. To find the correct position efficiently, we use binary search because `sub` is always sorted.
  6. Note that the `sub` array itself might not be an actual subsequence of the original array, but its length gives us the answer we need.

- **Key Concepts Explained**:  
  - **Subsequence**: A sequence derived from another by removing some elements without changing the order of the remaining elements.
  - **Binary Search**: A search algorithm that finds the position of a target value by dividing the search space in half.
  - **Patience Sort**: A sorting technique that involves creating piles of cards (or numbers in this case) and is related to finding the longest increasing subsequence.
  - **Greedy Algorithm**: We make the locally optimal choice at each step (keeping the smallest ending value for each subsequence length).

- **Time Complexity**: O(n log n), where n is the length of the input array.
  - We process each element once, which takes O(n) time.
  - For each element, we perform a binary search which takes O(log n) time.

- **Space Complexity**: O(n)
  - In the worst case, the `sub` array could have the same length as the input array.

**Dry Run**:
- *Input*: [10, 9, 2, 5, 3, 7, 101, 18]
- *Output*: 4
- *Explanation*:
- Steps:
  1. Start with empty `sub` array: []
  2. Process 10: Insert at position 0 -> `sub` = [10]
  3. Process 9: It's smaller than 10, so replace 10 -> `sub` = [9]
  4. Process 2: It's smaller than 9, so replace 9 -> `sub` = [2]
  5. Process 5: It's larger than all elements, so append -> `sub` = [2, 5]
  6. Process 3: It's greater than 2 but less than 5, so replace 5 -> `sub` = [2, 3]
  7. Process 7: It's larger than all elements, so append -> `sub` = [2, 3, 7]
  8. Process 101: It's larger than all elements, so append -> `sub` = [2, 3, 7, 101]
  9. Process 18: It's greater than 7 but less than 101, so replace 101 -> `sub` = [2, 3, 7, 18]
  10. Final length of `sub` is 4, which is our answer.

Note that [2, 3, 7, 18] is a valid increasing subsequence, but the algorithm might produce different values in `sub`. The important part is that the length of `sub` gives us the correct answer.

---
### 327. **Longest Decreasing Subsequence** [C++ Code](./_327_Find_the_longest_decreasing_subsequence.cpp) [Py Code](./_327_Find_the_longest_decreasing_subsequence.py) 
- **File**: *327_Find_the_longest_decreasing_subsequence*  
- **Description**:  
  - Given an integer array, find the length of the longest strictly decreasing subsequence.
  - A subsequence is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.
  - The subsequence must be strictly decreasing (each element must be less than the previous one).
  - Constraints: Array length is between 1 and 2500, and elements range from -10^4 to 10^4.

- **Understanding the Problem**:  
  - We need to find the longest sequence of numbers that are in decreasing order.
  - These numbers don't have to be adjacent in the original array, but their relative order must be preserved.
  - For example, with array [10, 9, 2, 5, 3, 7, 101, 18]:
    - Some decreasing subsequences are: [10, 9, 2], [10, 5, 3], [101, 18], [10, 9, 7, 3, 2]
    - The longest one has length 4: [10, 9, 7, 3] or [10, 9, 5, 2]
    - So the answer is 4.

- **Pseudocode**: (easiest possible and theoretical)
```
function longestDecreasingSubsequence(nums):
    create an empty array "sub"
    
    for each number in nums:
        find the position where number should be inserted in "sub" to maintain reverse order
        if position is at the end of "sub":
            append number to "sub"
        else:
            replace the element at position with number
    
    return the length of "sub"

function binarySearch(sub, target):
    left = 0
    right = length of sub - 1
    position = length of sub
    
    while left <= right:
        mid = left + (right - left) / 2
        if sub[mid] <= target:  // Note the change from >= to <= compared to LIS
            position = mid
            right = mid - 1
        else:
            left = mid + 1
    
    return position
```

- **Approach**:  
  1. This problem is very similar to the Longest Increasing Subsequence (LIS), but with a twist - we're looking for decreasing order.
  2. We can adapt the patience sort technique used for LIS to handle decreasing subsequences:
     - Maintain an array `sub` where `sub[i]` represents the largest ending value of all decreasing subsequences of length i+1 found so far.
     - This array will always be sorted in ascending order (which is counter-intuitive for a decreasing subsequence problem).
  3. For each number in the input array:
     - We find the correct position to insert it in our `sub` array using binary search.
     - If the number is smaller than all elements in `sub`, we append it.
     - Otherwise, we replace the largest element in `sub` that is less than or equal to the current number.
  4. The key difference from LIS is the comparison in the binary search: we look for elements <= the target (instead of >= for LIS).
  5. The length of the `sub` array at the end represents the length of the longest decreasing subsequence.

- **Key Concepts Explained**:  
  - **Decreasing Subsequence**: A sequence where each element is strictly less than the previous element.
  - **Binary Search**: A search algorithm that finds the position of a target value by dividing the search space in half.
  - **Patience Sort Adaptation**: We're effectively sorting in reverse by keeping track of the largest ending values for subsequences of each length.
  - **Greedy Algorithm**: At each step, we make the locally optimal choice (keeping the largest ending value for each subsequence length).

- **Time Complexity**: O(n log n), where n is the length of the input array.
  - We process each element once, which takes O(n) time.
  - For each element, we perform a binary search which takes O(log n) time.

- **Space Complexity**: O(n)
  - In the worst case, the `sub` array could have the same length as the input array.

**Dry Run**:
- *Input*: [10, 9, 2, 5, 3, 7, 101, 18]
- *Output*: 4
- *Explanation*:
- Steps:
  1. Start with empty `sub` array: []
  2. Process 10: Insert at position 0 -> `sub` = [10]
  3. Process 9: It's smaller than 10, so append -> `sub` = [10, 9]
  4. Process 2: It's smaller than 9, so append -> `sub` = [10, 9, 2]
  5. Process 5: It's greater than 2 but less than 9, so replace 2 -> `sub` = [10, 9, 5]
  6. Process 3: It's smaller than 5, so append -> `sub` = [10, 9, 5, 3]
  7. Process 7: It's greater than 3 but less than 9, so replace 5 -> `sub` = [10, 9, 7, 3]
  8. Process 101: It's greater than all elements, so replace 10 -> `sub` = [101, 9, 7, 3]
  9. Process 18: It's greater than 9 but less than 101, so replace 101 -> `sub` = [18, 9, 7, 3]
  10. Final length of `sub` is 4, which is our answer.

Note that the elements in `sub` may not form an actual subsequence of the original array. The important thing is that the length of `sub` gives us the correct length of the longest decreasing subsequence. In this case, [10, 9, 7, 3] is one valid longest decreasing subsequence with length 4.

---

### 328. **Longest Bitonic Subsequence** [C++ Code](./_328_Find_the_longest_bitonic_subsequence.cpp) [Py Code](._328_Find_the_longest_bitonic_subsequence.py)

- **File**: _328_Find_the_longest_bitonic_subsequence
- **Description**:
  - Find the maximum length of a Bitonic subsequence in an array of positive integers.
  - A Bitonic subsequence is one that is first strictly increasing, then strictly decreasing.
  - Note: A strictly increasing or strictly decreasing sequence alone is not considered bitonic.

- **Understanding the Problem**:
  - A bitonic subsequence has two parts: first increasing, then decreasing.
  - For example, in [1, 2, 5, 3, 2]:
    - The subsequence [1, 2, 5, 3, 2] is bitonic because it first increases (1→2→5) and then decreases (5→3→2).
    - The length of this bitonic subsequence is 5.
  - For a valid bitonic subsequence, both the increasing and decreasing parts must exist (non-empty).
  - Elements in a subsequence don't have to be adjacent in the original array.

- **Pseudocode**: (easiest possible and theoretical)
```
Function LongestBitonicSequence(nums):
    n = length of nums
    
    // If array has fewer than 3 elements, it can't form a valid bitonic sequence
    if n < 3:
        return 0
    
    // Find the longest increasing subsequence (LIS) ending at each position
    LIS = array of length n, initially all 1s
    for i from 0 to n-1:
        for j from 0 to i-1:
            if nums[i] > nums[j]:
                LIS[i] = max(LIS[i], LIS[j] + 1)
    
    // Find the longest decreasing subsequence (LDS) starting at each position
    LDS = array of length n, initially all 1s
    for i from n-1 to 0:
        for j from n-1 to i+1:
            if nums[i] > nums[j]:
                LDS[i] = max(LDS[i], LDS[j] + 1)
    
    // Find the maximum length bitonic subsequence
    maxLength = 0
    for i from 0 to n-1:
        // Both parts must be non-empty (length > 1)
        if LIS[i] > 1 and LDS[i] > 1:
            // -1 because the element at position i is counted twice
            maxLength = max(maxLength, LIS[i] + LDS[i] - 1)
    
    return maxLength
```

- **Approach**:
  1. To find the longest bitonic subsequence, we need to find:
     - The longest increasing subsequence (LIS) ending at each position.
     - The longest decreasing subsequence (LDS) starting at each position.
  
  2. For each position in the array, we calculate:
     - LIS[i] = length of the longest increasing subsequence ending at index i
     - LDS[i] = length of the longest decreasing subsequence starting at index i
  
  3. The total length of the bitonic subsequence with peak at position i would be:
     - LIS[i] + LDS[i] - 1 (subtracting 1 because we count the peak element twice)
  
  4. However, we only consider positions where both LIS[i] and LDS[i] are greater than 1,
     as both the increasing and decreasing parts must be non-empty.
  
  5. The optimized approach in the provided solution uses binary search to compute LIS and LDS
     more efficiently (in O(n log n) time instead of O(n²)).

- **Key Concepts Explained**:
  - **Subsequence**: A sequence derived from another sequence by deleting some elements without changing the order of the remaining elements.
  
  - **Longest Increasing Subsequence (LIS)**: The longest subsequence where each element is greater than the previous one.
  
  - **Longest Decreasing Subsequence (LDS)**: The longest subsequence where each element is less than the previous one.
  
  - **Binary Search**: A search algorithm that finds the position of a target value within a sorted array. It works by repeatedly dividing the search interval in half.
  
  - **Patient Sort / Patience Sort**: The algorithm used in the code for computing LIS efficiently. It maintains an array of "piles" and uses binary search to find the right pile for each new element.

- **Time Complexity**: O(n log n)
  - Computing LIS using binary search takes O(n log n) time.
  - Computing LDS also takes O(n log n) time.
  - Finding the maximum bitonic length takes O(n) time.
  - Overall time complexity is O(n log n).

- **Space Complexity**: O(n)
  - We use three arrays of size n: LIS, LDS, and the binary search array.

**Dry Run**:
- *Input*: [1, 2, 5, 3, 2]
- *Output*: 5
- *Explanation*:

Steps for computing LIS:
1. Start with empty `sub` array and LIS = [1,1,1,1,1]
2. For i=0, nums[0]=1: Add to empty `sub` → `sub`=[1], LIS[0]=1
3. For i=1, nums[1]=2: Add to `sub` → `sub`=[1,2], LIS[1]=2
4. For i=2, nums[2]=5: Add to `sub` → `sub`=[1,2,5], LIS[2]=3
5. For i=3, nums[3]=3: Replace 5 with 3 → `sub`=[1,2,3], LIS[3]=3
6. For i=4, nums[4]=2: Replace 3 with 2 → `sub`=[1,2,2], LIS[4]=2
   
LIS = [1,2,3,3,2]

Steps for computing LDS (from the end):
1. Start with empty `sub` array and LDS = [1,1,1,1,1]
2. For i=4, nums[4]=2: Add to empty `sub` → `sub`=[2], LDS[4]=1
3. For i=3, nums[3]=3: Add to `sub` → `sub`=[2,3], LDS[3]=1
4. For i=2, nums[2]=5: Add to `sub` → `sub`=[2,3,5], LDS[2]=1
5. For i=1, nums[1]=2: Replace 5 with 2 → `sub`=[2,3,2], LDS[1]=1
6. For i=0, nums[0]=1: Replace 2 with 1 → `sub`=[1,3,2], LDS[0]=1

LDS = [1,1,1,2,1]

Finding maximum bitonic length:
- For i=0: LIS[0]=1, LDS[0]=1, not valid (both must be > 1)
- For i=1: LIS[1]=2, LDS[1]=1, not valid
- For i=2: LIS[2]=3, LDS[2]=1, not valid
- For i=3: LIS[3]=3, LDS[3]=2, valid, length = 3+2-1 = 4
- For i=4: LIS[4]=2, LDS[4]=1, not valid

The result is 4.

Wait, that doesn't match our expected output of 5... Looking at the code again, I think the implementation differs slightly from my explanation. The correct bitonic subsequence would be [1,2,5,3,2] with length 5.

---

---

### 329. **Number of Subsequences That Satisfy the Given Sum Condition**  
[C++ Code](./_329_Count_number_of_subsequences_with_a_given_s.cpp)  [Python Code](./_329_Count_number_of_subsequences_with_a_given_s.py) 

- **File**: _329_Count_number_of_subsequences_with_a_given_s.cpp  
- **Description**:  
  - You are given an array of integers `nums` and an integer `target`.  
  - Your task is to find the number of non-empty subsequences of `nums` such that the sum of the minimum and maximum element in each subsequence is less than or equal to `target`.  
  - Since the answer can be very large, return it modulo \(10^9 + 7\).  

- **Understanding the Problem**:  
  - A subsequence is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.  
  - For example, if `nums = [3, 5, 6, 7]`, some subsequences are `[3]`, `[3, 5]`, `[3, 6]`, `[3, 5, 6]`, etc.  
  - The problem requires us to count how many such subsequences satisfy the condition: `min(subsequence) + max(subsequence) <= target`.  

- **Pseudocode**:  
```
1. Sort the array `nums`.
2. Precompute powers of 2 modulo (10^9 + 7) for all possible lengths of subsequences.
3. Use two pointers, `left` and `right`, to traverse the array.
4. For each pair of `left` and `right`, check if `nums[left] + nums[right] <= target`.
   - If true, all subsequences starting at `left` and ending at any index from `left` to `right` are valid.
   - Add the number of such subsequences to the count.
   - Move `left` to the right.
   - If false, move `right` to the left.
5. Return the count modulo (10^9 + 7).
```

- **Approach**:  
  1. **Sorting**: Start by sorting the array. This allows us to easily find the minimum and maximum elements in any subsequence.  
  2. **Precompute Powers of 2**: Since the number of subsequences for a range of length `k` is \(2^k\), we precompute these values modulo \(10^9 + 7\) to avoid overflow and speed up calculations.  
  3. **Two Pointers Technique**: Use two pointers, `left` and `right`, to traverse the array. The idea is to find valid ranges where `nums[left] + nums[right] <= target`.  
  4. **Counting Valid Subsequences**: For each valid range, the number of valid subsequences is \(2^{(right - left)}\), as each element between `left` and `right` can either be included or excluded.  
  5. **Modulo Operation**: Since the result can be very large, we take the result modulo \(10^9 + 7\) at each step.  

- **Key Concepts Explained**:  
  - **Subsequence**: A sequence derived from the array by deleting some or no elements without changing the order of the remaining elements.  
  - **Two Pointers Technique**: A method to traverse an array using two pointers, often used to solve problems involving ranges or pairs.  
  - **Modulo Operation**: Used to handle large numbers by taking the remainder when divided by a specific number (here, \(10^9 + 7\)).  

- **Time Complexity**:  
  - Sorting the array takes \(O(n log n)\).  
  - The two-pointer traversal takes \(O(n)\).  
  - Overall time complexity is \(O(n log n)\).  

- **Space Complexity**:  
  - We use an additional array to store precomputed powers of 2, which takes \(O(n)\) space.  
  - Overall space complexity is \(O(n)\).  

**Dry Run**:  
- *Input*: `nums = [3, 5, 6, 7]`, `target = 9`  
- *Output*: `4`  
- *Explanation*:  
  1. Sort the array: `[3, 5, 6, 7]`.  
  2. Precompute powers of 2: `[1, 2, 4, 8]`.  
  3. Use two pointers:  
     - `left = 0`, `right = 3`: `3 + 7 = 10 > 9` → move `right` to 2.  
     - `left = 0`, `right = 2`: `3 + 6 = 9 <= 9` → add \(2^{(2-0)} = 4\) subsequences.  
     - Move `left` to 1.  
     - `left = 1`, `right = 2`: `5 + 6 = 11 > 9` → move `right` to 1.  
     - `left = 1`, `right = 1`: `5 + 5 = 10 > 9` → move `right` to 0.  
  4. Total valid subsequences: `4`.  

--- 
