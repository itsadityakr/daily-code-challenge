## Day 10 - Problems
---
### 43. **Find the Length of Linked List** [🧲](./_43_find_the_length_of_linked_list.cpp)  
   - **File**: _43_find_the_length_of_linked_list.cpp  
   - **Description**: This problem requires calculating the total number of nodes in a singly linked list. Starting from the head node, the function iterates through the list until the end and maintains a count of nodes.  
   - **Approach**:  
     - Initialize a counter to 0.  
     - Traverse the linked list using a pointer.  
     - Increment the counter for each node visited.  
     - Return the counter once the traversal is complete.  
   - **Time Complexity**: \(O(n)\), where \(n\) is the number of nodes in the linked list.  
   - **Space Complexity**: \(O(1)\), as no extra space is used apart from the counter variable.

---

### 44. **Remove N-th Node from End of Linked List** [🧲](./_44_remove_nth_node_from_linked_list.cpp)  
   - **File**: _44_remove_nth_node_from_linked_list.cpp  
   - **Description**: The task is to remove the \(n\)-th node from the end of a singly linked list. To achieve this efficiently, a two-pointer technique is used to locate the node to be removed.  
   - **Approach**:  
     - Use a dummy node pointing to the head to handle edge cases like removing the head itself.  
     - Move a `fast` pointer \(n+1\) steps ahead.  
     - Traverse the list with both `fast` and `slow` pointers until `fast` reaches the end.  
     - Adjust the `next` pointer of the `slow` pointer to skip the node to be removed.  
   - **Time Complexity**: \(O(n)\), where \(n\) is the number of nodes in the linked list.  
   - **Space Complexity**: \(O(1)\), as no additional space is used.  

---

### 45. **Find the Middle Element of Linked List** [🧲](./_45_find_the_middle_element_of_linked_list.cpp)  
   - **File**: _45_find_the_middle_element_of_linked_list.cpp  
   - **Description**: The problem involves finding the middle node of a singly linked list. If the list has an even number of nodes, return the second middle node.  
   - **Approach**:  
     - Use two pointers, `slow` and `fast`.  
     - The `fast` pointer moves two steps at a time, while the `slow` pointer moves one step.  
     - When `fast` reaches the end of the list, `slow` will be at the middle node.  
   - **Time Complexity**: \(O(n)\), where \(n\) is the number of nodes in the linked list.  
   - **Space Complexity**: \(O(1)\), as no additional space is used.  

---