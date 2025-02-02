### Day 39 - Problems

---

### 134. **Print 1 to n** [CPP Code](./_134_print_1_to_n.cpp)

- **File**: _134_print_1_to_n.cpp_
- **Description**: The task is to print numbers from 1 to `n` in increasing order using recursion.
- **Approach**:
  1. **Recursion Concept**: The main idea behind recursion is to break a problem into smaller subproblems. In this case, we recursively reduce `n` until we reach the base case where `n == 0`, at which point the function stops.
  2. **Base Case**: When `n == 0`, return and stop the recursion. This is essential to ensure that the recursion doesn't continue indefinitely.
  3. **Recursive Step**: The function calls itself first with `n - 1` and only prints `n` after the smaller numbers have been printed. The printing is done as the recursion "unwinds" (i.e., as the stack of function calls is completed).
     - Example: For `n = 3`, the function first calls `printNos(2)`, then `printNos(1)`, and finally `printNos(0)`. Then, as the stack starts unwinding, the numbers are printed in the order: 1, 2, 3.
  4. **Key Point**: This approach ensures that the recursion happens first (printing the smaller numbers first), then prints the current number `n` once the function call returns to that level.
- **Time Complexity**: O(n)

  - Each recursive call takes constant time, and we make `n` recursive calls, so the total time complexity is proportional to the value of `n`.

- **Space Complexity**: O(n)
  - The recursion depth is `n` because we keep reducing `n` until it reaches 0. Each recursive call adds a new frame to the stack, so the space complexity is proportional to `n`.

---

### 135. **Print n to 1** [CPP Code](./_135_print_n_to_1.cpp)

- **File**: _135_print_n_to_1.cpp_
- **Description**: The task is to print numbers from `n` to 1 in decreasing order using recursion.
- **Approach**:

  1. **Recursion Concept**: In this problem, the recursive process works similarly to the previous problem, but the order of printing is reversed. Instead of printing smaller numbers first, we print the current number `n` first and then recursively call the function to print smaller numbers.
  2. **Base Case**: The recursion stops when `n == 0`. This ensures that we don't go beyond `n = 1`.
  3. **Recursive Step**: Print `n`, and then recursively call `printNos(n - 1)` to print the next smaller number.
     - Example: For `n = 3`, the function first prints `3`, then calls `printNos(2)` to print `2`, then `printNos(1)` to print `1`, and finally `printNos(0)` stops the recursion.
  4. **Key Point**: This approach ensures that the numbers are printed starting from `n` down to 1, which is the reverse order compared to the previous problem.

- **Time Complexity**: O(n)

  - The recursion is called once for each value from `n` to 1, so the time complexity is proportional to `n`.

- **Space Complexity**: O(n)
  - Each recursive call adds a new frame to the stack, so the space complexity is proportional to the recursion depth, which is `n`.

---

### 136. **Print GFG n times** [CPP Code](./_136_print_gfg_n_times.cpp)

- **File**: _136_print_gfg_n_times.cpp_
- **Description**: The task is to print the string "GFG" exactly `n` times using recursion.
- **Approach**:

  1. **Recursion Concept**: Similar to the previous problems, we use recursion to repeatedly print "GFG". The recursion reduces `n` each time until `n == 0`, and the base case ensures that the recursion stops.
  2. **Base Case**: The recursion stops when `n == 0`. This is the point at which no more "GFG" strings are printed.
  3. **Recursive Step**: Print "GFG" and then recursively call `printGfg(n - 1)` to print it `n` times.
     - Example: For `n = 3`, the function prints "GFG" three times: "GFG GFG GFG".
  4. **Key Point**: This problem is conceptually similar to the previous ones, but instead of numbers, we print the string "GFG". The recursive process is the same — print, then recurse until `n == 0`.

- **Time Complexity**: O(n)

  - Each call prints the string "GFG", and there are `n` calls, so the time complexity is O(n).

- **Space Complexity**: O(n)
  - The space complexity is determined by the depth of the recursion stack, which is `n` as we make `n` recursive calls.

---

### 137. **Sum of First n Terms (Cubes of Numbers)** [CPP Code](./_137_sum_of_first_n_terms.cpp)

