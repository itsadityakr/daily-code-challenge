## Day 35 - Problems

---

### 118. **Count of Smaller Numbers After Self** [CPP Code](./_115_count_inversions.cpp)
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