## Day 59 - Problems

---

### 219. **Creating a Node Structure of Linked List** [C++ Code](./_219_Creating_a_Node_Structure_of_Linked_List.cpp)

-   **File**: _219_Creating_a_Node_Structure_of_Linked_List.cpp_
-   **Description**:

    -   This problem requires creating a basic structure for a singly linked list node.
    -   The structure should store an integer value and a pointer to the next node.

-   **Understanding the Problem**:

    -   A linked list is a collection of nodes, where each node contains data and a pointer to the next node.
    -   In this problem, we need to define a `struct` to represent a node in the linked list.

-   **How to Solve the Problem**:

    -   We create a `struct` called `Node` with two members:
        1. `data` (to store the value)
        2. `next` (a pointer to the next node)
    -   The constructor initializes `data` with a given value and sets `next` to `nullptr`.

-   **Approach**:

    1. Define a `struct` named `Node`.
    2. Include an integer variable for storing data.
    3. Include a pointer variable to link to the next node.
    4. Use a constructor to initialize the data and set the next pointer to `nullptr`.

-   **Key Concepts Explained**:

    -   **Linked List**: A data structure where elements (nodes) are linked using pointers.
    -   **Pointer**: A variable that stores the memory address of another variable.

-   **Time Complexity**: O(1) (Creating a node is a constant-time operation)
-   **Space Complexity**: O(1) (Each node occupies a fixed amount of memory)

-   **Dry Run**:
    -   Input: `Node(5)`
    -   Output: A node is created with `data = 5` and `next = nullptr`.

---

### 220. **Insert at Head in Linked List** [C++ Code](./_220_Insert_at_Head_in_Linked_List.cpp)

-   **File**: _220_Insert_at_Head_in_Linked_List.cpp_
-   **Description**:

    -   This problem requires inserting a new node at the beginning (head) of a singly linked list.

-   **Understanding the Problem**:

    -   A linked list consists of nodes connected by pointers.
    -   Inserting at the head means creating a new node and updating the head pointer.

-   **How to Solve the Problem**:

    -   Create a new node with the given value.
    -   Set the new node’s `next` pointer to the current head.
    -   Update the head pointer to the new node.

-   **Approach**:

    1. Define a `LinkedList` class.
    2. Implement a method `insertAtHead(int val)`.
    3. Create a new node with `val`.
    4. Set its `next` pointer to the current head.
    5. Update the head to the new node.

-   **Key Concepts Explained**:

    -   **Head Pointer**: A pointer that keeps track of the first node in the list.

-   **Time Complexity**: O(1) (Insertion at head is a constant-time operation)
-   **Space Complexity**: O(1)

-   **Dry Run**:
    -   Input: `insertAtHead(3) → insertAtHead(5)`
    -   Output: List becomes `5 -> 3 -> NULL`.

---
