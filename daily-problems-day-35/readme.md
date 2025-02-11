## Day 35 - Problems

---
### 117. **Maximum Product Subarray** [CPP Code](./_117_maximum_product_subarray.cpp)
   - **File**: _117_MaximumProductSubarray.cpp_
   - **Description**:  
     The task is to find the maximum product that can be obtained from any contiguous subarray of the given array.  

   - **Approach**:  
     The approach involves **Iterative Traversal** with **Prefix and Suffix Products**. Here's how it works:  
     1. **Understanding the Problem**:  
        - The goal is to maximize the product of elements in a contiguous part of the array.  
        - The tricky part is handling negative numbers and zeros, which can drastically change the product.  

     2. **Iterating Through the Array**:  
        - We calculate two products: one moving from left to right (prefix) and one from right to left (suffix).  
        - Reset the prefix or suffix to `1` if a zero is encountered, as the product of a subarray containing zero is always zero.  
     
     3. **Calculating Maximum Product**:  
        - For every element, compute the maximum of the prefix and suffix products and keep track of the overall maximum.  

     4. **Key Idea**:  
        - Prefix handles the product of elements from the start, while suffix handles it from the end. This ensures we account for subarrays that might start or end with negative numbers.  

     **Explanation for Beginners**:  
     - Imagine you're multiplying numbers in a line. A zero resets everything, and a negative number flips the sign. By looking at both directions (prefix and suffix), we can catch the maximum product no matter where it starts or ends.  

   - **Time Complexity**: \(O(n)\), as we traverse the array twice (once for prefix, once for suffix).  
   - **Space Complexity**: \(O(1)\), as we use only a few variables to store intermediate results.

---

### 118. **Count of Smaller Numbers After Self** [CPP Code](./_118_count_of_smaller_numbers_after_self.cpp)
   - **File**: _118_count_of_smaller_numbers_after_self.cpp
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