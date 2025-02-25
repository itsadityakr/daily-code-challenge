---

## Day X - Problems  

---

### 242. **Sort a Linked List of 0s, 1s, and 2s** [C++ Code](./_242_Sort_a_linked_list_of_0s,_1s_and_2s.cpp)  

- **File**: _242_Sort_a_linked_list_of_0s,_1s_and_2s.cpp_  
- **Description**:  
  - Given a linked list containing only 0s, 1s, and 2s, sort it without changing the data of the nodes.  
  - Constraints: The list contains only the numbers 0, 1, and 2. Must be sorted in-place.

- **Understanding the Problem**:  
  - Imagine you have a chain of numbered beads, but they are randomly arranged. You need to rearrange them in ascending order. 
  - Example: Input: `1 -> 2 -> 0 -> 1 -> 2 -> 0` → Output: `0 -> 0 -> 1 -> 1 -> 2 -> 2`

- **Pseudocode**:  
  ```
  Initialize three dummy nodes: zeroDummy, oneDummy, twoDummy
  Initialize three tail pointers: zeroTail, oneTail, twoTail pointing to respective dummy nodes
  Set current node to head

  While current is not null:
      If current node value is 0:
          Append node to zeroTail
          Move zeroTail to next node
      Else if current node value is 1:
          Append node to oneTail
          Move oneTail to next node
      Else:
          Append node to twoTail
          Move twoTail to next node
      Move to next node in original list

  Connect zeroTail to start of oneDummy’s list if not empty, otherwise to twoDummy’s list
  Connect oneTail to start of twoDummy’s list
  Set tail of twoDummy’s list to null

  Set head to zeroDummy’s next node
  Delete dummy nodes
  Return head
  ```

- **Approach**:  
  - Use three separate lists (one for each digit) to store the nodes.  
  - Link the lists together in order: 0s → 1s → 2s.  
  - Adjust pointers carefully to maintain the structure.  

- **Key Concepts Explained**:  
  - **Linked Lists**: A sequence of nodes where each node points to the next.  
  - **In-place Sorting**: Rearranging elements without creating new nodes.  

- **Time Complexity**: O(N) (Single pass to sort and rearrange).  
- **Space Complexity**: O(1) (Only uses a few extra pointers).  

#### **1. Sort a Linked List of 0s, 1s, and 2s**  

**Input Linked List**:  
`1 -> 2 -> 0 -> 1 -> 2 -> 0`  

**Step-by-Step Execution:**  
1. Create three dummy nodes (`zeroDummy`, `oneDummy`, `twoDummy`) with tail pointers (`zeroTail`, `oneTail`, `twoTail`).  
2. Traverse the list and place each node into one of the three lists based on its value.  

   | Current Node | Action Taken | zeroTail List | oneTail List | twoTail List |
   |-------------|-------------|--------------|-------------|-------------|
   | 1           | Add to `oneTail` | - | `1` | - |
   | 2           | Add to `twoTail` | - | `1` | `2` |
   | 0           | Add to `zeroTail` | `0` | `1` | `2` |
   | 1           | Add to `oneTail` | `0` | `1 -> 1` | `2` |
   | 2           | Add to `twoTail` | `0` | `1 -> 1` | `2 -> 2` |
   | 0           | Add to `zeroTail` | `0 -> 0` | `1 -> 1` | `2 -> 2` |

3. Connect the three lists:  
   - `zeroTail` → `oneDummy->next` → `twoDummy->next`
   - `oneTail` → `twoDummy->next`  

**Final Linked List (Sorted)**:  
`0 -> 0 -> 1 -> 1 -> 2 -> 2`  


---

### 243. **Intersection of Two Linked Lists** [C++ Code](./_243_Intersection_of_Two_Linked_Lists.cpp)  

- **File**: _243_Intersection_of_Two_Linked_Lists.cpp_  
- **Description**:  
  - Find the node where two singly linked lists intersect.  
  - If no intersection exists, return `nullptr`.  
  - Constraints: Two lists may have different lengths.

- **Understanding the Problem**:  
  - Picture two roads merging at a single point. You need to find that merging point in two linked lists.  
  - Example: List A: `4 -> 1 -> 8 -> 4 -> 5`, List B: `5 -> 6 -> 1 -> 8 -> 4 -> 5` → Intersection at node `8`.  

- **Pseudocode**:  
  ```
  If either headA or headB is null, return null
  
  Initialize two pointers, ptrA and ptrB, pointing to headA and headB respectively
  
  While ptrA is not equal to ptrB:
      Move ptrA to next node, if null switch to headB
      Move ptrB to next node, if null switch to headA
  
  Return ptrA (either intersection node or null)
  ```

