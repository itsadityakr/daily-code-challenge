## Day X - Problems  

---

### 311. **Merge Sort** [C++ Code](./_311_Merge_Sort.cpp)  [Python Code](.py)  

- **File**: _311_Merge_Sort_  
- **Description**:  
  - This problem requires implementing the **Merge Sort** algorithm, a **divide-and-conquer** sorting technique.  
  - The input is an unsorted array, and the output should be a sorted array.  
  - The array should be sorted **in-place**, meaning we should not use excessive extra space.  
  - **Constraints**: The algorithm should efficiently handle large input sizes.  

- **Understanding the Problem**:  
  - Imagine you have a shuffled deck of cards, and you want to sort them. Instead of sorting one by one, you divide the deck into two equal halves, sort each half separately, and then merge them back together in the correct order.  
  - Merge Sort follows this approach by breaking the array into smaller parts, sorting them, and then merging them back.  
  - Example:  
    - Input: `[4, 1, 3, 9, 7]`  
    - Step 1: Split into `[4, 1, 3]` and `[9, 7]`  
    - Step 2: Split again into `[4, 1]` and `[3]` → `[9]` and `[7]`  
    - Step 3: Sort and merge back: `[1, 4]`, `[3]`, `[7, 9]`  
    - Step 4: Merge final parts to get `[1, 3, 4, 7, 9]`  

- **Pseudocode**:
```
MergeSort(arr, start, end):
    if start >= end:
        return  // Base case: if the array has one or no elements, it's already sorted

    mid = (start + end) / 2
    MergeSort(arr, start, mid)  // Sort the left half
    MergeSort(arr, mid+1, end)  // Sort the right half
    Merge(arr, start, mid, end)  // Merge the sorted halves

Merge(arr, start, mid, end):
    Create a temporary list
    Use two pointers to merge elements in sorted order
    Copy remaining elements if any
    Copy the merged elements back to the original array
```

- **Approach**:  
  1. **Divide**: Recursively split the array into two halves until each sub-array contains a single element.  
  2. **Conquer**: Merge the sorted halves by comparing elements and placing them in order.  
  3. **Merge Step**: Use a helper function to combine the two sorted halves into a single sorted array.  
  4. This method ensures that we always work on smaller sections before merging them into a final sorted list.  

- **Key Concepts Explained**:  
  - **Divide and Conquer**: The problem is divided into smaller subproblems, solved recursively, and merged back.  
  - **Merging Technique**: Two sorted arrays can be merged efficiently using two pointers.  

- **Time Complexity**: **O(N log N)**, where N is the number of elements. The log N factor comes from splitting, and N comes from merging.  
- **Space Complexity**: **O(N)** due to temporary arrays used in the merging process.  

### **Example Input:**  
`arr = [4, 1, 3, 9, 7]`  

### **Step 1: Divide (Recursive Splitting)**  
Merge Sort follows a **divide-and-conquer** approach, splitting the array into halves recursively until each sub-array contains only one element.  

```
[4, 1, 3, 9, 7]  
  ├── [4, 1, 3]  
  │    ├── [4, 1]  
  │    │    ├── [4] (Base case)  
  │    │    ├── [1] (Base case)  
  │    │    ├── Merge([4], [1]) → [1, 4]  
  │    ├── [3] (Base case)  
  │    ├── Merge([1, 4], [3]) → [1, 3, 4]  
  ├── [9, 7]  
  │    ├── [9] (Base case)  
  │    ├── [7] (Base case)  
  │    ├── Merge([9], [7]) → [7, 9]  
  ├── Merge([1, 3, 4], [7, 9]) → [1, 3, 4, 7, 9]
```

---

### **Step 2: Merge Process (Detailed)**  
At each merge step, two sorted halves are combined into a new sorted array.

#### **First Merge:** `[4]` and `[1]`  
```
Left:  [4]  
Right: [1]  

Compare:
1 < 4 → Add 1
Add remaining 4

Merged: [1, 4]
```

#### **Second Merge:** `[1, 4]` and `[3]`  
```
Left:  [1, 4]  
Right: [3]  

Compare:
1 < 3 → Add 1
3 < 4 → Add 3
Add remaining 4

Merged: [1, 3, 4]
```

#### **Third Merge:** `[9]` and `[7]`  
```
Left:  [9]  
Right: [7]  

Compare:
7 < 9 → Add 7
Add remaining 9

Merged: [7, 9]
```

