## Day X - Problems  

---

### 78. **Subsets** [C++ Code](./_330_Print_all_subsets_of_an_array.cpp)  

- **File**: _330_Print_all_subsets_of_an_array_  
- **Description**:  
  - Given an integer array `nums` with unique elements, return all possible subsets (the power set).  
  - The solution set must not contain duplicate subsets.  
  - Return the subsets in any order.  

- **Understanding the Problem**:  
  - We are given a list of unique integers and need to generate all possible subsets, including the empty set.  
  - The order of subsets does not matter, but duplicate subsets are not allowed.  
  - Example:  
    - Input: `nums = [1,2,3]`  
    - Output: `[[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]`  
  - Another example:  
    - Input: `nums = [0]`  
    - Output: `[[], [0]]`  

- **Pseudocode**:  
```plaintext
function findSubsets(nums):
    result = []
    subset = []
    function backtrack(start):
        add subset to result
        for each index i from start to end:
            add nums[i] to subset
            backtrack(i + 1)
            remove last element from subset
    backtrack(0)
    return result
```

- **Approach**:  
  1. We use **backtracking**, a recursive method to explore all possible subsets.  
  2. Start with an empty subset and at each step, either include the current element or skip it.  
  3. Continue this process until all subsets are generated.  
  4. Each subset is stored in a list before moving to the next possibility.  
  5. Backtrack to explore other possibilities by removing the last added element.  

- **Key Concepts Explained**:  
  - **Backtracking**: A technique that explores all possible solutions by making choices and undoing them when needed.  
  - **Power Set**: The set of all subsets of a given set. A set with `n` elements has `2^n` subsets.  
  - **Recursion**: A method where a function calls itself to solve a smaller instance of the problem.  

- **Time Complexity**:  
  - Each element can either be included or excluded, leading to `2^n` subsets.  
  - The recursion tree has `2^n` nodes, making the time complexity **O(2^n)**.  

- **Space Complexity**:  
  - Since we store all subsets, the space complexity is also **O(2^n)**.  
  - Additionally, recursion takes **O(n)** stack space.  

**Dry Run**:  
- *Input*: `nums = [1,2,3]`  
- *Output*: `[[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]`  
- *Explanation*:  
  1. Start with `[]`.  
  2. Add `1`: `[1]`, then `[1,2]`, then `[1,2,3]`.  
  3. Backtrack, remove `3`: `[1,2]`, remove `2`: `[1]`.  
  4. Add `3`: `[1,3]`, backtrack.  
  5. Add `2`: `[2]`, then `[2,3]`, backtrack.  
  6. Add `3`: `[3]`, backtrack.  
  7. Done!

---

### 331. **Subset Sum Problem** [C++ Code](./_331_Find_the_subset_with_a_given_sum.cpp)  

- **File**: _331_Find_the_subset_with_a_given_sum_  
- **Description**:  
  - Given an array `arr[]` of non-negative integers and a value `sum`, check if there exists a subset whose sum equals the given `sum`.  
  - Return all possible subsets that satisfy the condition.  

- **Understanding the Problem**:  
  - We need to find a subset (one or more elements) whose sum is exactly equal to the given `sum`.  
  - Example:  
    - Input: `arr = [3, 34, 4, 12, 5, 2], sum = 9`  
    - Output: `[[4, 5]]`  
    - Explanation: The subset `{4, 5}` adds up to `9`, which is our required sum.  

- **Pseudocode**:  
```plaintext
function findSubsetSum(arr, sum):
    result = []
    subset = []
    
    function backtrack(start, currentSum):
        if currentSum == sum:
            add subset to result
        if currentSum > sum or start == size of arr:
            return
        
        for each index i from start to end:
            add arr[i] to subset
            backtrack(i + 1, currentSum + arr[i])
            remove last element from subset
    
    backtrack(0, 0)
    return result
```

- **Approach**:  
  1. Use **backtracking** to explore all possible subsets.  
  2. Maintain a running sum to check if a subset meets the target.  
  3. If the sum exceeds the target, stop further exploration.  
  4. If the sum matches the target, store the subset in the result list.  
  5. Continue searching for other valid subsets.  

