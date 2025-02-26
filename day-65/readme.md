## Day 65 - Problems  

---

### 245. **Add Two Numbers** [C++ Code](./_245_Add_Two_Numbers.cpp)  

- **File**: _245_Add_Two_Numbers.cpp_  
- **Description**:  
  - Given two non-empty linked lists representing two non-negative integers, the digits are stored in reverse order, and each node contains a single digit.  
  - Add the two numbers and return the sum as a linked list.  
  - The two numbers do not contain any leading zeros except the number 0 itself.  

- **Understanding the Problem**:  
  - We have two linked lists where each node contains a single digit.  
  - The numbers are stored in reverse order, meaning the first node represents the least significant digit.  
  - We need to add the numbers just like we do in arithmetic addition, handling carries when required.  
  - Example:  
    ```
    Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)  
    Output: 7 -> 0 -> 8  
    Explanation: 342 + 465 = 807
    ```  

- **Pesudocode**:
```plaintext
Initialize dummy node and current pointer.
Initialize carry as 0.
While there are nodes in l1 or l2 or carry is nonzero:
    Compute sum of values from l1, l2, and carry.
    Update carry as sum / 10.
    Store the last digit of sum in a new node.
    Move to the next node in l1 and l2.
Return the resulting list.
```  

- **Approach**:  
  1. Use a dummy node to simplify list operations.  
  2. Use a pointer to traverse and construct the result list.  
  3. Initialize a `carry` variable to store the overflow from summing two digits.  
  4. Iterate through both lists until all digits and carry are processed.  
  5. For each step:  
     - Add the corresponding digits from both lists (if available) plus any carry.  
     - Compute the new digit as `sum % 10` and the new carry as `sum / 10`.  
     - Append the new digit to the result list.  
  6. Return the result list.  

- **Key Concepts Explained**:  
  - **Linked List Traversal**: Moving through a linked list using a pointer.  
  - **Carry Handling**: Ensuring numbers >9 are carried over to the next addition step.  
  - **Dummy Node Usage**: Helps in simplifying linked list operations.  

- **Time Complexity**: O(max(N, M)) where N and M are the lengths of the input lists.  
- **Space Complexity**: O(max(N, M)) for storing the output list.  

### Dry Run:
```
l1: 2 -> 4 -> 3  (represents 342)
l2: 5 -> 6 -> 4  (represents 465)
```
The expected output should represent `342 + 465 = 807`, which is `7 -> 0 -> 8`.

### Step-by-Step Execution:
#### **Initialization**
- `dummy` node with value `0` is created.
- `curr` pointer initialized to `dummy`.
- `carry` initialized to `0`.

#### **First Iteration**:
- `l1` is at `2`, `l2` is at `5`
- `sum = 0 (carry) + 2 (l1->val) + 5 (l2->val) = 7`
- `carry = 7 / 10 = 0`
- `digit = 7 % 10 = 7`
- Create a new node with value `7`, link it to `curr`
- Move `curr` forward
- Move `l1` and `l2` forward

**Linked List so far:** `dummy -> 7`


#### **Second Iteration**:
- `l1` is at `4`, `l2` is at `6`
- `sum = 0 (carry) + 4 (l1->val) + 6 (l2->val) = 10`
- `carry = 10 / 10 = 1`
- `digit = 10 % 10 = 0`
- Create a new node with value `0`, link it to `curr`
- Move `curr` forward
- Move `l1` and `l2` forward

**Linked List so far:** `dummy -> 7 -> 0`


#### **Third Iteration**:
- `l1` is at `3`, `l2` is at `4`
- `sum = 1 (carry) + 3 (l1->val) + 4 (l2->val) = 8`
- `carry = 8 / 10 = 0`
- `digit = 8 % 10 = 8`
- Create a new node with value `8`, link it to `curr`
- Move `curr` forward
- Move `l1` and `l2` forward

**Linked List so far:** `dummy -> 7 -> 0 -> 8`


#### **Fourth Iteration (Termination Condition Check)**:
- `l1` and `l2` are `nullptr`
- `carry` is `0`
- The loop exits.


#### **Final Output**:
The linked list starting from `dummy.next` is:
```
7 -> 0 -> 8  (represents 807)
```
This correctly represents the sum `342 + 465 = 807`.

---

### 246. **Reverse Nodes in k-Group** [C++ Code](./_246_Reverse_Nodes_in_k-Group.cpp)  

- **File**: _246_Reverse_Nodes_in_k-Group.cpp_  
- **Description**:  
  - Given a linked list, reverse the nodes of the list in groups of `k`.  
  - If the number of nodes is not a multiple of `k`, leave the last group as it is.  
  - You may not alter the values, only change the links.  

- **Understanding the Problem**:  
  - We need to reverse every group of `k` nodes in the linked list.  
  - If there are fewer than `k` nodes left at the end, they remain unchanged.  
  - Example:  
    ```
    Input: 1 -> 2 -> 3 -> 4 -> 5, k = 2  
    Output: 2 -> 1 -> 4 -> 3 -> 5  
    ```  
    ```
    Input: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8, k = 3  
    Output: 3 -> 2 -> 1 -> 6 -> 5 -> 4 -> 7 -> 8  
    ```  

