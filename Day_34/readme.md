## Day 34 - Problems

---

### 115. **Count of Smaller Numbers After Self** [CPP Code](./_115_count_inversions.cpp)
   - **File**: _115_count_inversions.cpp
   - **Description**:  
     Given an array of integers, the task is to return a list of integers `res` where `res[i]` indicates the count of smaller numbers to the right of `nums[i]`.
   - **Approach**:  
     This problem uses a **modified merge sort** technique to count the smaller numbers efficiently. The core idea is to divide the array into smaller parts, sort them, and count the relevant numbers during the merge process.  

     **Steps:**  
     1. **Divide the array:** Using a divide-and-conquer approach, we split the array into two halves recursively.  
     2. **Merge step:**  
        - When merging two sorted subarrays, if an element from the left subarray is less than or equal to an element in the right subarray, it means all previously encountered elements in the right subarray are smaller.  
        - Update the count for the element accordingly.  
     3. **Index mapping:** To ensure the counts align with the original array indices, we use an `idx` array that keeps track of the original indices of the elements being merged.  
     4. **Final result:** Once the merging process is complete, the `res` array contains the desired counts.  

     **Explanation of terms:**  
     - **Merge Sort:** A divide-and-conquer algorithm that splits the array into halves, sorts them, and merges them back.  
     - **Smaller Count:** The number of elements to the right of a given element that are smaller than it.  

   - **Time Complexity**: \(O(n log n)\), where \(n\) is the size of the input array.  
   - **Space Complexity**: \(O(n)\), for the temporary arrays used during merging.  

---

### 116. **Reverse Pairs** [CPP Code](./_116_reverse_pairs.cpp)
   - **File**: _116_reverse_pairs.cpp
   - **Description**:  
     The goal is to count all the **reverse pairs** in an array. A reverse pair is defined as a pair of indices \((i, j)\) such that \(i < j\) and \(nums[i] > 2 \times nums[j]\).  
   - **Approach**:  
     This problem also uses a **modified merge sort** technique, where we count the reverse pairs during the merge step.  

     **Steps:**  
     1. **Divide the array:** Recursively divide the array into smaller parts.  
     2. **Count reverse pairs:**  
        - For each pair of indices \(i\) in the left subarray and \(j\) in the right subarray, check if \(nums[i] > 2 \times nums[j]\).  
        - Increment the count for valid pairs.  
     3. **Merge step:**  
        - Merge the two sorted subarrays into one while maintaining sorted order.  
        - Use a temporary array for efficient merging.  
     4. **Final count:** The total count of reverse pairs is the sum of counts from all merge steps.  

     **Explanation of terms:**  
     - **Reverse Pair:** A pair of indices \((i, j)\) such that \(nums[i] > 2 \times nums[j]\).  
     - **Merge Sort:** Used to maintain sorted order and efficiently count valid pairs during merging.  

   - **Time Complexity**: \(O(n log n)\), where \(n\) is the size of the input array.  
   - **Space Complexity**: \(O(n)\), for the temporary arrays used during merging.  

--- 