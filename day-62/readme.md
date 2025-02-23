## Day 62 - Problems  

---  

### 236. **Find Length of Loop** [C++ Code](./_236_Find_length_of_Loop.cpp)  

- **File**: _236_Find_length_of_Loop.cpp_  
- **Description**:  
  - Given a linked list, determine the length of the loop if one exists.  
  - If there's no loop, return `0`.  

- **Understanding the Problem**:  
  - A loop in a linked list means some node’s `next` pointer points to a previous node instead of `NULL`.  
  - Our task is to detect if a loop exists and, if so, count the number of nodes forming the loop.  

- **How to Solve the Problem**:  
  - Use Floyd’s Cycle Detection Algorithm (Tortoise and Hare method).  
  - If slow and fast pointers meet, a loop exists.  
  - Once a cycle is detected, count the number of nodes in the cycle.  

- **Approach**:  
  1. Initialize two pointers: `slow` (moves one step) and `fast` (moves two steps).  
  2. Traverse until `fast` or `fast->next` is `nullptr` (indicating no loop).  
  3. If `slow == fast`, a loop exists. Count the nodes in the loop by iterating from `slow` until it returns to itself.  

- **Key Concepts Explained**:  
  - **Slow and Fast Pointer Technique**: Helps detect cycles efficiently.  
  - **Loop Counting**: Once a cycle is found, we traverse it to count the number of nodes.  

- **Time Complexity**: O(n) (linear traversal)  
- **Space Complexity**: O(1) (constant extra space)  
- **Dry Run**:  
  - Example: `1 -> 2 -> 3 -> 4 -> 5 -> 3 (loop back to 3)`  
  - Slow and fast pointers meet at node `3`.  
  - Counting starts from `3 -> 4 -> 5 -> 3`, yielding a loop length of `3`.  

---

### 237. **Palindrome Linked List** [C++ Code](./_237_Palindrome_Linked_List.cpp)  

- **File**: _237_Palindrome_Linked_List.cpp_  
- **Description**:  
  - Check if a singly linked list forms a palindrome.  
  - Return `true` if it does, otherwise return `false`.  

- **Understanding the Problem**:  
  - A palindrome reads the same forward and backward.  
  - We need to compare the first half of the list with the reversed second half.  

- **How to Solve the Problem**:  
  - Use the slow and fast pointer technique to find the middle of the linked list.  
  - Reverse the second half of the list.  
  - Compare both halves.  

- **Approach**:  
  1. Use `slow` and `fast` pointers to find the middle of the list.  
  2. Reverse the second half of the list.  
  3. Compare the first and second halves. If all values match, it's a palindrome.  

- **Key Concepts Explained**:  
  - **Finding the Middle Node**: Helps in splitting the list into two halves.  
  - **Reversing a Linked List**: Needed to compare the second half with the first half.  

- **Time Complexity**: O(n) (single pass to find middle, reverse, and compare)  
- **Space Complexity**: O(1) (reversing done in place)  
- **Dry Run**:  
  - Example: `1 -> 2 -> 3 -> 2 -> 1`  
  - Middle is `3`, second half reversed: `1 -> 2`  
  - Compare `1 -> 2` with `1 -> 2`, matches, so it's a palindrome.  

---

### 238. **Odd-Even Linked List** [C++ Code](./_238_Odd_Even_Linked_List.cpp)  

- **File**: _238_Odd_Even_Linked_List.cpp_  
- **Description**:  
  - Reorder a linked list such that all odd-indexed nodes appear before even-indexed nodes while maintaining relative order.  

- **Understanding the Problem**:  
  - Nodes at odd positions should come first, followed by even-positioned nodes.  
  - Maintain relative order of elements.  

- **How to Solve the Problem**:  
  - Use two pointers, one for odd indices and another for even indices.  
  - Iterate and rearrange nodes accordingly.  

- **Approach**:  
  1. Create two pointers: `odd` (starting at head) and `even` (starting at head->next).  
  2. Traverse the list, linking odd nodes together and even nodes together.  
  3. Connect the odd list’s tail to the even list’s head.  

- **Key Concepts Explained**:  
  - **Odd-Even Partitioning**: Splitting nodes based on positions.  
  - **Maintaining Pointers**: Ensuring correct linkage of odd and even lists.  

- **Time Complexity**: O(n) (single traversal)  
- **Space Complexity**: O(1) (no extra space used)  
- **Dry Run**:  
  - Example: `1 -> 2 -> 3 -> 4 -> 5`  
  - Odd list: `1 -> 3 -> 5`, Even list: `2 -> 4`  
  - Merging: `1 -> 3 -> 5 -> 2 -> 4`  

---