#### **Final Merge:** `[1, 3, 4]` and `[7, 9]`  
```
Left:  [1, 3, 4]  
Right: [7, 9]  

Compare:
1 < 7 → Add 1
3 < 7 → Add 3
4 < 7 → Add 4
7 < 9 → Add 7
Add remaining 9

Final Sorted Array: [1, 3, 4, 7, 9]
```

### **Final Output:** `[1, 3, 4, 7, 9]`


---

### 312. **Quick Sort** [C++ Code](./_312_Quick_Sort.cpp)  [Python Code](./_312_Quick_Sort.py)  

- **File**: _312_Quick_Sort_  
- **Description**:  
  - This problem requires implementing the **Quick Sort** algorithm, another **divide-and-conquer** sorting technique.  
  - The goal is to sort an array in **ascending order** using a partitioning method.  
  - **Constraints**: The solution should be efficient, aiming for an average time complexity of **O(N log N)**.  

- **Understanding the Problem**:  
  - Imagine you are organizing books on a shelf by height. You pick a **pivot** book and place all shorter books to the left and taller books to the right. Then, you repeat this process for each section until everything is sorted.  
  - Quick Sort works similarly: it selects a pivot element, partitions the array around it, and recursively sorts the two halves.  
  - Example:  
    - Input: `[4, 1, 3, 9, 7]`  
    - Step 1: Pick pivot (e.g., `7`), partition elements → `[4, 1, 3] | 7 | [9]`  
    - Step 2: Sort left part `[4, 1, 3]` → `[1, 3, 4]`  
    - Step 3: Merge results → `[1, 3, 4, 7, 9]`  

- **Pseudocode**:
```
QuickSort(arr, start, end):
    if start >= end:
        return  // Base case

    pivotIndex = Partition(arr, start, end)  // Find pivot position
    QuickSort(arr, start, pivotIndex - 1)  // Sort left half
    QuickSort(arr, pivotIndex + 1, end)  // Sort right half

Partition(arr, start, end):
    Choose the last element as pivot
    Place all elements smaller than pivot on the left
    Place all elements greater than pivot on the right
    Return the pivot index
```

- **Approach**:  
  1. **Pick a Pivot**: Choose an element (typically the last one).  
  2. **Partition**: Rearrange elements so that values smaller than the pivot are on the left and larger ones on the right.  
  3. **Recursive Sorting**: Recursively apply Quick Sort on the left and right partitions.  
  4. This ensures efficient sorting while minimizing memory usage.  

- **Key Concepts Explained**:  
  - **Partitioning**: Rearranging elements so that smaller ones are before the pivot and larger ones are after.  
  - **Recursion**: The function calls itself on smaller sections until the array is sorted.  

- **Time Complexity**:  
  - **Best/Average Case**: **O(N log N)**, where partitioning keeps splitting the array into balanced halves.  
  - **Worst Case**: **O(N²)** (happens when pivot selection is poor, like always choosing the smallest or largest element).  

