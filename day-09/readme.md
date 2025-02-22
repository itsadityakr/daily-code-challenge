## Day 9 - Problems

---

### 41. **Merge Two Sorted Linked Lists** [🧲](./_41_merge_two_sorted_linked_list.cpp)
   - **File**: _41_merge_two_sorted_linked_list.cpp
   - **Description**: Given two sorted linked lists, merge them into one sorted linked list. The merged list should retain the sorting order.
   - **Approach**: 
     - Use a recursive approach to compare the current nodes of both lists.
     - If the data in the first list's node is smaller or equal, recursively merge the rest of the first list with the second list.
     - Otherwise, merge the first list with the rest of the second list.
     - Update the `next` pointer accordingly to maintain the merged structure.
   - **Time Complexity**: \(O(n + m)\), where \(n\) and \(m\) are the lengths of the two lists.
   - **Space Complexity**: \(O(n + m)\) due to the recursive call stack.

---

### 42. **Remove Duplicates in Linked List** [🧲](./_42_remove_duplicates_in_linked_list.cpp)
   - **File**: _42_remove_duplicates_in_linked_list.cpp
   - **Description**: Remove duplicate values from a sorted linked list so that each element appears only once.
   - **Approach**: 
     - Use an iterative approach to traverse the linked list.
     - Compare the current node's data with the next node's data.
     - If they are equal, skip the next node by adjusting the `next` pointer and deallocate the skipped node.
     - Continue this process until the end of the list is reached.
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the linked list.
   - **Space Complexity**: \(O(1)\), as the solution uses constant space.

---