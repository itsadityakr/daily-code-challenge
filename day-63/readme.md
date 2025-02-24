## Day 63 - Problems  

---

### 239. **Remove Nth Node From End of List** [C++ Code](./_239_Remove_Nth_Node_From_End_of_List.cpp)  

- **File**: _239_Remove_Nth_Node_From_End_of_List.cpp_  
- **Description**:  
  - Given a singly linked list, remove the `n`-th node from the end and return the modified list.  
  - Constraints:  
    - The number of nodes in the list is `size >= 1`.  
    - `1 ≤ n ≤ size`  

- **Understanding the Problem**:  
  - Imagine you have a chain of beads (linked list) and need to remove the `n`-th bead from the end.  
  - Example: If the list is `[1 → 2 → 3 → 4 → 5]` and `n = 2`, removing the 2nd from the end results in `[1 → 2 → 3 → 5]`.  

- **How to Solve the Problem**:
  - Use two pointers (`fast` and `slow`) to locate the node before the one to be deleted.  
  - Edge case: If `n == size`, remove the head.  

- **Approach**:  
1. **Create a dummy node**  
   - This is a "fake" node added before the head to make handling edge cases easier.  
   - New list becomes:  
     ```
     0 → 1 → 2 → 3 → 4 → 5
     ```
     (Dummy node added at the start)

2. **Use Two Pointers:**
   - **`fast` pointer** moves `n + 1` steps forward.
   - **`slow` pointer** starts at the dummy node.

3. **Move the `fast` pointer `n + 1` steps forward**  
   - `fast` moves ahead to create a gap of `n` between `fast` and `slow`.  
   ```
   Step 1: fast moves to 1
   Step 2: fast moves to 2
   Step 3: fast moves to 3
   Step 4: fast moves to 4
   ```

4. **Move both `slow` and `fast` pointers together**  
   - When `fast` reaches the end (`nullptr`), `slow` will be **right before** the node to remove.
   ```
   Step 5: slow moves to 1, fast moves to 5
   Step 6: slow moves to 2, fast reaches nullptr
   ```

5. **Delete the node**  
   - `slow->next = slow->next->next`
   - The **node 4 is removed**, giving us:  
     ```
     1 → 2 → 3 → 5
     ```

- **Key Concepts Explained**:  
  - **Two-pointer technique** for efficient traversal.  
  - **Dummy node** to handle edge cases.  

- **Time Complexity**: `O(N)`, single pass traversal.  
- **Space Complexity**: `O(1)`, only extra pointers used.  

- **Dry Run**:  
  ```
  List: 1 → 2 → 3 → 4 → 5, n = 2
  Step 1: Move `fast` pointer 3 steps ahead.
  Step 2: Move `slow` and `fast` together until `fast` reaches end.
  Step 3: Delete `slow->next` (4).
  Result: 1 → 2 → 3 → 5
  ```

---

### 240. **Delete the Middle Node of a Linked List** [C++ Code](./_240_Delete_the_Middle_Node_of_a_Linked_List.cpp)  

- **File**: _240_Delete_the_Middle_Node_of_a_Linked_List.cpp_  
- **Description**:  
  - Given a singly linked list, remove the middle node.  
  - If the list has `size = 1`, return `nullptr`.  

- **Understanding the Problem**:  
  - Think of a train with `size` compartments. Remove the middle one.  
  - Example: `[1 → 2 → 3 → 4 → 5]` becomes `[1 → 2 → 4 → 5]`.  

- **How to Solve the Problem**:  
  - Use slow (`slow`) and fast (`fast`) pointers to find the middle node.  
  - Track the previous node (`prev`) to adjust the list.  

- **Approach**:  
1. **Use Two Pointers (`slow` and `fast`)**  
   - `fast` moves **twice as fast** as `slow`.  
   - When `fast` reaches the **end**, `slow` is at the **middle**.  

2. **Move `slow` and `fast`**
   ```
   Step 1: slow at 1, fast at 1
   Step 2: slow at 2, fast at 3
   Step 3: slow at 3, fast at 5 (end)
   ```
   - Now, `slow` is at **3**, which is the middle node.

3. **Remove the middle node**  
   - Store `slow->next` in `prev->next`, skipping `slow`.  
   - Now, the list is:  
     ```
     1 → 2 → 4 → 5
     ```

- **Key Concepts Explained**:  
  - **Slow and fast pointer technique** to find the middle in one pass.  

- **Time Complexity**: `O(N)`, single pass.  
- **Space Complexity**: `O(1)`, no extra memory used.  


### **Dry Run:**
**Input:** `head = [1 → 2 → 3 → 4 → 5]`, `n = 2`  
**Output:** `[1 → 2 → 3 → 5]`  

### **Step-by-step Execution:**

