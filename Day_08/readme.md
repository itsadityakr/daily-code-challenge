## Day 8 - Problems

---

### 39. **Reverse a Linked List** [🔗](./_39_reverse_a_linked_list.cpp)
   - **File**: _39_reverse_a_linked_list.cpp
   - **Description**: This problem requires reversing a singly linked list. The task is to reverse the links between the nodes in the list such that the head node becomes the last node, and all other nodes are reversed.
   - **Approach**: The solution uses an iterative approach to reverse the linked list. Starting with the head node, the algorithm traverses the list, changing each node’s `next` pointer to point to its previous node. The process continues until all nodes are reversed. The `prev`, `curr`, and `nextNode` pointers help in maintaining the state during the traversal and reversal.
   - **Time Complexity**: O(n), where n is the number of nodes in the linked list. The algorithm traverses the entire list once.
   - **Space Complexity**: O(1), as the solution uses only a constant amount of extra space for the pointers (`prev`, `curr`, and `nextNode`).

---

### 40. **Detect Cycle in a Linked List** [🔗](./_40_detect_cycle_in_linked_list.cpp)
   - **File**: _40_detect_cycle_in_linked_list.cpp
   - **Description**: This problem asks to determine whether a given singly linked list has a cycle. A cycle in a linked list means that a node’s `next` pointer points to one of its previous nodes, causing an infinite loop during traversal.
   - **Approach**: The solution uses the Floyd’s Tortoise and Hare algorithm, which employs two pointers. One pointer (`head`) moves one step at a time, while the other pointer (`tmp`) moves two steps at a time. If there is a cycle, the two pointers will eventually meet. If no cycle is present, the `tmp` pointer will reach the end of the list (`nullptr`).
   - **Time Complexity**: O(n), where n is the number of nodes in the linked list. The algorithm potentially traverses the entire list twice in the worst case.
   - **Space Complexity**: O(1), as the solution only uses two pointers for traversal without requiring additional space.

---

Here’s the updated version with the correct link locations assuming the files are in the `code/` folder:

---