- **Pesudocode**:
```plaintext
Check if there are at least k nodes; if not, return head.
Reverse k nodes using a loop.
Recursively call the function for the remaining nodes.
Attach reversed part to the previous section.
Return the new head.
```  

- **Approach**:  
  1. Use a dummy node to simplify list operations.  
  2. Identify the start and end of each k-group.  
  3. Reverse nodes within each k-group using a loop.  
  4. Keep track of the previous group’s last node to connect it with the reversed section.  
  5. If a group contains fewer than `k` nodes, do not reverse it.  
  6. Continue this process until all nodes are processed.  

- **Key Concepts Explained**:  
  - **Reversing Linked List in Groups**: Reordering links of nodes in fixed-size chunks.  
  - **Pointer Manipulation**: Carefully updating `next` pointers to maintain correct linking.  
  - **Recursive Processing**: Handling each k-group separately.  

- **Time Complexity**: O(N), where N is the number of nodes.  
- **Space Complexity**: O(1), since no extra space is used apart from pointers.  

### **Dry Run of `reverseKGroup`**
#### **Example Input**  
```
head: 1 -> 2 -> 3 -> 4 -> 5
k = 3
```
#### **Expected Output**  
```
3 -> 2 -> 1 -> 4 -> 5
```

---

### **Step-by-Step Execution**
1. **Initialize:**
   - `dummy(0) -> 1 -> 2 -> 3 -> 4 -> 5`
   - `prevGroupEnd = dummy`

2. **Find `k`th Node (`groupEnd`)**
   - Moves `k` times → `groupEnd = 3`
   - `nextGroupStart = 4`

3. **Reverse First `k` Nodes (1,2,3)**  
   - Reverse 1 → 2 → 3 into **3 → 2 → 1**
   - Link `prevGroupEnd` to `3`
   - Move `prevGroupEnd = 1`

4. **Find Next `k` Nodes (`groupEnd = nullptr`)**
   - Less than `k` nodes left, so stop.

---

### **Final Output**  
```
3 -> 2 -> 1 -> 4 -> 5
```
**Time Complexity:** O(N)  
**Space Complexity:** O(1)

---


### 247. **Rotate List** [C++ Code](./_247_Rotate_List.cpp)  

- **File**: _247_Rotate_List.cpp_  
- **Description**:  
  - Given a linked list, rotate it to the right by `k` places.  
  - Example:  
    ```
    Input: 1 -> 2 -> 3 -> 4 -> 5, k = 2  
    Output: 4 -> 5 -> 1 -> 2 -> 3  
    ```  

- **Understanding the Problem**:  
  - We take the last `k` elements and move them to the front.  
  - If `k` is larger than the length of the list, we use `k % length` to find the effective rotation.  

- **Pesudocode**:
```plaintext
Find length of the list.
Make the list circular by connecting tail to head.
Find the new head by traversing (length - k) nodes.
Break the circular connection.
Return the new head.
```  

- **Approach**:  
  1. Compute the length of the linked list.  
  2. Convert `k` into an effective shift by `k % length`.  
  3. If `k == 0`, return the original list.  
  4. Traverse to the node before the new head (length - k - 1).  
  5. Update pointers to break the list and set the new head.  

- **Key Concepts Explained**:  
  - **Modular Arithmetic**: Reduces unnecessary rotations when `k > length`.  
  - **Circular Linked List**: Temporarily creating a loop to simplify operations.  
  - **Pointer Manipulation**: Adjusting pointers to rewire the list correctly.  

- **Time Complexity**: O(N), since we traverse the list twice.  
- **Space Complexity**: O(1), as no extra memory is used.  

### **Dry Run of `rotateRight`**

#### **Example Input**
```
head: 1 -> 2 -> 3 -> 4 -> 5
k = 2
```
#### **Expected Output**
```
4 -> 5 -> 1 -> 2 -> 3
```

---

### **Step-by-Step Execution**
1. **Edge Cases Check**  
   - If `head == nullptr`, `head->next == nullptr`, or `k == 0`, return `head`.  
   - None of these conditions apply, so we proceed.

2. **Find Length & Last Node**  
   - Traverse list to find length = **5**, and last node = **5**.

3. **Update `k`**  
   - `k = k % length = 2 % 5 = 2` (remains 2).
   - If `k == 0`, return `head` (not the case here).

4. **Find New Head's Previous Node**  
   - Move to `(length - k - 1) = (5 - 2 - 1) = 2`  
   - `beforeNewHead = 3`

5. **Rearrange Pointers**  
   - `newHead = 4`
   - `beforeNewHead->next = nullptr` (break link)
   - `last->next = head` (link tail to original head)

---

### **Final Output**
```
4 -> 5 -> 1 -> 2 -> 3
```


---