#### **Initial Setup**  
- We create a **dummy node** (`0 → 1 → 2 → 3 → 4 → 5`) to handle edge cases.  
- Two pointers (`fast` and `slow`) are initialized at `dummy`.

#### **Step 1: Move `fast` `n + 1 = 3` steps ahead**
| Step | fast Pointer Position | slow Pointer Position |
|------|-----------------------|-----------------------|
| 0    | dummy (0)             | dummy (0)             |
| 1    | 1                     | dummy (0)             |
| 2    | 2                     | dummy (0)             |
| 3    | 3                     | dummy (0)             |

#### **Step 2: Move both `fast` and `slow` until `fast` reaches `nullptr`**
| Step | fast Pointer Position | slow Pointer Position |
|------|-----------------------|-----------------------|
| 4    | 4                     | 1                     |
| 5    | 5                     | 2                     |
| 6    | nullptr (end)         | 3                     |

- **`slow->next` is the node to delete (4).**

#### **Step 3: Delete `slow->next` (4)**
- `slow->next = slow->next->next`
- **Modified List:** `[1 → 2 → 3 → 5]`


---

### 241. **Sort List** [C++ Code](./_241_Sort_List.cpp)  

- **File**: _241_Sort_List.cpp_  
- **Description**:  
  - Given a singly linked list, sort it in ascending order using **Merge Sort**.  

- **Understanding the Problem**:  
  - Think of a messy stack of books (linked list). You need to arrange them in order.  
  - Example: `[4 → 2 → 1 → 3]` → `[1 → 2 → 3 → 4]`.  

- **How to Solve the Problem**:  
  - Use **Merge Sort** (Divide & Conquer) to split the list, sort recursively, and merge back.  

- **Approach**:  
#### **Step 1: Find the Middle of the List**
We use **slow-fast pointer technique** again:
```
Step 1: slow at 4, fast at 4
Step 2: slow at 2, fast at 1
Step 3: slow at 1, fast reaches end
```
- **Middle node found → 1**
- Split into two halves:
  ```
  Left:  4 → 2
  Right: 1 → 3
  ```

---

#### **Step 2: Recursively Sort Left Half**
- Find middle of `[4 → 2]` → Middle = `4`
- Split into `[4]` and `[2]`
- Merge `[4]` and `[2]` → `[2 → 4]`

---

#### **Step 3: Recursively Sort Right Half**
- Find middle of `[1 → 3]` → Middle = `1`
- Split into `[1]` and `[3]`
- Merge `[1]` and `[3]` → `[1 → 3]`

---

#### **Step 4: Merge Two Sorted Lists**
We **merge** `[2 → 4]` and `[1 → 3]`:

| Step | Comparing  | Merged List  |
|------|-----------|-------------|
| 1    | `2 vs 1`  | `[1]`       |
| 2    | `2 vs 3`  | `[1 → 2]`   |
| 3    | `4 vs 3`  | `[1 → 2 → 3]` |
| 4    | `4 remains` | `[1 → 2 → 3 → 4]` |


- **Key Concepts Explained**:  
  - **Merge Sort on Linked List**  
  - **Efficient Merging** using dummy nodes.  

- **Time Complexity**: `O(N log N)`, merge sort recursion.  
- **Space Complexity**: `O(log N)`, recursive call stack.  

### **Dry Run:**
**Input:** `head = [4 → 2 → 1 → 3]`  
**Output:** `[1 → 2 → 3 → 4]`  

### **Step-by-step Execution:**

#### **Step 1: Find Middle**
| Step | slow Pointer Position | fast Pointer Position |
|------|-----------------------|-----------------------|
| 0    | 4                     | 4                     |
| 1    | 2                     | 1                     |
| 2    | 1                     | nullptr               |

- **Middle node found (1).**
- **List split into:**  
  - Left: `[4 → 2]`  
  - Right: `[1 → 3]`  

#### **Step 2: Recursively Sort Left `[4 → 2]`**
- Middle = `4`
- Split into `[4]` and `[2]`
- Merge `[4]` and `[2]` → `[2 → 4]`

#### **Step 3: Recursively Sort Right `[1 → 3]`**
- Middle = `1`
- Split into `[1]` and `[3]`
- Merge `[1]` and `[3]` → `[1 → 3]`

#### **Step 4: Merge `[2 → 4]` and `[1 → 3]`**
| Step | Comparing | Merged List |
|------|----------|-------------|
| 1    | 2 vs 1   | `[1]`       |
| 2    | 2 vs 3   | `[1 → 2]`   |
| 3    | 4 vs 3   | `[1 → 2 → 3]` |
| 4    | 4 remains | `[1 → 2 → 3 → 4]` |

**Final Sorted List:** `[1 → 2 → 3 → 4]`

---