## Day 72 - Problems  

---

### 267. **Valid Parentheses** [C++ Code](./_267_Valid_Parentheses.cpp)  

- **File**: _267_Valid_Parentheses.cpp_  
- **Description**:  
  - The problem requires checking if a given string containing only the characters `()[]{}` is valid.
  - A string is valid if open brackets are closed by the same type in the correct order.
  - The input string will only contain these characters.

- **Understanding the Problem**:  
  - We need to ensure that each opening bracket has a corresponding and correctly ordered closing bracket.
  - Example:
    - Input: "{[()]}"
    - Output: `true`
    - Explanation: Every opening bracket is correctly closed in order.
    
- **Pseudocode**:
```plaintext
Initialize an empty stack
For each character in the string:
    If it is an opening bracket, push it onto the stack
    If it is a closing bracket:
        If stack is empty, return false
        Pop the top of the stack and check if it matches the current closing bracket
        If not, return false
Return true if stack is empty, otherwise false
```

- **Approach**:  
  1. Use a stack to track open brackets.
  2. Push open brackets onto the stack.
  3. When encountering a closing bracket, check the top of the stack:
     - If it matches the correct corresponding opening bracket, pop it.
     - Otherwise, return false.
  4. If the stack is empty at the end, the string is valid.

- **Key Concepts Explained**:  
  - **Stack**: A Last In, First Out (LIFO) data structure.
  - **Bracket Matching**: Ensuring correct ordering and nesting of brackets.
  
- **Time Complexity**: O(n), where n is the length of the string (each character is processed once).  
- **Space Complexity**: O(n), as the worst case involves storing all open brackets in the stack.  

**Input:** `"{[()]}"`  
**Expected Output:** `true` (valid parentheses)

### **Step-by-Step Execution**
| Step | Character | Stack State       | Action Taken |
|------|----------|------------------|--------------|
| 1    | `{`      | `{`               | Push `{`     |
| 2    | `[`      | `{[`              | Push `[`     |
| 3    | `(`      | `{[(`             | Push `(`     |
| 4    | `)`      | `{[`              | Matches `(`, pop `(` |
| 5    | `]`      | `{`               | Matches `[`, pop `[` |
| 6    | `}`      | `Empty`           | Matches `{`, pop `{` |

- **Final Stack State:** Empty ✅
- **Result:** `true` (valid parentheses)

---

### 268. **Min Stack** [C++ Code](./_268_Min_Stack.cpp)  

- **File**: _268_Min_Stack.cpp_  
- **Description**:  
  - Implement a stack that supports push, pop, top, and retrieving the minimum element in constant time.
  - Must use O(1) time complexity for retrieving the minimum value.

- **Understanding the Problem**:  
  - A normal stack allows push and pop but does not provide a way to get the minimum value efficiently.
  - Example:
    - Input:
      ```
      MinStack minStack = new MinStack();
      minStack.push(-2);
      minStack.push(0);
      minStack.push(-3);
      minStack.getMin();   // Returns -3
      minStack.pop();
      minStack.top();      // Returns 0
      minStack.getMin();   // Returns -2
      ```

- **Pseudocode**:
```plaintext
Initialize two stacks: mainStack and minStack
For push operation:
    Push value onto mainStack
    If minStack is empty or value is <= top of minStack, push it onto minStack
For pop operation:
    If top of mainStack equals top of minStack, pop from both stacks
    Otherwise, pop from mainStack only
For top operation:
    Return top of mainStack
For getMin operation:
    Return top of minStack
```

- **Approach**:  
  1. Use two stacks:
     - `mainStack`: Stores all values.
     - `minStack`: Keeps track of the minimum values.
  2. When pushing, add to `minStack` only if it is empty or the value is smaller.
  3. When popping, remove from `minStack` if the popped element is the minimum.
  4. Return the top of `minStack` for `getMin()` in O(1) time.

- **Key Concepts Explained**:  
  - **Stack Operations**: Standard push, pop, and top functions.
  - **Efficient Minimum Tracking**: Using an auxiliary stack.
  
- **Time Complexity**: O(1) for all operations.  
- **Space Complexity**: O(n) due to the additional `minStack` storage.  

### **Operations**
```cpp
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   // Returns -3
minStack.pop();
minStack.top();      // Returns 0
minStack.getMin();   // Returns -2
```

