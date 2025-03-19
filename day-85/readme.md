## Day 85 - Problems  

---

### 296. **Print the Array Elements** [C++ Code](./_296_Print_the_array_elements.cpp)  [Py Code](./_296_Print_the_array_elements.py)  

- **File**: _296_Print_the_array_elements_  
- **Description**: Given an array, print all its elements in order.  
- **Understanding the Problem**: Traverse the array and print each element separated by spaces.  
- **Pseudocode**:
```
function printArr(arr):
    for element in arr:
        print(element, end=" ")
```
- **Approach**: Iterate through the array and print each element.
- **Key Concepts**: Loops, Arrays
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 297. **Find the Maximum and Minimum Element in an Array** [C++ Code](./_297_Find_the_maximum_and_minimum_element_in_an_array.cpp)  [Py Code](./_297_Find_the_maximum_and_minimum_element_in_an_array.py)  

- **File**: _297_Find_the_maximum_and_minimum_element_in_an_array_  
- **Description**: Find the smallest and largest numbers in an array.  
- **Understanding the Problem**: Iterate through the array and keep track of the min and max elements.  
- **Pseudocode**:
```
function minMax(arr):
    min_val, max_val = float('inf'), float('-inf')
    for num in arr:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num
    return [min_val, max_val]
```
- **Approach**: Use a loop to update the min and max values.
- **Key Concepts**: Loops, Comparisons
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 298. **Reverse an Array** [C++ Code](./_298_Reverse_an_array.cpp)  [Py Code](./_298_Reverse_an_array.py)  

- **File**: _298_Reverse_an_array_  
- **Description**: Reverse the elements of the given array in-place.  
- **Understanding the Problem**: Swap the first element with the last, the second with the second last, and so on.  
- **Pseudocode**:
```
function reverseArr(arr):
    start, end = 0, len(arr) - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
```
- **Approach**: Use two pointers (start and end) and swap elements.
- **Key Concepts**: Two-pointer technique
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 299. **Find the Sum of All Elements in an Array** [C++ Code](./_299_Find_the_sum_of_all_elements_in_an_array.cpp)  [Py Code](./_299_Find_the_sum_of_all_elements_in_an_array.py)  

- **File**: _299_Find_the_sum_of_all_elements_in_an_array_  
- **Description**: Compute the sum of all elements in an array.  
- **Understanding the Problem**: Iterate through the array and sum all elements.  
- **Pseudocode**:
```
function sumArr(arr):
    sum = 0
    for num in arr:
        sum += num
    return sum
```
- **Approach**: Use a loop to accumulate the sum.
- **Key Concepts**: Loops, Accumulation
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 300. **Find the Second Largest and Second Smallest Element (Sorting Required)** [C++ Code](./_300_Find_the_second_largest_and_second_smallest_element.cpp)  [Py Code](./_300_Find_the_second_largest_and_second_smallest_element.py)  

- **File**: _300_Find_the_second_largest_and_second_smallest_element_  
- **Description**: Find the second largest and second smallest elements in an array.  
- **Understanding the Problem**: Identify and store the second largest and second smallest numbers without sorting.  
- **Pseudocode**:
```
function secondMinMax(arr):
    min_val, second_min = float('inf'), float('inf')
    max_val, second_max = float('-inf'), float('-inf')
    for num in arr:
        if num < min_val:
            second_min, min_val = min_val, num
        elif num < second_min and num != min_val:
            second_min = num
        if num > max_val:
            second_max, max_val = max_val, num
        elif num > second_max and num != max_val:
            second_max = num
    return [second_min if second_min != float('inf') else -1, second_max if second_max != float('-inf') else -1]
```
- **Approach**: Iterate through the array, updating second largest and smallest values.
- **Key Concepts**: Looping, Conditional Statements
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 301. **Check if an Array is Sorted** [C++ Code](./_301_Check_if_an_array_is_sorted.cpp)  [Py Code](./_301_Check_if_an_array_is_sorted.py)  

- **File**: _301_Check_if_an_array_is_sorted_  
- **Description**: Determine if the given array is sorted in non-decreasing order.  
- **Understanding the Problem**: Compare each element with the next to check if it's in order.  
- **Pseudocode**:
```
function isSorted(nums):
    for i in range(len(nums) - 1):
        if nums[i] > nums[i + 1]:
            return False
    return True
```
- **Approach**: Loop through the array and check for any decreasing element.
- **Key Concepts**: Loops, Comparisons
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---

### 302. **Remove Duplicates from a Sorted Array** [C++ Code](./_302_Remove_duplicates_from_a_sorted_array.cpp)  [Py Code](./_302_Remove_duplicates_from_a_sorted_array.py)  

- **File**: _302_Remove_duplicates_from_a_sorted_array_  
- **Description**: Remove duplicate elements in-place and return the new length.  
- **Understanding the Problem**: Use a pointer to track unique elements and overwrite duplicates.  
- **Pseudocode**:
```
function removeDuplicates(nums):
    if not nums:
        return 0
    j = 1
    for i in range(1, len(nums)):
        if nums[i] != nums[i - 1]:
            nums[j] = nums[i]
            j += 1
    return j
```
- **Approach**: Use a two-pointer approach to modify the array in place.
- **Key Concepts**: Two-pointer technique, Array modification
- **Time Complexity**: O(N)
- **Space Complexity**: O(1)

---