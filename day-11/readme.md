## Day 11 - Problems

---

### 46. **Stack using Arrays** [🧲](./_46_stack_using_arrays.cpp)
   - **File**: _46_stack_using_arrays.cpp
   - **Description**: This implementation uses an array to implement a stack with basic stack operations such as `push`, `pop`, `peek`, checking if the stack is empty, and returning the stack size. The array has a fixed maximum size (`MAX = 1000`), and the stack grows or shrinks based on the value of `top`, which tracks the index of the last inserted element.
   - **Approach**:  
     1. **Initialization**: A class `Stack` is defined with a private integer array `arr[MAX]` to hold the stack's elements and an integer variable `top` to keep track of the index of the topmost element. Initially, `top` is set to -1, indicating that the stack is empty.
     2. **Push Operation**: The `push` function increments `top` and inserts the value `x` at the `arr[top]` position. If the `top` reaches `MAX-1`, meaning the stack is full, the function returns `false` to indicate that the push operation failed.
     3. **Pop Operation**: The `pop` function checks if the stack is empty by verifying if `top` is less than 0. If the stack is empty, it returns `-1`. Otherwise, it returns the value at `arr[top]` and decrements `top` to remove the element from the stack.
     4. **Peek Operation**: The `peek` function returns the value at the `top` index without modifying the stack. If the stack is empty, it returns `-1`.
     5. **Is Empty Check**: The `isEmpty` function simply checks if `top` is less than 0, meaning there are no elements in the stack.
     6. **Size Calculation**: The `size` function returns `top + 1`, as `top` is the index of the last element in the stack.
     7. **Traverse**: The `traverse` function starts from `top` and iterates backward through the stack to display the elements in the order from top to bottom.
   - **Time Complexity**:  
     - `push`: O(1)  
     - `pop`: O(1)  
     - `peek`: O(1)  
     - `isEmpty`: O(1)  
     - `size`: O(1)  
     - `traverse`: O(n), where `n` is the number of elements in the stack.
   - **Space Complexity**: O(MAX), where MAX is the maximum size of the stack.

---

### 47. **Stack using Linked List** [🧲](./_47_stack_using_linked_list.cpp)
   - **File**: _47_stack_using_linked_list.cpp
   - **Description**: This implementation uses a linked list to manage the stack, where each element is represented as a `StackNode`. The stack operations are implemented using a dynamic memory allocation for each new node, allowing the stack to grow without a predefined size limit.
   - **Approach**:  
     1. **Initialization**: A class `StackNode` is defined with two members: `data` (the value of the node) and `next` (pointer to the next node). The `Stack` class contains a `top` pointer which points to the topmost node in the stack, and it is initially set to `nullptr`, indicating an empty stack.
     2. **Push Operation**: The `push` function creates a new `StackNode` with the value `x`. The `next` pointer of the new node is set to the current `top` node, and the `top` pointer is updated to point to the new node, making it the new top of the stack.
     3. **Pop Operation**: The `pop` function checks if the stack is empty by verifying if `top` is `nullptr`. If the stack is empty, it returns 0 and prints "Stack Underflow". Otherwise, it stores the value of the `top` node, updates the `top` pointer to point to the next node, and deletes the old top node. It returns the value of the popped node.
     4. **Peek Operation**: The `peek` function checks if the stack is empty. If it is, it prints "Stack is Empty" and returns 0. Otherwise, it returns the value of the top node without removing it.
     5. **Is Empty Check**: The `isEmpty` function checks if `top` is `nullptr`, indicating an empty stack.
   - **Time Complexity**:  
     - `push`: O(1)  
     - `pop`: O(1)  
     - `peek`: O(1)  
     - `isEmpty`: O(1)  
   - **Space Complexity**: O(n), where `n` is the number of elements in the stack (due to dynamic memory allocation for each node).

---

