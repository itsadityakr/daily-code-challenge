## Day 34 - Problems

---



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