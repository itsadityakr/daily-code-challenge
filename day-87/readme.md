## Day 87 - Problems  

---

### 311. **Merge Sort** [C++ Code](./_311_Merge_Sort.cpp) [Py Code](./_311_Merge_Sort.py)  

**File**: _311_Merge_Sort_  

**Description**:  
- Given an unsorted array, implement the **Merge Sort** algorithm to sort the elements in ascending order.  
- **Merge Sort** is a divide-and-conquer algorithm that recursively splits the array into smaller parts, sorts them, and merges them back together.  

**Understanding the Problem**:  
Sorting means arranging numbers in increasing order. Merge Sort recursively divides the array into smaller subarrays, sorts them, and then merges the sorted parts back together.

**Example**  
**Input**: `[4, 1, 3, 9, 7]`  
**Output**: `[1, 3, 4, 7, 9]`  



### **Pseudocode**
```plaintext
MERGE_SORT(arr, start, end):
    if start >= end:
        return  // Base case: Single element is already sorted
    
    mid = (start + end) / 2

    MERGE_SORT(arr, start, mid)   // Sort left half
    MERGE_SORT(arr, mid+1, end)   // Sort right half
    MERGE(arr, start, mid, end)   // Merge both halves

MERGE(arr, start, mid, end):
    Create empty list temp
    i = start, j = mid+1
    
    While i <= mid and j <= end:
        if arr[i] <= arr[j]:
            Append arr[i] to temp, increment i
        else:
            Append arr[j] to temp, increment j
    
    Append remaining elements from left half (if any)
    Append remaining elements from right half (if any)

    Copy sorted elements from temp back to original array
```



### **Approach**
1. **Divide the Array Recursively**  
   - Find the middle index `mid = (start + end) / 2`.  
   - Recursively sort the left half `arr[start:mid]`.  
   - Recursively sort the right half `arr[mid+1:end]`.  

2. **Merge Two Sorted Halves**  
   - Create a temporary array to store the merged result.  
   - Compare elements from both halves and insert the smaller one first.  
   - Copy remaining elements from both halves if any are left.  
   - Copy sorted elements back to the original array.  



### **Time & Space Complexity**
- **Time Complexity**: **O(n log n)**  
  - The array is repeatedly split into halves (**log n**) and merging takes **O(n)** time.  
- **Space Complexity**: **O(n)**  
  - Extra space is required for merging subarrays.  



### **Dry Run**  
**Input**: `[4, 1, 3, 9, 7]`  
**Output**: `[1, 3, 4, 7, 9]`  

#### **Step 1: Split the Array Recursively**
```
mergeSort([4, 1, 3, 9, 7], 0, 4)
    mid = 2
    mergeSort([4, 1, 3], 0, 2)     // Left half
    mergeSort([9, 7], 3, 4)        // Right half
```

#### **Step 2: Sort Left Half `[4, 1, 3]`**
```
mergeSort([4, 1, 3], 0, 2)
    mid = 1
    mergeSort([4, 1], 0, 1)
    mergeSort([3], 2, 2)
```

#### **Step 3: Sort `[4, 1]`**
```
mergeSort([4, 1], 0, 1)
    mid = 0
    mergeSort([4], 0, 0)  // Base case
    mergeSort([1], 1, 1)  // Base case
```
Now merge `[4]` and `[1]` → `[1, 4]`

#### **Step 4: Merge `[1, 4]` and `[3]`**
```
merge([1, 4], [3])
Sorted array: [1, 3, 4]
```

#### **Step 5: Sort Right Half `[9, 7]`**
```
mergeSort([9, 7], 3, 4)
    mid = 3
    mergeSort([9], 3, 3)  // Base case
    mergeSort([7], 4, 4)  // Base case
```
Now merge `[9]` and `[7]` → `[7, 9]`

#### **Step 6: Merge `[1, 3, 4]` and `[7, 9]`**
```
merge([1, 3, 4], [7, 9])
Final sorted array: [1, 3, 4, 7, 9]
```

**Final Output**: `[1, 3, 4, 7, 9]`

---

### 312. **Quick Sort** [C++ Code](./_312_Quick_Sort.cpp) [Py Code](./_312_Quick_Sort.py)  

**File**: _312_Quick_Sort_  

