## Day 60 - Problems

---

### 221. **Insert at Tail in Linked List** [C++ Code](./_221_Insert_at_Tail_in_Linked_List.cpp)

-   **File**: _221_Insert_at_Tail_in_Linked_List.cpp_
-   **Description**:

    -   This problem requires inserting a new node at the end (tail) of a linked list.

-   **Understanding the Problem**:

    -   To insert at the tail, traverse the list to the last node and update its `next` pointer.

-   **How to Solve the Problem**:

    -   Create a new node with the given value.
    -   If the list is empty, update the head pointer.
    -   Otherwise, traverse to the last node and set its `next` pointer to the new node.

-   **Approach**:

    1. Check if the list is empty. If so, set the new node as the head.
    2. Otherwise, traverse to the last node.
    3. Update its `next` pointer to point to the new node.

-   **Key Concepts Explained**:

    -   **Tail Node**: The last node in a linked list, which has `next = nullptr`.

-   **Time Complexity**: O(n) (Traversing the list takes linear time)
-   **Space Complexity**: O(1)

-   **Dry Run**:
    -   Input: `insertAtTail(2) → insertAtTail(4)`
    -   Output: List becomes `2 -> 4 -> NULL`.

---

### 222. **Insert at Position in Linked List** [C++ Code](./_222_Insert_at_Position_in_Linked_List.cpp)

-   **File**: _222_Insert_at_Position_in_Linked_List.cpp_
-   **Description**:

    -   This problem requires inserting a node at a specific position in a linked list.

-   **Understanding the Problem**:

    -   To insert at a given position, traverse the list until reaching the desired location.

-   **How to Solve the Problem**:

    -   Create a new node with the given value.
    -   If inserting at the head, update the head pointer.
    -   Otherwise, traverse to the required position and update pointers accordingly.

-   **Approach**:

    1. If `pos == 1`, insert at head.
    2. Otherwise, traverse to `pos - 1` node.
    3. Update the new node’s `next` pointer to point to the next node.
    4. Update the previous node’s `next` pointer to the new node.

-   **Key Concepts Explained**:

    -   **Position-Based Insertion**: Adding a node at a specific location by adjusting pointers.

-   **Time Complexity**: O(n) (Traversing the list takes linear time)
-   **Space Complexity**: O(1)

-   **Dry Run**:
    -   Input: `insertAtPosition(7, 2)` on list `5 -> 10 -> NULL`
    -   Output: List becomes `5 -> 7 -> 10 -> NULL`.

---
