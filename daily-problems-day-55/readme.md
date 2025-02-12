## Day 55 - Problems  

---

### 209. **Design Linked List** [C++ Code](./_209_Design_Linked_List.cpp)  

- **File**: _209_Design_Linked_List.cpp_  
- **Description**:  
  - Implement a **singly linked list** with operations to get a value at an index, add a value at the head or tail, insert a value at a specific index, and delete a node at an index.  
  - Constraints:  
    - Operations should be efficient in terms of time complexity.  
    - The list should handle edge cases such as empty lists, invalid indices, and insertions/deletions at boundaries.  

- **Understanding the Problem**:  
  - A linked list is a data structure where each element (node) contains a value and a pointer to the next node.  
  - Unlike arrays, elements in a linked list are not stored in contiguous memory locations.  
  - Example:  
    ```plaintext
    Linked List: 1 -> 2 -> 3 -> NULL  
    get(1) → returns 2  
    addAtHead(0) → 0 -> 1 -> 2 -> 3 -> NULL  
    addAtTail(4) → 0 -> 1 -> 2 -> 3 -> 4 -> NULL  
    deleteAtIndex(2) → 0 -> 1 -> 3 -> 4 -> NULL  
    ```

- **How to Solve the Problem**:  
  - Use a **Node** struct with `val` and `next` pointers.  
  - Maintain `head`, `tail`, and `size` to efficiently track the list.  
  - Carefully handle cases like empty list operations and insertions/deletions at head/tail.  

- **Approach**:  
  1. **Get(index)**: Traverse the list to the given index and return the value.  
  2. **AddAtHead(val)**: Create a new node and make it the new head.  
  3. **AddAtTail(val)**: Append a new node to the last node.  
  4. **AddAtIndex(index, val)**: Traverse to `index-1`, insert the new node.  
  5. **DeleteAtIndex(index)**: Find the node before `index`, adjust pointers, and free memory.  

- **Key Concepts Explained**:  
  - **Pointers**: Used to link nodes dynamically in memory.  
  - **Edge Cases**: Handling empty lists, out-of-bounds access, and insertions at the head/tail.  

- **Time Complexity**:  
  - Get: **O(N)** (traverse list)  
  - Add at Head: **O(1)** (update head)  
  - Add at Tail: **O(1)** (update tail)  
  - Add at Index: **O(N)** (traverse to index)  
  - Delete at Index: **O(N)** (traverse and adjust pointers)  

- **Space Complexity**: **O(1)** (only pointers and size variable)  

- **Dry Run**:  
  ```plaintext
  Initial: Empty List  
  addAtHead(1) → 1  
  addAtTail(2) → 1 -> 2  
  addAtIndex(1,3) → 1 -> 3 -> 2  
  deleteAtIndex(1) → 1 -> 2  
  ```

---

### 210. **Count Linked List Nodes** [C++ Code](./_210_Count_Linked_List_Nodes.cpp)  

- **File**: _210_Count_Linked_List_Nodes.cpp_  
- **Description**:  
  - Given the head of a **singly linked list**, return the total number of nodes.  
  - Constraints:  
    - The list can be empty (return 0).  
    - The maximum possible nodes are **large**, so the approach should be efficient.  

- **Understanding the Problem**:  
  - A **traversal-based approach** is needed to count nodes.  
  - Example:  
    ```plaintext
    Input: 1 -> 2 -> 3 -> NULL  
    Output: 3  
    ```

- **How to Solve the Problem**:  
  - Initialize a `count` variable.  
  - Traverse the list from `head` to `NULL`, incrementing `count`.  

- **Approach**:  
  1. Start with `count = 0`.  
  2. Use a pointer to traverse the list.  
  3. Increment `count` at each step.  
  4. Stop when the pointer reaches `NULL`.  

- **Key Concepts Explained**:  
  - **Iteration**: Simple traversal using a loop.  
  - **Edge Cases**: Empty list should return 0.  

- **Time Complexity**: **O(N)** (traverse all nodes)  
- **Space Complexity**: **O(1)** (only counter variable)  

- **Dry Run**:  
  ```plaintext
  Input: 1 -> 2 -> 3 -> NULL  
  count = 0  
  count = 1 (1)  
  count = 2 (2)  
  count = 3 (3)  
  Output: 3  
  ```

---

### 211. **Search in Linked List** [C++ Code](./_211_Search_in_Linked_List.cpp)  

- **File**: _211_Search_in_Linked_List.cpp_  
- **Description**:  
  - Given a **singly linked list** and a key, return `true` if the key is found, otherwise return `false`.  
  - Constraints:  
    - The list can be empty.  
    - The key may not be present.  

- **Understanding the Problem**:  
  - We need to **search for a value** in the linked list.  
  - Example:  
    ```plaintext
    Input: head = 1 -> 2 -> 3, key = 2  
    Output: true  

    Input: head = 1 -> 2 -> 3, key = 4  
    Output: false  
    ```

- **How to Solve the Problem**:  
  - Traverse the list, checking if `curr->data == key`.  

- **Approach**:  
  1. Start from `head`.  
  2. Compare `curr->data` with `key`.  
  3. If found, return `true`.  
  4. Move to the next node.  
  5. If end reached, return `false`.  

- **Key Concepts Explained**:  
  - **Linear Search**: Sequentially checking each element.  
  - **Edge Cases**: Empty list and key not present.  

- **Time Complexity**: **O(N)** (traverse all nodes)  
- **Space Complexity**: **O(1)** (only pointers used)  

- **Dry Run**:  
  ```plaintext
  Input: 1 -> 2 -> 3, key = 2  
  Compare 1 != 2  
  Compare 2 == 2 (Found) → Output: true  

  Input: 1 -> 2 -> 3, key = 4  
  Compare 1 != 4  
  Compare 2 != 4  
  Compare 3 != 4  
  End reached → Output: false  
  ```

---