- **Space Complexity**: **O(log N)** for recursive calls (since it's in-place).  

### **Example Input:**  
`arr = [4, 1, 3, 9, 7]`  

### **Step 1: Choose Pivot**  
We choose the last element as the pivot:  
`Pivot = 7`  

### **Step 2: Partitioning Around Pivot**  
Rearrange elements such that:  
- Elements **≤ pivot** go to the left.  
- Elements **> pivot** go to the right.  

#### **Partition Step for Pivot = 7**  
```
Start:  [4, 1, 3, 9, 7]  
Pivot:  7  
Partitioning:  
- 4 ≤ 7 → Move left  
- 1 ≤ 7 → Move left  
- 3 ≤ 7 → Move left  
- 9 > 7 → Stay right  
Swap pivot 7 with 9 → [4, 1, 3, 7, 9]

Pivot Position: 3  
Left Partition:  [4, 1, 3]  
Right Partition: [9]
```

---

### **Step 3: Recursively Apply Quick Sort**  

#### **Sorting Left Partition `[4, 1, 3]`**  
Pivot: `3`  
```
Start:  [4, 1, 3]  
Pivot:  3  
Partitioning:  
- 4 > 3 → Stay right  
- 1 ≤ 3 → Move left  
Swap pivot 3 with 4 → [1, 3, 4]

Pivot Position: 1  
Left Partition:  [1]  
Right Partition: [4]
```

#### **Sorting Right Partition `[9]`**  
Already sorted.

### **Final Sorted Array:** `[1, 3, 4, 7, 9]`

---

### 313. **Counting Sort** [C++ Code](./_313_Counting_Sort.cpp)  [Python Code](./_313_Counting_Sort.py)  

- **File**: _313_Counting_Sort_  
- **Description**:  
  - This problem requires implementing **Counting Sort**, a non-comparative sorting algorithm.  
  - The algorithm is efficient for sorting characters or numbers within a limited range.  
  - **Constraints**: Works best when the range of input values is small compared to the number of elements.  

- **Understanding the Problem**:  
  - Imagine sorting a collection of letters in alphabetical order. Instead of comparing elements, we **count** occurrences of each letter and place them accordingly.  
  - Example:  
    - Input: `"geeksforgeeks"`  
    - Step 1: Count occurrences → `{g:2, e:4, k:2, s:2, f:1, o:1, r:1}`  
    - Step 2: Sort by frequency order → `"eeeefggkkorss"`  

- **Pseudocode**:
```
CountingSort(arr):
    Create a count array of size 256 (for ASCII characters)
    Initialize all values to 0
    Count occurrences of each character in arr
    Iterate through the count array and reconstruct the sorted string
    Return the sorted result
```

- **Approach**:  
  1. **Count occurrences**: Traverse the input and store frequency counts in a count array.  
  2. **Reconstruct sorted order**: Iterate through the count array and append characters in order.  
  3. **Return the sorted output**.  

- **Key Concepts Explained**:  
  - **Non-Comparative Sorting**: Unlike Quick Sort or Merge Sort, Counting Sort doesn’t compare elements.  
  - **Counting Frequencies**: Sorting is based on counting occurrences and placing elements accordingly.  

- **Time Complexity**: **O(N + K)**, where N is the number of elements and K is the range of values (256 for ASCII).  
- **Space Complexity**: **O(K)** for the count array.  

## **Step-by-Step Dry Run of Counting Sort**  

### **Step 1: Initialize Frequency Array**  
- We create a **count array** of size **256** (for all ASCII characters) and initialize it with `0`.  

```
count[256] = {0}
```


### **Step 2: Count Character Frequencies**  
We iterate through the string `"geeksforgeeks"` and store the frequency of each character in the `count` array.  

#### **Filling the Count Array:**  
| Character | ASCII Value | Count |
|-----------|------------|-------|
| g         | 103        | 2     |
| e         | 101        | 4     |
| k         | 107        | 2     |
| s         | 115        | 2     |
| f         | 102        | 1     |
| o         | 111        | 1     |
| r         | 114        | 1     |


### **Step 3: Construct the Sorted String**  
We iterate through the `count` array and reconstruct the sorted string.  

- If `count[i] > 0`, append character `char(i)` `count[i]` times.  

#### **Building the Sorted String:**  
```
'e' appears 4 times → "eeee"
'f' appears 1 time  → "eeeef"
'g' appears 2 times → "eeeefgg"
'k' appears 2 times → "eeeefggkk"
'o' appears 1 time  → "eeeefggkko"
'r' appears 1 time  → "eeeefggkkor"
's' appears 2 times → "eeeefggkkorss"
```


### **Final Output:**  
```cpp
"eeeefggkkorss"
```

---

### 314. **Find the Kth Largest Element** [C++ Code](./_314_Find_the_Kth_largest_and_smallest_element.cpp)  [Python Code](./_314_Find_the_Kth_largest_and_smallest_element.py)  

- **File**: _314_Find_the_Kth_largest_and_smallest_element_  
- **Description**:  
  - This problem requires finding the **Kth largest element** in an unsorted array.  
  - It uses **QuickSelect**, an optimized approach based on QuickSort.  
  - **Constraints**: The solution should aim for an average time complexity of **O(N)**.  

- **Understanding the Problem**:  
  - Given an unsorted array, find the **Kth largest** element without fully sorting it.  
  - Example:  
    - Input: `[3,2,1,5,6,4]`, `k = 2`  
    - Step 1: Pick pivot (e.g., `4`), partition → `[5,6] | 4 | [3,2,1]`  
    - Step 2: `k=2` means searching the left part → `[5,6]`  
    - Step 3: Largest = `5`  

- **Pseudocode**:
```
QuickSelect(arr, k):
    Choose a pivot randomly
    Partition elements into three groups:
        - Larger than pivot
        - Equal to pivot
        - Smaller than pivot
    Determine the position of k:
        - If k is within the larger group, recurse on that
        - If k is within the smaller group, recurse there
        - Otherwise, return pivot
```

- **Approach**:  
  1. **Choose a pivot** randomly.  
  2. **Partition** the array into elements greater than, equal to, and less than the pivot.  
  3. **Determine position**: Recursively apply the process to the relevant partition.  
  4. **Return the Kth largest** when the position is found.  

- **Key Concepts Explained**:  
  - **QuickSelect Algorithm**: Similar to QuickSort but focuses only on the Kth element.  
  - **Partitioning**: Separating the array into three groups efficiently narrows the search space.  

- **Time Complexity**:  
  - **Average case**: **O(N)**  
  - **Worst case**: **O(N²)** (if pivot selection is poor).  

- **Space Complexity**: **O(1)** (in-place partitioning).  

**Input:**  
`nums = [3, 2, 1, 5, 6, 4], k = 2`  
**Goal:** Find the **2nd largest** element.  

### **Step 1: Choose a Pivot**  
We use the **QuickSelect** algorithm (similar to QuickSort but only focuses on finding the Kth element).  

#### **First Partition (Pivot = 4)**
```
nums = [3, 2, 1, 5, 6, 4]  
Pivot: 4  
Partitioning:  
- 3 ≤ 4 → Move left  
- 2 ≤ 4 → Move left  
- 1 ≤ 4 → Move left  
- 5 > 4 → Move right  
- 6 > 4 → Move right  

Partitioned Array: [3, 2, 1, 4, 5, 6]  
Pivot Position: 3  
```
- **Elements greater than 4:** `[5, 6]`  
- **Elements equal to 4:** `[4]`  
- **Elements smaller than 4:** `[3, 2, 1]`  

Since **k=2**, we search in `[5, 6]` (right partition).  


### **Step 2: Second Partition (Pivot = 6)**
```
nums = [5, 6]  
Pivot: 6  
Partitioning:  
- 5 ≤ 6 → Move left  

Partitioned Array: [5, 6]  
Pivot Position: 1  
```
- **Elements greater than 6:** `[]`  
- **Elements equal to 6:** `[6]`  
- **Elements smaller than 6:** `[5]`  

Since `k=2`, we return **5** as the **2nd largest element**.  


### **Final Output:** `5`  

---

### 315. **Find the Missing Number in an Array** [C++ Code](./_315_Find_the_missing_number_in_an_array_of_1_to_N.cpp) [Python Code](./_315_Find_the_missing_number_in_an_array_of_1_to_N.py)   

- **File**: _315_Find_the_missing_number_in_an_array_of_1_to_N_  
- **Description**:  
  - This problem requires finding the **missing number** from a sequence `[0, 1, 2, ..., N]`.  
  - The solution should be **efficient** with minimal extra space.  
  - **Constraints**: The array has **N** unique numbers from `0` to `N`, with one number missing.  

- **Understanding the Problem**:  
  - Given `N` numbers in a shuffled order, find the missing one.  
  - Example:  
    - Input: `[3, 0, 1]`  
    - Step 1: Expected sum = `0 + 1 + 2 + 3 = 6`  
    - Step 2: Actual sum = `3 + 0 + 1 = 4`  
    - Step 3: Missing number = `6 - 4 = 2`  

- **Pseudocode**:
```
FindMissingNumber(arr):
    total = N * (N + 1) / 2  // Sum of first N numbers
    sum_arr = sum of all elements in arr
    return total - sum_arr  // The missing number
```
OR  
```
FindMissingNumber(arr):
    result = N
    for each index i in arr:
        result = result XOR i
        result = result XOR arr[i]
    return result
```

- **Approach**:  
  1. **Mathematical Approach**: Use the sum formula for `1 to N`, subtract the actual sum.  
  2. **XOR Approach**:  
     - XOR all indices and elements.  
     - Since `X XOR X = 0`, all duplicate numbers cancel out, leaving the missing one.  

- **Key Concepts Explained**:  
  - **Sum Formula**: `N * (N + 1) / 2` calculates the expected total of numbers.  
  - **XOR Property**: Bitwise XOR efficiently finds the missing number with constant space.  

- **Time Complexity**: **O(N)** (linear scan).  
- **Space Complexity**: **O(1)** (constant space).  
**Input:**  
`nums = [3, 0, 1]`  
(Numbers from `0 to N` are present except one missing number.)  

### **Step 1: Compute Expected XOR Value**
```
Expected XOR: 0 ⊕ 1 ⊕ 2 ⊕ 3
             = (00 ⊕ 01 ⊕ 10 ⊕ 11)
             = 11 (Decimal: 3)
```

### **Step 2: Compute XOR of Given Array**
```
Array XOR: 3 ⊕ 0 ⊕ 1
         = (11 ⊕ 00 ⊕ 01)
         = 10 (Decimal: 2)
```

### **Step 3: Compute Missing Number**
```
Missing Number = Expected XOR ⊕ Array XOR
               = 3 ⊕ 2
               = 2
```
### **Final Output:** `2`  
---