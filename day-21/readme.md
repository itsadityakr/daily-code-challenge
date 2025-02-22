## Day 21 - Problems

---

### 74. **Plus One** [🧲](./_74_plus_one.cpp)
   - **File**: _74_plus_one.cpp
   - **Description**: 
     Given a non-negative integer represented as a vector of digits, where each element of the vector is a digit in the number, the task is to add one to the number and return the result as a vector of digits. For example, if the input is `[1, 2, 3]`, the output should be `[1, 2, 4]`. If the number ends with a 9, it should carry over and become 0, like `99` becoming `100`.

   - **Approach**: 
     The approach to solving this problem involves simulating the addition of one to the number represented by the vector of digits:
     1. Start from the least significant digit (the last element in the vector).
     2. Traverse backward through the vector (from right to left).
     3. For each digit:
        - If the digit is less than 9, simply add 1 to that digit and return the modified vector. This is because there is no need for a carry-over in this case.
        - If the digit is 9, set it to 0 (since `9 + 1` results in `0` with a carry), and continue checking the next more significant digit.
     4. If you finish traversing all the digits and still need a carry-over (i.e., all digits were 9), insert a `1` at the beginning of the vector. This handles the case where the number like `999` becomes `1000`.

     **Key Steps:**
     - Start from the last element of the vector.
     - Check if it's less than 9, and if so, increment and return.
     - If it's 9, set it to 0 and move to the next digit.
     - If the loop completes (i.e., all digits were 9), insert a `1` at the beginning.

   - **Time Complexity**:
     - The time complexity of the solution is **O(n)**, where `n` is the number of digits in the input vector. This is because, in the worst case, we might have to traverse the entire vector to handle a carry-over.

   - **Space Complexity**:
     - The space complexity is **O(n)**, where `n` is the number of digits in the input vector. This is because we are modifying the vector in place and potentially adding one more element (if there is a carry-over at the end).

   ---