### **Step-by-Step Execution**
| Operation      | mainStack | minStack | Action Taken |
|---------------|----------|----------|--------------|
| `push(-2)`    | `[-2]`   | `[-2]`   | Push `-2` onto both stacks |
| `push(0)`     | `[-2, 0]` | `[-2]`  | Push `0` onto mainStack, no change in minStack |
| `push(-3)`    | `[-2, 0, -3]` | `[-2, -3]` | Push `-3` onto both stacks |
| `getMin()`    | `[-2, 0, -3]` | `[-2, -3]` | **Return `-3`** (top of minStack) |
| `pop()`       | `[-2, 0]` | `[-2]`  | Pop `-3` from both stacks |
| `top()`       | `[-2, 0]` | `[-2]`  | **Return `0`** (top of mainStack) |
| `getMin()`    | `[-2, 0]` | `[-2]`  | **Return `-2`** (top of minStack) |

### **Final State**
- `mainStack = [-2, 0]`
- `minStack = [-2]`
- **Output:**  
  - `getMin()` → `-3`  
  - `top()` → `0`  
  - `getMin()` → `-2`  

---

### 269. **Infix to Postfix** [C++ Code](./_269_Infix_to_Postfix.cpp)  

- **File**: _269_Infix_to_Postfix.cpp_  
- **Description**:  
  - Convert an infix expression (e.g., `A+B*C`) to a postfix expression (e.g., `ABC*+`).
  - Follow operator precedence and associativity rules.
  - The input will contain operands (A-Z, 0-9) and operators (`+ - * / ^ ()`).

- **Understanding the Problem**:  
  - In infix notation, operators are between operands (`A + B`).
  - In postfix notation, operators come after operands (`AB+`).
  - Example:
    - Input: `(A+B)*C`
    - Output: `AB+C*`
    - Explanation: Parentheses ensure `A+B` is evaluated first, then multiplied by `C`.

- **Pseudocode**:
```plaintext
Initialize an empty stack for operators and an empty string for result
For each character in the expression:
    If it is an operand, add it to the result
    If it is '(', push it onto the stack
    If it is ')', pop from the stack and add to the result until '(' is found
    If it is an operator:
        While the stack is not empty and precedence of top of stack >= precedence of current operator:
            Pop from stack and add to result
        Push the current operator onto the stack
While stack is not empty:
    Pop from stack and add to result
Return result
```

- **Approach**:  
  1. Use a **stack** to store operators.
  2. Traverse the expression:
     - If the character is an operand, add it to the result.
     - If it's an opening parenthesis, push it onto the stack.
     - If it's a closing parenthesis, pop from the stack until the corresponding opening parenthesis is removed.
     - If it's an operator, pop from the stack while the top has higher or equal precedence, then push the current operator.
  3. After traversing the expression, pop remaining operators from the stack.

- **Key Concepts Explained**:  
  - **Operator Precedence**: Defines which operator should be applied first (`*` before `+`).
  - **Associativity**: Determines order when operators have the same precedence (`^` is right-associative, others are left-associative).
  - **Stack Usage**: Helps manage precedence and order of operations.

- **Time Complexity**: O(n), where n is the length of the expression (each character is processed once).  
- **Space Complexity**: O(n), as the worst case involves storing all operators in the stack.  

### **Example Input**  
```plaintext
(A+B)*C
```

### **Expected Output**  
```plaintext
AB+C*
```

---

### **Step-by-Step Execution**  

#### **Initialization**
- Stack: `[]`
- Result: `""`

#### **Processing Each Character**
| Step | Character | Stack State | Result String | Action Taken |
|------|----------|------------|---------------|--------------|
| 1    | `(`      | `[`(`)]`    | `""`          | Push `(` to stack |
| 2    | `A`      | `[`(`)]`    | `"A"`         | Operand, add to result |
| 3    | `+`      | `[`(`, `+`)]` | `"A"`       | Push `+` to stack |
| 4    | `B`      | `[`(`, `+`)]` | `"AB"`      | Operand, add to result |
| 5    | `)`      | `[]`        | `"AB+"`       | Pop `+` to result, pop `(` |
| 6    | `*`      | `[`*`]`     | `"AB+"`       | Push `*` to stack |
| 7    | `C`      | `[`*`]`     | `"AB+C"`      | Operand, add to result |

#### **Final Stack Processing**
- Stack contains `[*]`, pop and add to result.

#### **Final Result**  
```plaintext
AB+C*
```

---  


