Here’s how you can structure the explanations for the given problems following your template:  

---

## Day X - Problems  

---

### 214. **Doubly Linked List - Insertion at Given Position** [C++ Code](./_214_Doubly_linked_list_Insertion_at_given_position.cpp)  

- **File**: _214_Doubly_linked_list_Insertion_at_given_position.cpp_  
- **Description**:  
  - This problem involves inserting a new node at a given position in a **doubly linked list**.  
  - The constraints may involve ensuring that the position is valid within the list.  
  - The function should correctly update the `next` and `prev` pointers while inserting the node.  

- **Understanding the Problem**:  
  - A **doubly linked list (DLL)** is a linked list where each node contains pointers to both the **next** and **previous** nodes.  
  - Given a position `pos` and a value `data`, we need to insert a new node at position `pos` while maintaining the list’s structure.  
  - Example:  
    - **Input**: `1 <-> 2 <-> 4`, insert `3` at `pos = 2`.  
    - **Output**: `1 <-> 2 <-> 3 <-> 4`.  

- **How to Solve the Problem**:  
  - Traverse the list to the given position.  
  - Insert the new node between the current node and the next node.  
  - Ensure all `next` and `prev` pointers are updated correctly.  
  - Handle edge cases where the list is empty or inserting at the end.  

- **Approach**:  
  1. Create a new node with the given data.  
  2. Traverse the list to find the node at position `pos`.  
  3. Adjust the `next` and `prev` pointers of the new node and surrounding nodes.  
  4. Handle cases where the list is empty or inserting at the end.  

- **Key Concepts Explained**:  
  - **Doubly Linked List**: A linked list where nodes contain two pointers (previous and next).  
  - **Pointer Manipulation**: Correctly linking nodes is crucial to maintaining list integrity.  

- **Time Complexity**: **O(N)** (traversing up to `pos` nodes).  
- **Space Complexity**: **O(1)** (only one new node is allocated).  

- **Dry Run**:  
  - Given list: `1 <-> 2 <-> 4`, insert `3` at `pos = 2`.  
  - Traverse to node `2`.  
  - Insert `3` between `2` and `4`.  
  - Update pointers:  
    - `2->next = 3`, `3->prev = 2`.  
    - `3->next = 4`, `4->prev = 3`.  
  - Final list: `1 <-> 2 <-> 3 <-> 4`.  

---

### 215. **Middle of the Linked List** [C++ Code](./_215_Middle_of_the_Linked_List.cpp)  

- **File**: _215_Middle_of_the_Linked_List.cpp_  
- **Description**:  
  - Find the **middle node** of a **singly linked list**.  
  - If the list has an even number of nodes, return the second middle node.  
  - Constraint: Solve in **O(N) time** with **O(1) space**.  

- **Understanding the Problem**:  
  - A **singly linked list (SLL)** has nodes pointing only to the next node.  
  - We need to return the middle node efficiently without counting all nodes first.  
  - Example:  
    - **Input**: `1 -> 2 -> 3 -> 4 -> 5`.  
    - **Output**: `3`.  
    - **Input**: `1 -> 2 -> 3 -> 4 -> 5 -> 6`.  
    - **Output**: `4` (second middle).  

- **How to Solve the Problem**:  
  - Use **two pointers** (`slow` and `fast`).  
  - `slow` moves **one step** at a time.  
  - `fast` moves **two steps** at a time.  
  - When `fast` reaches the end, `slow` is at the middle.  

- **Approach**:  
  1. Initialize two pointers: `slow` and `fast` at `head`.  
  2. Move `slow` by one step, `fast` by two steps.  
  3. Stop when `fast` reaches `nullptr`.  
  4. `slow` is now at the middle node.  

- **Key Concepts Explained**:  
  - **Two Pointer Technique**: Useful for problems involving list traversal.  
  - **Singly Linked List**: Nodes have only a `next` pointer.  

- **Time Complexity**: **O(N)** (each node is visited once).  
- **Space Complexity**: **O(1)** (only pointers used).  

- **Dry Run**:  
  - Given list: `1 -> 2 -> 3 -> 4 -> 5`.  
  - Initial: `slow = 1`, `fast = 1`.  
  - Step 1: `slow = 2`, `fast = 3`.  
  - Step 2: `slow = 3`, `fast = 5`.  
  - Step 3: `fast = nullptr` → return `slow (3)`.  

---