**Description**:  
- Given an unsorted array, implement the **Quick Sort** algorithm to sort the elements in ascending order.  
- **Quick Sort** is a divide-and-conquer algorithm that selects a pivot element, partitions the array into two halves, and sorts them recursively.  

**Understanding the Problem**:  
Sorting means arranging numbers in increasing order. Quick Sort picks a **pivot**, moves smaller elements to the left and larger ones to the right, then sorts both sides recursively.  

**Example**  
**Input**: `[4, 1, 3, 9, 7]`  
**Output**: `[1, 3, 4, 7, 9]`  



### **Pseudocode**
```plaintext
QUICK_SORT(arr, start, end):
    if start >= end:
        return  // Base case: Single element is already sorted
    
    pI = PARTITION(arr, start, end)
    QUICK_SORT(arr, start, pI - 1)  // Sort left half
    QUICK_SORT(arr, pI + 1, end)    // Sort right half

PARTITION(arr, start, end):
    pivot = arr[end]
    i = start - 1
    
    for j = start to end - 1:
        if arr[j] <= pivot:
            i++
            Swap arr[i] and arr[j]
    
    Swap arr[i+1] and arr[end] (move pivot to correct position)
    return i+1 (pivot index)
```



### **Approach**
1. **Choose a Pivot Element**  
   - The pivot is chosen as the **last element** in the current subarray.  
   - The goal is to place this pivot in its correct position in the sorted array.  

2. **Partition the Array**  
   - Move elements **smaller than or equal to pivot** to the left.  
   - Move elements **greater than pivot** to the right.  
   - Swap pivot into its correct position.  

3. **Recursively Sort Left and Right Halves**  
   - Apply Quick Sort on the left side (smaller elements).  
   - Apply Quick Sort on the right side (larger elements).  



### **Time & Space Complexity**
- **Time Complexity**:  
  - **Best/Average Case**: **O(n log n)** (Each partition step takes O(n), and there are log n levels).  
  - **Worst Case**: **O(n²)** (When the pivot is always the smallest or largest element).  
- **Space Complexity**: **O(log n)** (Recursive stack space).  



### **Dry Run**  
**Input**: `[4, 1, 3, 9, 7]`  
**Output**: `[1, 3, 4, 7, 9]`  

#### **Step 1: First Call `quickSort(arr, 0, 4)`**
```
Pivot = 7 (last element)
Partitioning:
    - 4 <= 7 → swap 4 with itself
    - 1 <= 7 → swap 1 with itself
    - 3 <= 7 → swap 3 with itself
    - 9 > 7 → No change
Final pivot swap: [4, 1, 3, 7, 9]
Pivot index = 3
```
Now, Quick Sort is called on `[4, 1, 3]` and `[9]`.



#### **Step 2: Sorting Left Half `quickSort(arr, 0, 2)`**
```
Pivot = 3
Partitioning:
    - 4 > 3 → No change
    - 1 <= 3 → Swap 1 and 4 → [1, 4, 3, 7, 9]
Final pivot swap: [1, 3, 4, 7, 9]
Pivot index = 1
```
Quick Sort is called on `[1]` and `[4]`. Since these are single elements, they remain unchanged.



#### **Step 3: Sorting Right Half `quickSort(arr, 4, 4)`**
- Only one element `[9]`, so no changes needed.



### **Final Sorted Array**
```
[1, 3, 4, 7, 9]
```

---

### 313. **Counting Sort** [C++ Code](./_313_Counting_Sort.cpp) [Py Code](./_313_Counting_Sort.py)  

**File**: _313_Counting_Sort_  

**Description**:  
- Given a string containing lowercase characters, sort it in lexicographical order using Counting Sort.  
- The input string consists only of lowercase English letters (`'a'` to `'z'`).  
- Counting Sort is a non-comparative sorting algorithm that works by counting occurrences of each character and reconstructing the sorted sequence.  

**Understanding the Problem**:  
Sorting a string means arranging its characters in increasing order based on ASCII values.  

**Example**  
**Input**: `"geeksforgeeks"`  
**Output**: `"eeeefggkkorss"`  



