## Day 66 - Problems  

---

### 248. **Flattening a Linked List** [C++ Code](./_248_Flattening_a_Linked_List.cpp)  

- **File**: _248_Flattening_a_Linked_List.cpp_  
- **Description**:  
  - Given a linked list where each node has two pointers: `next` (points to the next node in the main list) and `bottom` (points to a linked sublist), the task is to flatten the list into a single sorted linked list.  
  - The resulting list should be sorted in ascending order.  
  - Constraints:  
    - The `next` pointer moves right, while the `bottom` pointer moves downward.  
    - Nodes are sorted in their respective `bottom` linked lists.  

- **Understanding the Problem**:  
  - Imagine each node having a vertical linked list and a horizontal connection to another node. The goal is to merge all vertical lists into a single sorted linked list.  
  - Example:  
    ```
    5 -> 10 -> 19 -> 28
    |    |     |     |
    7    20    22    35
    |           |     |
    8          50    40
    |                 |
    30               45
    ```
    - Output after flattening:  
      ```
      5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 30 -> 35 -> 40 -> 45 -> 50
      ```

- **Pesudocode**:
```
function flatten(root):
    if root is null OR root.next is null:
        return root
    
    root.next = flatten(root.next)  // Recursively flatten the next lists
    root = merge(root, root.next)   // Merge current and next lists
    
    return root

function merge(a, b):
    if a is null: return b
    if b is null: return a

    if a.data < b.data:
        result = a
        result.bottom = merge(a.bottom, b)
    else:
        result = b
        result.bottom = merge(a, b.bottom)

    result.next = null  // Ensure next pointer is null
    return result
```

- **Approach**:  
  1. **Recursive Flattening**: Flatten the `next` lists first, then merge them one by one.  
  2. **Merging Two Sorted Lists**: Similar to merging two sorted linked lists using a recursive approach.  
  3. **Breaking Down Merging**: Compare nodes of two lists, keep the smaller one, and recursively merge the remaining elements.  
  4. **Ensuring the `next` Pointer is Null**: Since we only need a single flattened list, we make sure `next` is `nullptr` after merging.  

- **Key Concepts Explained**:  
  - **Linked List Merging**: Combining two sorted lists efficiently.  
  - **Recursion**: Using recursion to process linked lists step by step.  
  - **Sorting via Merging**: Merging multiple sorted lists results in a fully sorted list.  

- **Time Complexity**: \( O(N \log N) \) (N is the total number of nodes, and merging happens in a divide-and-conquer manner).  
- **Space Complexity**: \( O(1) \) (Since merging is done in-place without extra memory).  


### **Flattening a Linked List**  

### **Input Linked List:**  
```
5 -> 10 -> 19 -> 28
|    |     |     |
7    20    22    35
|           |     |
8          50    40
|                 |
30               45
```

### **Step-by-Step Execution**  

#### **Step 1: Flatten Right Side First**
- **Call:** `flatten(10 -> 19 -> 28)`  
- **Flatten `19 -> 28` first**, and so on, until we reach `28`.  

#### **Step 2: Merge Lists in Reverse Order**
1. **Merge `28` and `35 -> 40 -> 45`:**  
   ```
   28 -> 35 -> 40 -> 45
   ```
2. **Merge `19 -> 22 -> 50` with `28 -> 35 -> 40 -> 45`:**  
   ```
   19 -> 22 -> 28 -> 35 -> 40 -> 45 -> 50
   ```
3. **Merge `10 -> 20` with the result above:**  
   ```
   10 -> 19 -> 20 -> 22 -> 28 -> 35 -> 40 -> 45 -> 50
   ```
4. **Merge `5 -> 7 -> 8 -> 30` with the result above:**  
   ```
   5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 30 -> 35 -> 40 -> 45 -> 50
   ```

### **Final Flattened List Output:**
```
5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 30 -> 35 -> 40 -> 45 -> 50
```

---


### 249. **Copy List with Random Pointer** [C++ Code](./_249_Copy_List_with_Random_Pointer.cpp)  

- **File**: _249_Copy_List_with_Random_Pointer.cpp_  
- **Description**:  
  - Given a linked list where each node contains an additional `random` pointer (which may point to any node or be `nullptr`), create a deep copy of the list.  
  - Constraints:  
    - The copied list should preserve the structure of the original list.  
    - Random pointers should correctly point to corresponding copied nodes.  

- **Understanding the Problem**:  
  - We need to make a deep copy of a linked list where each node contains an extra `random` pointer.  
  - Example:  
    ```
    Original List:
    1 -> 2 -> 3 -> 4 -> 5
    |    |    |    |    |
    3    1    5    2   NULL
    ```
    - Output after copying:  
      ```
      1' -> 2' -> 3' -> 4' -> 5'
      |     |     |     |     |
      3'    1'    5'    2'   NULL
      ```

- **Pesudocode**:
```
function copyRandomList(head):
    if head is null:
        return null

    // Step 1: Create a new copy of each node and insert it next to the original node
    current = head
    while current is not null:
        newNode = new Node(current.val)
        newNode.next = current.next
        current.next = newNode
        current = newNode.next

    // Step 2: Assign the correct random pointers to the copied nodes
    current = head
    while current is not null:
        if current.random is not null:
            current.next.random = current.random.next
        current = current.next.next

    // Step 3: Extract the copied list from the interwoven structure
    dummy = new Node(0)
    copyCurrent = dummy
    current = head
    while current is not null:
        copyCurrent.next = current.next
        copyCurrent = copyCurrent.next
        current.next = copyCurrent.next
        current = current.next

    return dummy.next
```

- **Approach**:  
  1. **Step 1 - Clone Nodes**: Create new nodes and insert them right after their corresponding original nodes.  
  2. **Step 2 - Copy Random Pointers**: Since new nodes are inserted next to originals, `random` pointers can be assigned easily.  
  3. **Step 3 - Extract Copied List**: Detach the new nodes from the interwoven structure, restoring the original list.  

- **Key Concepts Explained**:  
  - **Deep Copy vs. Shallow Copy**:  
    - Shallow Copy: Copies only references (not applicable here).  
    - Deep Copy: Creates entirely new nodes.  
  - **Linked List Traversal**: Traversing the list multiple times efficiently.  
  - **Interweaving Technique**: Temporarily modifying the original list to simplify copying.  

- **Time Complexity**: \( O(N) \) (Each node is processed a fixed number of times).  
- **Space Complexity**: \( O(1) \) (No extra hash maps, only new nodes).  

### **Input Linked List:**  
```
1 -> 2 -> 3 -> 4 -> 5
|    |    |    |    |
3    1    5    2   NULL
```

### **Step-by-Step Execution**  

#### **Step 1: Insert Copied Nodes**
After inserting copied nodes next to originals:  
```
1 -> 1' -> 2 -> 2' -> 3 -> 3' -> 4 -> 4' -> 5 -> 5'
```

#### **Step 2: Assign Random Pointers**
- `1' -> random = 3'`  
- `2' -> random = 1'`  
- `3' -> random = 5'`  
- `4' -> random = 2'`  
- `5' -> random = NULL`

#### **Step 3: Extract Copied List**
Extract the copied list:  
```
1' -> 2' -> 3' -> 4' -> 5'
|     |     |     |     |
3'    1'    5'    2'   NULL
```

### **Final Output (Deep Copied List):**
```
1' -> 2' -> 3' -> 4' -> 5'
|     |     |     |     |
3'    1'    5'    2'   NULL
```

---