- **File**: _137_sum_of_first_n_terms.cpp_
- **Description**: The task is to calculate the sum of cubes of numbers from 1 to `n` using recursion.
- **Approach**:

  1. **Recursion Concept**: The function recursively calculates the sum of cubes from `1^3` to `n^3`. In each recursive call, we calculate the cube of `n` and add it to the result of the smaller subproblem (the sum of cubes up to `n-1`).
  2. **Base Case**: The base case occurs when `n == 1`, at which point the sum is simply `1^3 = 1`. This is the simplest form of the problem.
  3. **Recursive Step**: The function adds `n^3` to the result of `sumOfSeries(n - 1)`, where the recursive call continues to calculate the sum for smaller values of `n`.
     - Example: For `n = 3`, the function calculates `3^3 + sumOfSeries(2)`, and so on.
  4. **Key Point**: The recursion ensures that the sum of cubes is built progressively, starting from the cube of `n` down to 1.

- **Time Complexity**: O(n)

  - The function makes `n` recursive calls, and each call involves a constant time operation (calculating a cube and adding it to the sum).

- **Space Complexity**: O(n)
  - Each recursive call uses space on the stack, and the recursion depth is `n`, so the space complexity is O(n).

---

### 138. **Factorials Less Than or Equal to n** [CPP Code](./_138_factorials_less_than_or_equal_to.cpp)

- **File**: _138_factorials_less_than_or_equal_to.cpp_
- **Description**: The task is to find all factorials less than or equal to a given number `n`.
- **Approach**:

  1. **Recursion Concept**: This function calculates factorials starting from 1, and for each factorial, it checks if it is less than or equal to `n`. If so, it is added to the result.
  2. **Base Case**: The recursion stops when the product (factorial) exceeds `n`.
  3. **Recursive Step**: The factorial is calculated by multiplying the current number `i` with the previous product. The function recursively calls itself with `i + 1` to calculate the next factorial.
     - Example: For `n = 100`, the factorials 1!, 2!, 3!, etc., are calculated until the product exceeds 100.
  4. **Key Point**: Factorials grow very fast, so the number of factorials less than `n` is relatively small. This allows the recursion to stop as soon as the product exceeds `n`.

- **Time Complexity**: O(log(n))

  - Factorials grow exponentially, so the number of factorials less than `n` is logarithmic in relation to `n`.

- **Space Complexity**: O(k)
  - The space complexity is proportional to the number of factorials that are found and stored in the result list.

---

### 139. **Reverse an Array** [CPP Code](./_139_reverse_an_array.cpp)

- **File**: _139_reverse_an_array.cpp_
- **Description**: The task is to reverse an array using recursion.
- **Approach**:

  1. **Recursion Concept**: The function swaps the elements at the `left` and `right` indices of the array, and then recursively processes the next inner pair by increasing `left` and decreasing `right`.
  2. **Base Case**: The recursion stops when `left >= right`. This ensures that all elements are swapped once and the array is fully reversed.
  3. **Recursive Step**: The function swaps the elements at the `left` and `right` indices, and then calls itself with `left + 1` and `right - 1` to reverse the inner part of the array.
     - Example: For an array [1, 2, 3, 4], the function first swaps 1 with 4, then 2 with 3, and the recursion stops when the `left` and `right` indices cross.
  4. **Key Point**: This approach efficiently reverses the array by reducing the problem size progressively and swapping elements in pairs.

- **Time Complexity**: O(n)

  - Each element is swapped once, and there are `n / 2` such swaps, so the time complexity is linear.

- **Space Complexity**: O(n)
  - The recursion depth is proportional to the number of elements in the array, so the space complexity is O(n).

---

### 140. **Fibonacci Number** [CPP Code](./_140_fibonacci_number.cpp)

- **File**: _140_fibonacci_number.cpp_
- **Description**: The task is to find the Fibonacci number at position `n`.
- **Approach**:

  1. **Recursion Concept**: The Fibonacci sequence is defined as `fib(n) = fib(n - 1) + fib(n - 2)` with base cases for `n == 0` and `n == 1`. The function calls itself recursively to compute the Fibonacci number.
  2. **Base Case**: When `n == 0`, return `0`; when `n == 1`, return `1`.
  3. **Recursive Step**: For `n > 1`, return the sum of `fib(n - 1)` and `fib(n - 2)`.
     - Example: For `n = 5`, the function calls `fib(4)` and `fib(3)`, and continues breaking down the problem recursively.
  4. **Key Point**: This direct recursive approach has overlapping subproblems, which means that the same Fibonacci numbers are calculated multiple times. This leads to inefficiency for large `n`.

- **Time Complexity**: O(2^n)

  - The function branches out into two calls for each `n > 1`, leading to an exponential number of calls.

- **Space Complexity**: O(n)
  - The recursion depth is proportional to `n`, as each recursive call adds a new stack frame.

---
