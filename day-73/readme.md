## Day 73 - Problems  

---

### 270. **Prefix to Infix Conversion** [C++ Code](./_270_Prefix_to_Infix_Conversion.cpp)  

- **File**: _270_Prefix_to_Infix_Conversion.cpp_  
- **Description**:  
  - Convert a given prefix expression to an infix expression.  
  - The expression consists of single-letter operands and operators (`+`, `-`, `*`, `/`).  

- **Understanding the Problem**:  
  - A prefix expression is one where the operator precedes the operands.  
  - An infix expression places the operator between operands.  
  - Example: `+AB` (prefix) → `(A+B)` (infix).  

- **Pesudocode**:
```
1. Initialize an empty stack.
2. Traverse the prefix expression from right to left.
3. If the character is an operand, push it onto the stack.
4. If the character is an operator:
   a. Pop two operands from the stack.
   b. Form an infix expression by placing the operator between them.
   c. Push the new expression back onto the stack.
5. The final expression at the top of the stack is the result.
```

- **Approach**:  
  - Use a **stack** to store operands.  
  - Traverse the expression in reverse order.  
  - Construct the infix expression step by step.  

- **Key Concepts Explained**:  
  - **Prefix notation** (Polish notation) places operators before operands.  
  - **Infix notation** follows standard arithmetic order.  
  - **Stacks** help manage order when converting between notations.  

- **Time Complexity**: **O(N)** (single pass through the expression).  
- **Space Complexity**: **O(N)** (stack stores operands).  

**Input:**  
```
pre_exp = "*+AB-CD"
```
**Expected Output:**  
```
((A+B) * (C-D))
```

**Step-by-Step Execution:**  

| Step | Char | Stack Content |
|------|------|--------------|
| 1    | D    | ["D"] |
| 2    | C    | ["C", "D"] |
| 3    | -    | ["(C-D)"] |
| 4    | B    | ["(C-D)", "B"] |
| 5    | A    | ["(C-D)", "A", "B"] |
| 6    | +    | ["(C-D)", "(A+B)"] |
| 7    | *    | ["((A+B)*(C-D))"] |

**Final Output:**  
```
((A+B)*(C-D))
```

---

### 271. **Prefix to Postfix Conversion** [C++ Code](./_271_Prefix_to_Postfix_Conversion.cpp)  

- **File**: _271_Prefix_to_Postfix_Conversion.cpp_  
- **Description**:  
  - Convert a prefix expression to a postfix expression.  

- **Understanding the Problem**:  
  - **Prefix**: Operators appear before operands (e.g., `+AB`).  
  - **Postfix**: Operators appear after operands (e.g., `AB+`).  
  - Example: `+AB` (prefix) → `AB+` (postfix).  

- **Pesudocode**:
```
1. Initialize an empty stack.
2. Traverse the prefix expression from right to left.
3. If the character is an operand, push it onto the stack.
4. If the character is an operator:
   a. Pop two operands from the stack.
   b. Form a postfix expression by appending the operator at the end.
   c. Push the new expression onto the stack.
5. The final string at the top of the stack is the result.
```

- **Approach**:  
  - Use a **stack** to store intermediate expressions.  
  - Traverse the prefix expression in reverse order.  
  - Construct the postfix expression step by step.  

- **Key Concepts Explained**:  
  - **Prefix & Postfix Notation**.  
  - **Stack operations** for order preservation.  

- **Time Complexity**: **O(N)**.  
- **Space Complexity**: **O(N)**.  

**Input:**  
```
pre_exp = "*+AB-CD"
```
**Expected Output:**  
```
AB+CD-*
```

**Step-by-Step Execution:**  

| Step | Char | Stack Content |
|------|------|--------------|
| 1    | D    | ["D"] |
| 2    | C    | ["C", "D"] |
| 3    | -    | ["CD-"] |
| 4    | B    | ["CD-", "B"] |
| 5    | A    | ["CD-", "A", "B"] |
| 6    | +    | ["CD-", "AB+"] |
| 7    | *    | ["AB+CD-*"] |

**Final Output:**  
```
AB+CD-*
```

---

### 272. **Postfix to Prefix Conversion** [C++ Code](./_272_Postfix_to_Prefix_Conversion.cpp)  

- **File**: _272_Postfix_to_Prefix_Conversion.cpp_  
- **Description**:  
  - Convert a given postfix expression to a prefix expression.  

