## Day 8 - Linked List Operations
---

### 1. **Insert at End (Default)** [🧲](./_SLL_01_insert_at_end_default.cpp)
   - **File**: `_SLL_01_insert_at_end_default.cpp`
   - **Description**: This function inserts a new node with the specified value at the end of a singly linked list. If the list is empty, it assigns the new node as the head. Otherwise, it traverses to the last node and appends the new node after it.
   - **Approach**: 
     1. Create a new node with the given value.
     2. If the list is empty, make the new node the head.
     3. If the list is non-empty, traverse to the last node and link it to the new node.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we need to traverse through the entire list to find the last node.
   - **Space Complexity**: O(1), as we are only using a fixed amount of extra space for the new node.

---

### 2. **Insert at Beginning** [🧲](./_SLL_02_insert_at_first.cpp)
   - **File**: `_SLL_02_insert_at_first.cpp`
   - **Description**: This function inserts a new node with the given value at the beginning of the singly linked list. The new node's `next` pointer is set to the current head of the list, and then the head is updated to the new node.
   - **Approach**:
     1. Create a new node with the provided value.
     2. Set the `next` pointer of the new node to the current head.
     3. Update the head to point to the new node.
   - **Time Complexity**: O(1), as we are directly modifying the head and do not need to traverse the list.
   - **Space Complexity**: O(1), as we are only allocating space for one new node.

---

### 3. **Insert at Index** [🧲](./_SLL_03_insert_at_index.cpp)
   - **File**: `_SLL_03_insert_at_index.cpp`
   - **Description**: This function inserts a new node with the given value at the specified index in the singly linked list. If the index is `0`, it inserts the node at the beginning. Otherwise, it traverses the list to the given index and inserts the node there.
   - **Approach**:
     1. Create a new node with the provided value.
     2. If the index is `0`, set the new node as the head.
     3. Otherwise, traverse the list until the node just before the specified index.
     4. Insert the new node at the specified index by adjusting the `next` pointers.
   - **Time Complexity**: O(n), where `n` is the index, as we need to traverse the list to the desired position.
   - **Space Complexity**: O(1), as we only allocate space for the new node.

---

### 4. **Insert After Index** [🧲](./_SLL_04_insert_after_index.cpp)
   - **File**: `_SLL_04_insert_after_index.cpp`
   - **Description**: This function inserts a new node with the given value after the specified index in the singly linked list. It traverses the list to the node at the specified index and inserts the new node after it.
   - **Approach**:
     1. Create a new node with the given value.
     2. Traverse the list until the node at the specified index is reached.
     3. Insert the new node after the specified node by adjusting the `next` pointers.
   - **Time Complexity**: O(n), where `n` is the index, as we need to traverse the list to find the desired node.
   - **Space Complexity**: O(1), as we only allocate space for the new node.

---

### 5. *Insert Before Index** [🧲](./_SLL_05_insert_before_index.cpp)
   - **File**: `_SLL_05_insert_before_index.cpp`
   - **Description**: This function inserts a new node with the given value before the specified index in the singly linked list. If the index is `0`, the new node is inserted at the beginning. Otherwise, the list is traversed to the node just before the index, and the new node is inserted there.
   - **Approach**:
     1. Create a new node with the given value.
     2. If the index is `0`, insert the node at the beginning.
     3. Traverse the list to the node just before the specified index.
     4. Insert the new node before the node at the specified index by adjusting the `next` pointers.
   - **Time Complexity**: O(n), where `n` is the index, as we need to traverse the list to find the node before the specified index.
   - **Space Complexity**: O(1), as we only allocate space for the new node.

---

### 6. **Insert After Value** [🧲](./_SLL_06_insert_after_value.cpp)
   - **File**: `_SLL_06_insert_after_value.cpp`
   - **Description**: This function inserts a new node with the given value immediately after the first occurrence of a specified value in the list. It traverses the list to find the node containing the specified value and inserts the new node after it.
   - **Approach**:
     1. Traverse the list to find the node containing the specified value.
     2. Create a new node with the given value.
     3. Insert the new node after the found node by adjusting the `next` pointers.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may need to traverse the entire list to find the node with the given value.
   - **Space Complexity**: O(1), as we only allocate space for the new node.

---

### 7. **Insert Before Value** [🧲](./_SLL_07_insert_before_value.cpp)
   - **File**: `_SLL_07_insert_before_value.cpp`
   - **Description**: This function inserts a new node with the given value before the first occurrence of a specified value in the list. It traverses the list to find the node containing the specified value and inserts the new node before it.
   - **Approach**:
     1. If the list is empty, return immediately.
     2. If the head node contains the specified value, insert the new node at the beginning.
     3. Otherwise, traverse the list to find the node containing the specified value.
     4. Insert the new node before the found node by adjusting the `next` pointers.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may need to traverse the entire list to find the node with the given value.
   - **Space Complexity**: O(1), as we only allocate space for the new node.

---

### 08. **Traverse the Linked List** [🧲](./_SLL_08_traverse.cpp)
   - **File**: `_SLL_08_traverse.cpp`
   - **Description**: This function prints all the elements of a singly linked list in a sequence, starting from the head and following the `next` pointers until the end of the list (denoted by `nullptr`).
   - **Approach**:
     1. Initialize a pointer to the head of the list.
     2. Traverse the list and print each node's value followed by "->".
     3. After reaching the end, print "nullptr" to indicate the end of the list.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we need to visit each node.
   - **Space Complexity**: O(1), as only a fixed amount of space is used for traversal.

---

