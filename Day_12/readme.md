## Day 12 - Problems

---

### 51. **Evaluate Postfix Expression** [🧲](./_51_evaluate_postfix_expression.cpp)
   - **File**: _51_evaluate_postfix_expression.cpp
   - **Description**: Evaluate a postfix expression (Reverse Polish Notation) where operands and operators are given in a list. The result of the expression is calculated using a stack for intermediate storage.
   - **Approach**:
     1. Initialize an empty stack to store intermediate results.
     2. Traverse the list of tokens:
        - If the token is an operator (`+`, `-`, `*`, `/`):
          - Pop the top two elements from the stack (`b` and `a` in this order, where `b` is the most recently pushed element).
          - Perform the operation corresponding to the token:
            - If the token is `+`, compute \(a + b\).
            - If the token is `-`, compute \(a - b\).
            - If the token is `*`, compute \(a \times b\).
            - If the token is `/`, compute integer division \(a / b\).
          - Push the result back onto the stack.
        - If the token is a number, convert it from string to integer and push it onto the stack.
     3. After processing all tokens, the stack will contain a single element, which is the result of the postfix expression.
   - **Time Complexity**: \(O(n)\), where \(n\) is the number of tokens in the input list. Each token is processed once.
   - **Space Complexity**: \(O(n)\), due to the stack used for intermediate results.

---

### 52. **Valid Parentheses** [🧲](./_52_valid_parentheses.cpp)
   - **File**: _52_valid_parentheses.cpp
   - **Description**: Determine if a given string containing parentheses is valid and balanced. A string is valid if every opening parenthesis has a matching closing parenthesis in the correct order and nesting.
   - **Approach**:
     1. Initialize an empty stack to store opening brackets.
     2. Traverse each character in the string:
        - If the character is an opening bracket (`(`, `[`, `{`), push it onto the stack.
        - If the character is a closing bracket (`)`, `]`, `}`):
          - Check if the stack is empty. If it is, the string is unbalanced, return `false`.
          - Pop the top of the stack and check if it matches the current closing bracket:
            - `(` matches `)`.
            - `[` matches `]`.
            - `{` matches `}`.
          - If the popped character does not match, return `false`.
     3. After traversing the string, check if the stack is empty:
        - If the stack is empty, the string is balanced, return `true`.
        - If the stack is not empty, there are unmatched opening brackets, return `false`.
   - **Time Complexity**: \(O(n)\), where \(n\) is the length of the string. Each character is processed once.
   - **Space Complexity**: \(O(n)\), due to the stack used to store unmatched opening brackets.

---
