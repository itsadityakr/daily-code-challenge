## Day 56 - Problems  

---

### 212. **Linked List Insertion At End** [C++ Code](./_212_Linked_List_Insertion_At_End.cpp)  

- **File**: _212_Linked_List_Insertion_At_End.cpp_  
- **Description**:  
  - Insert a new node with a given value at the end of a singly linked list.  
  - The function should return the head of the updated list.  
  - The linked list is defined using a `struct Node`.  

- **Understanding the Problem**:  
  - A linked list is a data structure where each element (node) contains a value and a pointer to the next node.  
  - We need to add a new node at the end of the list without modifying the existing nodes.  
  - Example:  
    ```plaintext
    Input: 1 -> 2 -> 3, x = 4  
    Output: 1 -> 2 -> 3 -> 4  
    ```

- **How to Solve the Problem**:
  - Traverse the list to find the last node.
  - Attach the new node at the end by updating the last node’s `next` pointer.
  - Handle the case where the list is empty (return the new node as the head).

- **Approach**:  
  1. Create a new node with the given value.  
  2. If the list is empty, return the new node as the new head.  
  3. Otherwise, iterate through the list until reaching the last node.  
  4. Set the last node’s `next` pointer to the new node.  
  5. Return the head of the updated list.  

- **Key Concepts Explained**:  
  - **Linked List Traversal**: Moving through a linked list using `next` pointers.  
  - **Dynamic Memory Allocation**: New nodes are created dynamically using `new`.  

- **Time Complexity**: **O(N)** (We traverse the list once).  
- **Space Complexity**: **O(1)** (Only a single new node is created).  
- **Dry Run**:  
  - Given `head = 1 -> 2 -> 3` and `x = 4`:
    - Start at `1`, move to `2`, then `3` (last node).
    - Attach `4` at the end.
    - Return `1 -> 2 -> 3 -> 4`.

---

### 213. **Delete Node in a Linked List** [C++ Code](./_213_Delete_Node_in_a_Linked_List.cpp)  

- **File**: _213_Delete_Node_in_a_Linked_List.cpp_  
- **Description**:  
  - Given access to a node (not necessarily the head), delete that node from the linked list.  
  - The function does not return anything but modifies the list in-place.  

- **Understanding the Problem**:  
  - Instead of accessing the head, we are given a reference to the node that needs to be deleted.  
  - Since we don’t have a reference to the previous node, we can’t adjust the previous node’s `next` pointer.  
  - Instead, we copy the value from the next node and delete the next node.  
  - Example:  
    ```plaintext
    Input: 1 -> 2 -> 3 -> 4 (node to delete = 3)  
    Output: 1 -> 2 -> 4  
    ```

- **How to Solve the Problem**:  
  - Copy the value of the next node into the current node.  
  - Adjust the `next` pointer to skip the next node.  
  - Delete the next node to free memory.  

- **Approach**:  
  1. Assign `node->val = node->next->val`.  
  2. Store `node->next` in a temporary pointer.  
  3. Update `node->next` to skip the next node.  
  4. Delete the temporary pointer to free memory.  

- **Key Concepts Explained**:  
  - **In-Place Deletion**: Instead of modifying pointers of the previous node, we shift values.  
  - **Memory Management**: The deleted node is freed using `delete`.  

- **Time Complexity**: **O(1)** (Only a few pointer updates and value changes).  
- **Space Complexity**: **O(1)** (No extra space is used).  
- **Dry Run**:  
  - Given `1 -> 2 -> 3 -> 4`, deleting `3`:
    - Copy `4` into `3` (list becomes `1 -> 2 -> 4 -> 4`).
    - Remove the duplicate `4` node.
    - Output: `1 -> 2 -> 4`.

---