- **Approach**:  
  - Traverse both lists while switching pointers at the end.  
  - If an intersection exists, both pointers will meet at that node.  
  - Otherwise, they will both reach `nullptr`.  

- **Key Concepts Explained**:  
  - **Pointer Manipulation**: Moving and switching pointers effectively.  
  - **Linked List Traversal**: Efficient ways to navigate lists.  

- **Time Complexity**: O(N + M) (where N and M are the lengths of the lists).  
- **Space Complexity**: O(1) (No extra space used).  

#### **2. Intersection of Two Linked Lists**  

**Input Lists:**  
List A: `4 -> 1 -> 8 -> 4 -> 5`  
List B: `5 -> 6 -> 1 -> 8 -> 4 -> 5`  

**Step-by-Step Execution:**  
1. Initialize two pointers: `ptrA` at `headA` (`4`) and `ptrB` at `headB` (`5`).  
2. Traverse both lists, switching to the other list’s head when reaching `nullptr`.  

   | Iteration | ptrA | ptrB | Notes |
   |-----------|------|------|-------|
   | 1         | 4    | 5    | Not same |
   | 2         | 1    | 6    | Not same |
   | 3         | 8    | 1    | Not same |
   | 4         | 4    | 8    | Not same |
   | 5         | 5    | 4    | Not same |
   | 6         | nullptr | 5 | Switch ptrA to headB |
   | 7         | 5    | nullptr | Switch ptrB to headA |
   | 8         | 6    | 4    | Not same |
   | 9         | 1    | 1    | Not same |
   | 10        | 8    | 8    | **Intersection Found** |

**Output:** Intersection at node `8`.


---

### 244. **Add 1 to a Number Represented as a Linked List** [C++ Code](./_244_Add_1_to_a_Linked_List_Number_.cpp)  

- **File**: _244_Add_1_to_a_Linked_List_Number_.cpp_  
- **Description**:  
  - Given a linked list representing a number (each node is a digit), add 1 to it.  
  - Constraints: Do not convert the number into an integer.

- **Understanding the Problem**:  
  - Imagine a linked list representing `1 -> 2 -> 9`, which means the number `129`. Adding 1 should return `1 -> 3 -> 0`.  
  - Example: Input: `9 -> 9 -> 9` → Output: `1 -> 0 -> 0 -> 0` (Handling carry-over).  

- **Pseudocode**:  
  ```
  Define function reverse(head):
      Initialize previous as null, current as head
      While current is not null:
          Store next node
          Reverse current node’s pointer
          Move previous and current forward
      Return previous (new head)
  
  Reverse the list
  Initialize carry as 1
  Traverse the list and add carry to first node
  While there is a carry:
      Update current node value with sum mod 10
      Update carry as sum / 10
      If at last node and carry remains, append new node with carry value
  
  Reverse list again and return head
  ```

- **Approach**:  
  - Reverse the list to make addition easier.  
  - Add 1 to the first node and propagate the carry if necessary.  
  - If there's an extra carry at the end, add a new node.  
  - Reverse the list back to its original order.  

- **Key Concepts Explained**:  
  - **Reversal of Linked List**: A common trick to simplify problems.  
  - **Carry Handling**: Ensuring correct propagation.  

- **Time Complexity**: O(N) (Two passes: one for reversal, one for addition).  
- **Space Complexity**: O(1) (Only modifies the given list).  

#### **3. Add 1 to a Number Represented as a Linked List**  

**Input Linked List:**  
`9 -> 9 -> 9` (Represents `999`)  

**Step-by-Step Execution:**  
1. Reverse the list: `9 -> 9 -> 9` becomes `9 -> 9 -> 9`.  
2. Add 1 to the first node and propagate carry:  

   | Current Node | Sum (Value + Carry) | New Value | Carry |
   |-------------|------------------|-----------|-------|
   | 9          | 9 + 1 = 10        | 0         | 1     |
   | 9          | 9 + 1 = 10        | 0         | 1     |
   | 9          | 9 + 1 = 10        | 0         | 1     |
   | NULL       | Carry remains     | 1 (New Node) | 0 |

3. Reverse the list back: `0 -> 0 -> 0 -> 1` becomes `1 -> 0 -> 0 -> 0`.  

**Output:** `1 -> 0 -> 0 -> 0` (Represents `1000`).  


---