### 48. **Queue using Arrays** [🧲](./_48_queue_using_arrays.cpp)
   - **File**: _48_queue_using_arrays.cpp
   - **Description**: This implementation uses a circular array to implement a queue. It supports enqueue, dequeue, and retrieval of the front and rear elements with a constant-time complexity for these operations. The queue is managed using two pointers: `front` and `rear`, along with a size counter to track the current number of elements.
   - **Approach**:  
     1. **Initialization**: The `Queue` class is initialized with an array of size `capacity`. The `front` is initialized to 0, `rear` to -1, and `size` to 0.
     2. **Enqueue Operation**: The `enqueue` function first checks if the queue is full by comparing `size` with `capacity`. If the queue is full, it does nothing. Otherwise, it increments the `rear` pointer (using modulo to handle wrapping), inserts the item at the new `rear` index, and increases the `size`.
     3. **Dequeue Operation**: The `dequeue` function first checks if the queue is empty by verifying if `size` is 0. If the queue is empty, it returns -1. Otherwise, it retrieves the item at the `front` index, increments the `front` pointer (again using modulo), decreases `size`, and returns the dequeued item.
     4. **Get Front**: The `getFront` function checks if the queue is empty and returns `-1` if true. Otherwise, it returns the item at the `front` index.
     5. **Get Rear**: The `getRear` function checks if the queue is empty and returns `-1` if true. Otherwise, it returns the item at the `rear` index.
   - **Time Complexity**:  
     - `enqueue`: O(1)  
     - `dequeue`: O(1)  
     - `getFront`: O(1)  
     - `getRear`: O(1)  
   - **Space Complexity**: O(capacity), where `capacity` is the maximum size of the queue.

---

### 49. **Queue using Linked List** [🧲](./_49_queue_using_linked_list.cpp)
   - **File**: _49_queue_using_linked_list.cpp
   - **Description**: This implementation uses a singly linked list to implement a queue. The queue operates with the standard FIFO (First In First Out) principle, where elements are enqueued at the rear and dequeued from the front.
   - **Approach**:  
     1. **Initialization**: A class `Node` is defined with `data` (the value of the node) and `next` (pointer to the next node). The `Queue` class contains two pointers: `front` and `rear`, both initialized to `nullptr`, indicating an empty queue.
     2. **Enqueue Operation**: The `enqueue` function creates a new `Node` with the value `item`. If the queue is empty (i.e., `rear` is `nullptr`), both `front` and `rear` point to the new node. If the queue is not empty, the `next` pointer of the current `rear` node is updated to point to the new node, and the `rear` pointer is updated to point to the new node.
     3. **Dequeue Operation**: The `dequeue` function checks if the queue is empty by verifying if `front` is `nullptr`. If the queue is empty, it returns -1. Otherwise, it retrieves the `data` of the `front` node, updates the `front` pointer to point to the next node, and deletes the old front node. If `front` becomes `nullptr` after the dequeue, `rear` is also set to `nullptr`.
     4. **Get Front**: The `getFront` function checks if the queue is empty and returns `-1` if true. Otherwise, it returns the data of the front node.
     5. **Get Rear**: The `getRear` function checks if the queue is empty and returns `-1` if true. Otherwise, it returns the data of the rear node.
   - **Time Complexity**:  
     - `enqueue`: O(1)  
     - `dequeue`: O(1)  
     - `getFront`: O(1)  
     - `getRear`: O(1)  
   - **Space Complexity**: O(n), where `n` is the number of elements in the queue (due to the linked list nodes).

---

### 50. **Stack that Supports `getMin()` in O(1)** [🧲](./_50_stack_that_supports_getMin_in_O1.cpp)
   - **File**: _50_stack_that_supports_getMin_in_O1.cpp
   - **Description**: This implementation uses two stacks to manage a stack that supports constant-time retrieval of the minimum element. The main stack holds the elements, and a secondary stack, `minStack`, tracks the minimum elements. The `getMin` function can retrieve the minimum element in constant time.
   - **Approach**:  
     1. **Initialization**: Two stacks, `mainStack` and `minStack`, are used. `mainStack` stores the actual elements, and `minStack` keeps track of the minimum values.
     2. **Push Operation**: The `push` function first pushes the value `val` onto `mainStack`. If `minStack` is empty or the new value is less than or equal to the top value of `minStack`, it also pushes the value onto `minStack`. This ensures that `minStack` always has the current minimum value at the top.
     3. **Pop Operation**: The `pop` function pops the top value from `mainStack`. If the popped value is also the top value of `minStack`, it pops the top value from `minStack` as well, keeping both stacks synchronized.
     4. **Top Operation**: The `top` function simply returns the top value of `mainStack` without modifying it.
     5. **Get Min Operation**: The `getMin` function returns the top value of `minStack`, which is always the minimum value in the stack.
   - **Time Complexity**:  
     - `push`: O(1)  
     - `pop`: O(1)  
     - `top`: O(1)  
     - `getMin`: O(1)  
   - **Space Complexity**: O(n), where `n` is the number of elements in the stack, due to the use of an additional stack (`minStack`).

---