### 09. **Traverse the Linked List in Range** [🧲](./_SLL_09_traverse_in_range.cpp)
   - **File**: `_SLL_09_traverse_in_range.cpp`
   - **Description**: This function prints the elements of a singly linked list within a specified range of indices (`start` to `end`). If the range is valid, it prints the nodes in the given range; otherwise, it prints a message indicating no elements in the range.
   - **Approach**:
     1. Traverse the list while keeping track of the index.
     2. Print the node's value if the current index is within the specified range.
     3. Stop once the index exceeds the `end` value and handle cases where no elements are found within the range.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may traverse up to the last node.
   - **Space Complexity**: O(1), as we are only using a fixed amount of space for traversal.

---

### 10. **Delete the First Element** [🧲](./_SLL_10_delete_first_element.cpp)
   - **File**: `_SLL_10_delete_first_element.cpp`
   - **Description**: This function deletes the first node of the singly linked list. If the list is not empty, it updates the head to the second node and frees the memory of the removed node.
   - **Approach**:
     1. Check if the list is empty. If so, return immediately.
     2. Set the head to the second node and delete the original head.
   - **Time Complexity**: O(1), as the operation only requires adjusting the head.
   - **Space Complexity**: O(1), as we are only using a fixed amount of space.

---

### 11. **Delete the Last Element** [🧲](./_SLL_11_delete_last_element.cpp)
   - **File**: `_SLL_11_delete_last_element.cpp`
   - **Description**: This function deletes the last node of the singly linked list. It traverses the list to find the second-to-last node and sets its `next` pointer to `nullptr` before deleting the last node.
   - **Approach**:
     1. Check if the list is empty or has only one element. Handle these cases by deleting the head.
     2. Traverse to the second-to-last node and update its `next` pointer to `nullptr` before deleting the last node.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we need to traverse to the second-to-last node.
   - **Space Complexity**: O(1), as we only use a fixed amount of space.

---

### 12. **Delete by Index** [🧲](./_SLL_12_delete_by_index.cpp)
   - **File**: `_SLL_12_delete_by_index.cpp`
   - **Description**: This function deletes the node at a specified index in the singly linked list. It handles special cases for the first node (index 0) and traverses the list to the node just before the specified index to perform the deletion.
   - **Approach**:
     1. If the list is empty, return immediately.
     2. If the index is `0`, delete the head node.
     3. Otherwise, traverse the list to find the node just before the specified index, adjust the `next` pointers, and delete the node.
   - **Time Complexity**: O(n), where `n` is the index, as we may need to traverse to that index.
   - **Space Complexity**: O(1), as we only allocate space for the current node during traversal.

---

### 13. **Delete by Value** [🧲](./_SLL_13_delete_by_value.cpp)
   - **File**: `_SLL_13_delete_by_value.cpp`
   - **Description**: This function deletes the first occurrence of a node with the specified value in the singly linked list. It handles special cases for the head and traverses the list to find the node with the given value, adjusting the `next` pointers accordingly.
   - **Approach**:
     1. If the list is empty, return immediately.
     2. If the head node contains the specified value, delete the head node.
     3. Otherwise, traverse the list to find the node with the specified value, adjust the `next` pointers, and delete the node.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may need to traverse the entire list.
   - **Space Complexity**: O(1), as only a fixed amount of space is used.

---

### 14. **Search by Value** [🧲](./_SLL_14_search_by_value.cpp)
   - **File**: `_SLL_14_search_by_value.cpp`
   - **Description**: This function searches for a specified value in the singly linked list and prints the index of the first occurrence of the value. If the value is not found, it prints `-1`.
   - **Approach**:
     1. Traverse the list and compare each node's value with the specified value.
     2. If the value is found, print the index of the node and return.
     3. If the end of the list is reached without finding the value, print `-1`.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may need to traverse the entire list.
   - **Space Complexity**: O(1), as only a fixed amount of space is used.

---

### 15. **Search by Index** [🧲](./_SLL_15_search_by_index.cpp)
   - **File**: `_SLL_15_search_by_index.cpp`
   - **Description**: This function searches for a node at a specified index in the singly linked list and prints its value. If the index is out of bounds, it prints `-1`.
   - **Approach**:
     1. Traverse the list, keeping track of the index.
     2. If the specified index is found, print the value at that index.
     3. If the index is out of bounds, print `-1`.
   - **Time Complexity**: O(n), where `n` is the index, as we may need to traverse up to that index.
   - **Space Complexity**: O(1), as only a fixed amount of space is used.

---

### 16. **Update Value** [🧲](./_SLL_16_update_value.cpp)
   - **File**: `_SLL_16_update_value.cpp`
   - **Description**: This function updates the value of the first occurrence of a specified value in the singly linked list to a new value. If the value is not found, it prints `-1`.
   - **Approach**:
     1. Traverse the list to find the node with the specified value.
     2. If found, update the node's value to the new value.
     3. If the value is not found, print `-1`.
   - **Time Complexity**: O(n), where `n` is the number of nodes in the list, as we may need to traverse the entire list.
   - **Space Complexity**: O(1), as only a fixed amount of space is used.

---

### 17. **Update Value at Index** [🧲](./_SLL_17_update_value_at_index.cpp)
   - **File**: `_SLL_17_update_value_at_index.cpp`
   - **Description**: This function updates the value of the node at a specified index in the singly linked list. If the index is out of bounds, it prints `-1`.
   - **Approach**:
     1. Traverse the list to the specified index.
     2. If the index is valid, update the value of the node at that index.
     3. If the index is out of bounds, print `-1`.
   - **Time Complexity**: O(n), where `n` is the index, as we may need to traverse up to that index.
   - **Space Complexity**: O(1), as only a fixed amount of space is used.

---