### **Pseudocode**
```plaintext
COUNTING_SORT(string arr):
    Create an array `count[256]` initialized to 0
    
    // Step 1: Count occurrences of each character
    For each character `c` in arr:
        count[c]++
    
    result = ""
    
    // Step 2: Append characters to result based on frequency
    For i from 0 to 255:
        While count[i] > 0:
            result += char(i)
            count[i]--
    
    Return result
```



### **Approach**
1. **Create a Frequency Array**  
   - Use an array `count[256]` to store the frequency of each character in the string.  

2. **Fill the Frequency Array**  
   - Iterate through the string and update `count[c]++` for each character `c`.  

3. **Construct the Sorted String**  
   - Iterate through `count[]` from `'a'` to `'z'` and append each character based on its frequency.  



### **Time & Space Complexity**
- **Time Complexity**: **O(n + k)** (where `n` is string length, `k = 26` since we only have lowercase letters).  
- **Space Complexity**: **O(k) = O(26) ≈ O(1)** (constant extra space for frequency array).  



### **Dry Run**  
**Input**: `"geeksforgeeks"`  
**Output**: `"eeeefggkkorss"`  

#### **Step 1: Initialize `count[256]` with 0**
```
count[256] = {0, 0, ..., 0}  // All elements initialized to 0
```

#### **Step 2: Populate the Frequency Array**  
Loop through the string `"geeksforgeeks"` and update `count[]`:  

| Character | ASCII Value | Updated `count[]` |
|-----------|------------|--------------------|
| g         | 103        | count[103] = 2    |
| e         | 101        | count[101] = 4    |
| e         | 101        | count[101] = 4    |
| k         | 107        | count[107] = 2    |
| s         | 115        | count[115] = 2    |
| f         | 102        | count[102] = 1    |
| o         | 111        | count[111] = 1    |
| r         | 114        | count[114] = 1    |
| g         | 103        | count[103] = 2    |
| e         | 101        | count[101] = 4    |
| e         | 101        | count[101] = 4    |
| k         | 107        | count[107] = 2    |
| s         | 115        | count[115] = 2    |

Final `count[]` (showing only relevant values):  
```
count[101] = 4  (e)
count[102] = 1  (f)
count[103] = 2  (g)
count[107] = 2  (k)
count[111] = 1  (o)
count[114] = 1  (r)
count[115] = 2  (s)
```

#### **Step 3: Construct Sorted String**  
Iterate over `count[]` and append characters based on frequency.  

1. Append `'e'` **4 times** → `"eeee"`  
2. Append `'f'` **1 time** → `"eeeef"`  
3. Append `'g'` **2 times** → `"eeeefgg"`  
4. Append `'k'` **2 times** → `"eeeefggkk"`  
5. Append `'o'` **1 time** → `"eeeefggkko"`  
6. Append `'r'` **1 time** → `"eeeefggkkor"`  
7. Append `'s'` **2 times** → `"eeeefggkkorss"`  

Final sorted string: `"eeeefggkkorss"`

---


### 314. **Find the Kth Largest and Smallest Element** [C++ Code](./_314_Find_the_Kth_largest_and_smallest_element.cpp) [Py Code](./_314_Find_the_Kth_largest_and_smallest_element.py)  

**File**: _314_Find_the_Kth_largest_and_smallest_element_  

**Description**:  
- Given an array of integers and a number `k`, find the **Kth largest** element in the array.  
- This means sorting the array in descending order and returning the `k`th element.  

**Understanding the Problem**:  
1. The Kth largest element is the `k`th element when the array is sorted in **descending** order.  
2. Instead of sorting, we can use **QuickSelect**, which is an optimized version of QuickSort that only sorts part of the array to find the answer faster.  
3. This method works in **O(n) on average** instead of O(n log n) for full sorting.  

**Example**  
**Input**: `nums = [3,2,1,5,6,4], k = 2`  
**Output**: `5`  
**Explanation**: After sorting `[6, 5, 4, 3, 2, 1]`, the second largest element is `5`.  



### **Pseudocode**
```plaintext
FIND_KTH_LARGEST(nums, k):
    if nums is empty:
        return -1
    
    pivot = Random element from nums

    partition nums into:
        larger_than_pivot = [elements > pivot]
        equal_to_pivot = [elements == pivot]
        smaller_than_pivot = [elements < pivot]

    if k <= size(larger_than_pivot):
        return FIND_KTH_LARGEST(larger_than_pivot, k)
    else if k > size(larger_than_pivot) + size(equal_to_pivot):
        return FIND_KTH_LARGEST(smaller_than_pivot, k - size(larger_than_pivot) - size(equal_to_pivot))
    else:
        return pivot
```