- **Key Concepts Explained**:  
  - **Backtracking**: A technique that explores all possible subsets while pruning unnecessary paths.  
  - **Subset Selection**: We decide whether to include an element or skip it, generating all possible subsets.  

- **Time Complexity**:  
  - The worst case explores all `2^n` subsets, making the complexity **O(2^n)**.  

- **Space Complexity**:  
  - **O(n)** for recursion stack and **O(2^n)** for storing subsets in the result.  

**Dry Run**:  
- *Input*: `arr = [3, 34, 4, 12, 5, 2], sum = 9`  
- *Output*: `[[4, 5]]`  
- *Explanation*:  
  1. Start with `[]`, sum `0`.  
  2. Add `3`: `[3]`, sum `3`.  
  3. Add `34`: `[3, 34]`, sum `37` (too large, backtrack).  
  4. Add `4`: `[3, 4]`, sum `7`.  
  5. Add `5`: `[3, 4, 5]`, sum `12` (too large, backtrack).  
  6. Try `[4, 5]`, sum `9` → **Valid subset found**!  
  7. Done.


---

### 332. **Perfect Sum Problem** [C++ Code](./_332_Count_the_number_of_subsets_with_a_given_s.cpp)  

- **File**: _332_Count_the_number_of_subsets_with_a_given_s_  
- **Description**:  
  - Given an array `arr` of non-negative integers and an integer `target`, count all subsets whose sum equals the target.  
  - Return the count of such subsets.  

- **Understanding the Problem**:  
  - We need to find all possible subsets whose sum is exactly equal to `target`.  
  - Example:  
    - Input: `arr = [5, 2, 3, 10, 6, 8], target = 10`  
    - Output: `3`  
    - Explanation: The subsets `{5, 2, 3}`, `{2, 8}`, and `{10}` all sum up to `10`.  
  - Another example:  
    - Input: `arr = [5, 7, 8], target = 3`  
    - Output: `0`  
    - Explanation: No subset sums to `3`.  
  - Edge case:  
    - Input: `arr = [35, 2, 8, 22], target = 0`  
    - Output: `1` (Only the empty subset sums to `0`).  

- **Pseudocode**:  
```plaintext
function countSubsets(arr, index, currentSum, target):
    if index == size of arr:
        if currentSum == target:
            return 1
        return 0
    
    countWithElement = countSubsets(arr, index + 1, currentSum + arr[index], target)
    countWithoutElement = countSubsets(arr, index + 1, currentSum, target)
    
    return countWithElement + countWithoutElement
```

- **Approach**:  
  1. Use **recursion** to explore all possible subsets.  
  2. At each step, we either **include** or **exclude** the current element.  
  3. If we reach the end of the array and the sum equals the target, we increment the count.  
  4. If the sum exceeds the target or we reach the end without reaching the target, backtrack.  
  5. Use **dynamic programming** to optimize repeated calculations (optional for large inputs).  

- **Key Concepts Explained**:  
  - **Recursion**: A function calls itself to explore all possible subset combinations.  
  - **Subset Selection**: Each number can either be included or excluded, forming a binary decision tree.  
  - **Backtracking**: If a subset doesn't sum to the target, we discard it and explore other possibilities.  
  - **Dynamic Programming (Optional Optimization)**: To avoid redundant calculations, we can use memoization.  

- **Time Complexity**:  
  - The brute-force approach generates all `2^n` subsets, making the worst-case **O(2^n)**.  
  - Using **dynamic programming** (if implemented), we can reduce it to **O(n * target)**.  

- **Space Complexity**:  
  - Without optimization, **O(n)** for recursion depth.  
  - With **memoization**, **O(n * target)** for storing results.  

**Dry Run**:  
- *Input*: `arr = [5, 2, 3, 10, 6, 8], target = 10`  
- *Output*: `3`  
- *Explanation*:  
  1. `{5, 2, 3}` → Sum `10` ✅  
  2. `{2, 8}` → Sum `10` ✅  
  3. `{10}` → Sum `10` ✅  
  4. Other subsets don't sum to `10`.