- **Understanding the Problem**:  
  - **Postfix**: Operators follow operands (e.g., `AB+`).  
  - **Prefix**: Operators precede operands (e.g., `+AB`).  
  - Example: `AB+` (postfix) → `+AB` (prefix).  

- **Pesudocode**:
```
1. Initialize an empty stack.
2. Traverse the postfix expression from left to right.
3. If the character is an operand, push it onto the stack.
4. If the character is an operator:
   a. Pop two operands from the stack.
   b. Form a prefix expression by placing the operator at the start.
   c. Push the new expression onto the stack.
5. The final string at the top of the stack is the result.
```

- **Approach**:  
  - Use a **stack** to hold intermediate results.  
  - Traverse the expression **left to right**.  
  - Combine operands and operators in **prefix order**.  

- **Key Concepts Explained**:  
  - **Postfix vs. Prefix notation**.  
  - **Stack-based transformations**.  

- **Time Complexity**: **O(N)**.  
- **Space Complexity**: **O(N)**. 

**Input:**  
```
post_exp = "AB+CD-*"
```
**Expected Output:**  
```
*+AB-CD
```

**Step-by-Step Execution:**  

| Step | Char | Stack Content |
|------|------|--------------|
| 1    | A    | ["A"] |
| 2    | B    | ["A", "B"] |
| 3    | +    | ["+AB"] |
| 4    | C    | ["+AB", "C"] |
| 5    | D    | ["+AB", "C", "D"] |
| 6    | -    | ["+AB", "-CD"] |
| 7    | *    | ["*+AB-CD"] |

**Final Output:**  
```
*+AB-CD
```


---

### 273. **Next Greater Element I** [C++ Code](./_273_Next_Greater_Element_I.cpp)  

- **File**: _273_Next_Greater_Element_I.cpp_  
- **Description**:  
  - Given two integer arrays, `nums1` (subset of `nums2`), find the **next greater element** for each element in `nums1`.  
  - The **next greater element** is the first larger number appearing to the right in `nums2`. If no such number exists, return `-1`.  

- **Understanding the Problem**:  
  - Example:  
    ```
    nums1 = [4,1,2]
    nums2 = [1,3,4,2]
    Output: [-1,3,-1]  
    ```
    - `4` has no greater element → `-1`.  
    - `1`'s next greater element in `nums2` is `3`.  
    - `2` has no greater element → `-1`.  

- **Pesudocode**:
```
1. Initialize a stack and a hash map (to store next greater elements).
2. Traverse nums2 from right to left:
   a. While the stack is non-empty and top of stack ≤ current element, pop it.
   b. If the stack is empty, map the element to -1.
   c. Otherwise, map the element to stack's top.
   d. Push the current element onto the stack.
3. Traverse nums1, retrieving answers from the hash map.
4. Return the results.
```

- **Approach**:  
  - Use a **monotonic decreasing stack** to efficiently find the **next greater element**.  
  - Traverse `nums2` **right to left** to build a map of next greater elements.  
  - Lookup elements from `nums1` in **O(1) time** using a hash map.  

- **Key Concepts Explained**:  
  - **Monotonic Stack**: A stack that maintains decreasing elements.  
  - **Hash Map Lookup**: Stores computed results for fast retrieval.  

- **Time Complexity**: **O(N + M)** (stack processing `O(N)`, hash map lookups `O(M)`).  
- **Space Complexity**: **O(N)** (for the map and stack).  

**Input:**  
```
nums1 = [4,1,2]
nums2 = [1,3,4,2]
```
**Expected Output:**  
```
[-1, 3, -1]
```

**Step-by-Step Execution:**  

1. **Build Next Greater Element Map using Stack (Iterate nums2 right to left)**  

| Step | Num | Stack | Next Greater Map |
|------|-----|-------|------------------|
| 1    | 2   | [2]   | {2: -1}          |
| 2    | 4   | [4]   | {2: -1, 4: -1}   |
| 3    | 3   | [4, 3] | {2: -1, 4: -1, 3: 4} |
| 4    | 1   | [4, 3, 1] | {2: -1, 4: -1, 3: 4, 1: 3} |

2. **Fetch Next Greater Elements for nums1 using Map**  

| Num  | Next Greater |
|------|-------------|
| 4    | -1          |
| 1    | 3          |
| 2    | -1          |

**Final Output:**  
```
[-1, 3, -1]
```


---