### **Approach**
1. **Choose a Random Pivot**  
   - Select a random pivot from the array.  

2. **Partition the Array**  
   - **Larger than pivot** → Elements greater than pivot.  
   - **Equal to pivot** → Elements equal to pivot.  
   - **Smaller than pivot** → Elements smaller than pivot.  

3. **Recursively Find the Kth Largest**  
   - If `k` is within the larger elements, continue in that subarray.  
   - If `k` is in the smaller elements, adjust `k` and search in that subarray.  
   - If `k` is within the equal elements, return `pivot`.  



### **Time & Space Complexity**
- **Time Complexity**:  
  - **Average Case**: **O(n)** (Randomly choosing a pivot makes it faster).  
  - **Worst Case**: **O(n²)** (If the pivot is always the smallest or largest element).  
- **Space Complexity**: **O(n)** (Recursive calls and partitions).  



### **Dry Run**  
**Input**: `nums = [3,2,1,5,6,4], k = 2`  
**Output**: `5`  

#### **Step 1: First Call `findKthLargest([3,2,1,5,6,4], 2)`**
```
Pivot = 4
Partitioning:
    - Larger than 4: [5,6]
    - Equal to 4: [4]
    - Smaller than 4: [3,2,1]

count_larger = 2, count_equal = 1
Since k=2 is within count_larger, search in [5,6]
```



#### **Step 2: Recursive Call `findKthLargest([5,6], 2)`**
```
Pivot = 6
Partitioning:
    - Larger than 6: []
    - Equal to 6: [6]
    - Smaller than 6: [5]

count_larger = 0, count_equal = 1
Since k=2 is in [5], return 5
```



### **Final Answer**
```
5
```

---

### 315. **Find the Missing Number in an Array of 1 to N** [C++ Code](./_315_Find_the_missing_number_in_an_array_of_1_to_N.cpp) [Py Code](./_315_Find_the_missing_number_in_an_array_of_1_to_N.py)  

**File**: _315_Find_the_missing_number_in_an_array_of_1_to_N_  

**Description**:  
- Given an array `nums` containing `n` distinct numbers from `0` to `n`, find the missing number.  
- The numbers are shuffled, but exactly one number is missing.  

**Understanding the Problem**:  
1. The input array contains numbers from `0` to `n`, but one number is missing.  
2. We need to find this missing number **without modifying the array** and in an **efficient way**.  
3. The best approach avoids sorting or extra space usage.  

**Example**  
**Input**: `nums = [3,0,1]`  
**Output**: `2`  
**Explanation**: The numbers are `[0, 1, 3]`, so `2` is missing.  

### **Pseudocode**
```plaintext
MISSING_NUMBER(nums):
    res = size of nums (n)
    for i from 0 to n-1:
        res = res XOR i
        res = res XOR nums[i]
    return res
```


### **Approach**
1. **Use XOR to Find the Missing Number**  
   - XOR has the property that `x ^ x = 0` and `x ^ 0 = x`.  
   - If we XOR all numbers from `0 to n` and XOR all numbers in `nums`, the duplicate numbers cancel out.  
   - The remaining number is the missing one.  


### **Time & Space Complexity**
- **Time Complexity**: **O(n)** (Single pass through the array).  
- **Space Complexity**: **O(1)** (Uses only a single variable `res`).  


### **Dry Run**  
**Input**: `nums = [3, 0, 1]`  
**Output**: `2`  

#### **Step 1: Initialize `res = 3`** (size of nums)
```
res = 3
```

#### **Step 2: Loop Through `nums`**
| `i` | `res XOR i` | `res XOR nums[i]` | `res` |
|----|-------------|-----------------|------|
| 0  | `3 ^ 0 = 3` | `3 ^ 3 = 0`     | `0`  |
| 1  | `0 ^ 1 = 1` | `1 ^ 0 = 1`     | `1`  |
| 2  | `1 ^ 2 = 3` | `3 ^ 1 = 2`     | `2`  |


### **Final Answer**
```
2
```

---