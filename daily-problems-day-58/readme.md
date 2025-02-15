## Day 58 - Problems  

---

### 216. **Reverse Linked List (Iterative)** [C++ Code](./_216_Reverse_Linked_List_Iterative.cpp)  

- **File**: _216_Reverse_Linked_List_Iterative.cpp_  
- **Description**:  
  - Given the head of a singly linked list, reverse the list iteratively.  
  - Constraints: The number of nodes in the list is in the range [0, 5000]. Node values are in the range [-5000, 5000].

- **Understanding the Problem**:  
  - We have a singly linked list, and we need to reverse the direction of all its pointers so that the last node becomes the first.
  - Example: `1 -> 2 -> 3 -> 4 -> 5` becomes `5 -> 4 -> 3 -> 2 -> 1`.

- **How to Solve the Problem**:
  - Maintain three pointers: `prev`, `curr`, and `nextNode`.
  - Traverse the list while updating pointers to reverse the direction.
  - Handle edge cases like an empty list or a single-node list.

- **Approach**:
  1. Initialize `prev` as `nullptr` and `curr` as `head`.
  2. Iterate through the list, storing `curr->next` in `nextNode`.
  3. Reverse `curr->next` to point to `prev`.
  4. Move `prev` and `curr` one step forward.
  5. At the end, return `prev` as the new head.

- **Key Concepts Explained**:
  - **Linked List Traversal**: Moving through a linked list using pointers.
  - **Pointer Reversal**: Adjusting `next` pointers to reverse order.

- **Time Complexity**: O(N) since each node is visited once.
- **Space Complexity**: O(1) as only a few pointers are used.

- **Dry Run**:
  - Before: `1 -> 2 -> 3 -> 4 -> 5 -> nullptr`
  - Step-by-step reversal changes pointers until `5 -> 4 -> 3 -> 2 -> 1 -> nullptr`.

---

### 217. **Reverse Linked List (Recursive)** [C++ Code](./_217_Reverse_Linked_List_Recursive.cpp)  

- **File**: _217_Reverse_Linked_List_Recursive.cpp_  
- **Description**:  
  - Given the head of a singly linked list, reverse the list recursively.  
  - Constraints: The number of nodes in the list is in the range [0, 5000].

- **Understanding the Problem**:  
  - The task is to reverse a linked list using recursion instead of iteration.
  - Example: `1 -> 2 -> 3 -> 4 -> 5` should become `5 -> 4 -> 3 -> 2 -> 1`.

- **How to Solve the Problem**:
  - Use recursion to reach the last node.
  - Modify `next` pointers during the recursive call return phase.
  - Handle edge cases like empty or single-node lists.

- **Approach**:
  1. Base case: If the list is empty or has one node, return head.
  2. Recursively reverse the rest of the list.
  3. Make `head->next->next = head` to reverse the link.
  4. Set `head->next = nullptr` to remove the old link.
  5. Return the new head.

- **Key Concepts Explained**:
  - **Recursion**: Solving the problem by breaking it into smaller instances.
  - **Call Stack**: Recursion stores previous calls to revert pointers correctly.

- **Time Complexity**: O(N) due to visiting each node once.
- **Space Complexity**: O(N) for recursive function calls.

- **Dry Run**:
  - Recursively reach node `5`.
  - Reverse pointer connections in the return phase.
  - Result: `5 -> 4 -> 3 -> 2 -> 1 -> nullptr`.

---

### 218. **Linked List Cycle** [C++ Code](./_218_Linked_List_Cycle.cpp)  

- **File**: _218_Linked_List_Cycle.cpp_  
- **Description**:  
  - Determine if a given linked list has a cycle.
  - Constraints: The number of nodes is in the range [0, 10⁴].

- **Understanding the Problem**:  
  - A linked list has a cycle if any node appears more than once when traversing.
  - Example: `1 -> 2 -> 3 -> 4 -> 2 (cycle)`.

- **How to Solve the Problem**:
  - Use the Floyd’s Cycle Detection Algorithm (Tortoise and Hare method).
  - Use two pointers: `slow` moves one step, `fast` moves two steps.
  - If they meet, a cycle exists.

- **Approach**:
  1. Initialize `slow` and `fast` pointers to `head`.
  2. Move `slow` one step, `fast` two steps.
  3. If `fast` reaches `nullptr`, no cycle exists.
  4. If `slow` and `fast` meet, a cycle exists.

- **Key Concepts Explained**:
  - **Two Pointer Technique**: Using two speeds to detect cycles.
  - **Floyd’s Algorithm**: Efficient cycle detection.

- **Time Complexity**: O(N), worst case when no cycle exists.
- **Space Complexity**: O(1), only two pointers are used.

- **Dry Run**:
  - No cycle: `1 -> 2 -> 3 -> 4 -> nullptr` (fast reaches null).
  - Cycle: `1 -> 2 -> 3 -> 4 -> 2 ...` (slow meets fast at `2`).

---

