
## Day 61 - Problems  

---

### 233. **Middle of the Linked List** [C++ Code](./_233_Middle_of_the_Linked_List.cpp)  

- **File**: _233_Middle_of_the_Linked_List.cpp_  
- **Description**:  
  - Given a singly linked list, find its middle node.  
  - If there are two middle nodes, return the second one.  

- **Understanding the Problem**:  
  - We need to find the middle node of a linked list.  
  - If the list has an odd number of nodes, return the exact middle.  
  - If the list has an even number of nodes, return the second middle node.  
  - Example:  
    - Input: `1 -> 2 -> 3 -> 4 -> 5`  
    - Output: Node with value `3`  
    - Input: `1 -> 2 -> 3 -> 4 -> 5 -> 6`  
    - Output: Node with value `4`  

- **How to Solve the Problem**:  
  - Use two pointers: one moving one step at a time (`slow`), and another moving two steps at a time (`fast`).  
  - When `fast` reaches the end, `slow` will be at the middle.  

- **Approach**:  
  1. Initialize two pointers, `slow` and `fast`, both pointing at the head.  
  2. Move `slow` by one step and `fast` by two steps until `fast` reaches the end.  
  3. When the loop ends, `slow` will be at the middle of the list.  

- **Key Concepts Explained**:  
  - **Two-pointer technique**: A common approach for solving linked list problems efficiently.  
  - **Tortoise and hare algorithm**: A technique where one pointer moves faster than the other.  

- **Time Complexity**: **O(N)** (since we traverse the list once)  
- **Space Complexity**: **O(1)** (no extra space used)  

- **Dry Run**:  
  ```
  Input: 1 -> 2 -> 3 -> 4 -> 5  
  slow: 1   fast: 1  
  slow: 2   fast: 3  
  slow: 3   fast: 5  
  Output: Node with value 3  
  ```

---

### 234. **Linked List Cycle** [C++ Code](./_234_Linked_List_Cycle.cpp)  

- **File**: _234_Linked_List_Cycle.cpp_  
- **Description**:  
  - Detect if a linked list contains a cycle.  
  - A cycle occurs when a node points back to a previous node instead of `nullptr`.  

- **Understanding the Problem**:  
  - We need to determine if a linked list has a cycle.  
  - If a cycle exists, the linked list does not end.  
  - Example:  
    - Input: `1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle back)`  
    - Output: `true`  

- **How to Solve the Problem**:  
  - Use two pointers (`slow` and `fast`).  
  - If `slow` and `fast` meet at some point, there is a cycle.  
  - If `fast` reaches `nullptr`, there is no cycle.  

- **Approach**:  
  1. Initialize two pointers: `slow` moves one step, `fast` moves two steps.  
  2. If `fast` reaches `nullptr`, return `false` (no cycle).  
  3. If `slow` meets `fast`, return `true` (cycle detected).  

- **Key Concepts Explained**:  
  - **Floyd’s Cycle Detection Algorithm** (Tortoise and Hare Algorithm).  
  - **Fast pointer catching the slow pointer** ensures a cycle exists.  

- **Time Complexity**: **O(N)** (worst-case scenario, we traverse the list once).  
- **Space Complexity**: **O(1)** (no extra space used).  

- **Dry Run**:  
  ```
  Input: 1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle)  
  slow: 1   fast: 1  
  slow: 2   fast: 3  
  slow: 3   fast: 5  
  slow: 4   fast: 3  
  slow: 5   fast: 5  (cycle detected)  
  Output: true  
  ```

---

### 235. **Linked List Cycle II** [C++ Code](./_235_Linked_List_Cycle_II.cpp)  

- **File**: _235_Linked_List_Cycle_II.cpp_  
- **Description**:  
  - Given a linked list with a cycle, return the node where the cycle begins.  
  - If no cycle exists, return `nullptr`.  

- **Understanding the Problem**:  
  - We need to determine where the cycle starts.  
  - Example:  
    - Input: `1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle starts at 2)`  
    - Output: Node with value `2`  

- **How to Solve the Problem**:  
  - Use Floyd’s cycle detection algorithm.  
  - Once a cycle is detected, reset `slow` to `head`.  
  - Move `slow` and `fast` one step at a time until they meet; that’s the cycle start.  

- **Approach**:  
  1. Detect the cycle using the `slow` and `fast` pointers.  
  2. Once detected, reset `slow` to `head`.  
  3. Move both `slow` and `fast` one step at a time until they meet.  
  4. The meeting point is the start of the cycle.  

- **Key Concepts Explained**:  
  - **Mathematical Proof**: The distance from the head to the cycle start equals the distance from the meeting point to the cycle start.  

- **Time Complexity**: **O(N)** (worst-case traversal).  
- **Space Complexity**: **O(1)** (no extra space used).  

- **Dry Run**:  
  ```
  Input: 1 -> 2 -> 3 -> 4 -> 5 -> 2 (cycle starts at 2)  
  slow: 1   fast: 1  
  slow: 2   fast: 3  
  slow: 3   fast: 5  
  slow: 4   fast: 3  
  slow: 5   fast: 5 (cycle detected)  
  Reset slow to head (1), move both slow and fast  
  slow: 2   fast: 2  (cycle starts at 2)  
  Output: Node with value 2  
  ```

---