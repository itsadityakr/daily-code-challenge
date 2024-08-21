# Foundations of Programming in C++
## User Input / Output
### C++ Hello World and Input Example

This example demonstrates a simple C++ program that outputs a message and reads user input.

#### Code Explanation

```cpp
#include <iostream>
```
- **`#include <iostream>`**: This line includes the input/output stream library, allowing us to use `cout` for output and `cin` for input.

```cpp
using namespace std;
```
- **`using namespace std;`**: This line declares that we are using the `std` namespace. Namespaces in C++ help avoid naming conflicts and organize code.

```cpp
int main() {
```
- **`int main() { ... }`**: Every C++ program must have a `main` function where execution begins. The `int` before `main` indicates that this function returns an integer value (`0` for success, non-zero for failure).

```cpp
    // Outputting messages
    cout << "Hello, World!" << endl;
```
- **`cout << "Hello, World!" << endl;`**: Outputs the text "Hello, World!" to the console. `cout` is used for outputting text, `<<` is the insertion operator, and `endl` inserts a newline character.

```cpp
    // Reading and outputting variables
    int number;
    cout << "Enter a number: ";
    cin >> number;
```
- **`int number;`**: Declares an integer variable named `number`.
- **`cout << "Enter a number: ";`**: Outputs the prompt "Enter a number: ".
- **`cin >> number;`**: Reads an integer input from the user and stores it in the variable `number`. `cin` is used for reading input, `>>` is the extraction operator.

```cpp
    cout << "You entered: " << number << endl;
```
- **`cout << "You entered: " << number << endl;`**: Outputs the message "You entered: " followed by the value of `number`, and then inserts a newline (`endl`).

```cpp
    return 0;
}
```
- **`return 0;`**: Indicates successful program execution by returning `0` to the operating system. This conventionally indicates no errors occurred.

#### Summary
This program:
- Prints "Hello, World!" to the console.
- Prompts the user to enter a number.
- Reads the number from the user.
- Displays the entered number back to the user.

This example covers basic input/output operations (`cout` and `cin`) in C++. It's a fundamental starting point for learning how to interact with users and display information in console applications.

---

## C++ Data Types Example and Explanation

This example demonstrates various data types in C++, their sizes, and examples of type conversions.

#### Code Explanation

```cpp
#include <iostream>
#include <limits>
```
- **`#include <iostream>`**: Includes the input/output stream library for basic input/output operations.
- **`#include <limits>`**: Includes the `<limits>` header to utilize functionalities for numeric limits.

```cpp
int main() {
```
- **`int main() { ... }`**: The main function where execution of the program begins.

#### Integer Types

```cpp
    int intVar = 10;
    unsigned int uintVar = 20;
    short shortVar = 30;
    unsigned short ushortVar = 40;
    long longVar = 50;
    unsigned long ulongVar = 60;
    long long longlongVar = 70;
    unsigned long long ulonglongVar = 80;
```
- **Integer Types**: Variables declared with various integer types (`int`, `unsigned int`, `short`, `unsigned short`, `long`, `unsigned long`, `long long`, `unsigned long long`) with initialized values.

#### Floating-Point Types

```cpp
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    long double longdoubleVar = 1.41421356237;
```
- **Floating-Point Types**: Variables declared with floating-point types (`float`, `double`, `long double`) with initialized values.

#### Character Types

```cpp
    char charVar = 'A';
    unsigned char ucharVar = 'B';
```
- **Character Types**: Variables declared with character types (`char`, `unsigned char`) with initialized values representing characters.

#### Boolean Type

```cpp
    bool boolVar = true;
```
- **Boolean Type**: Variable declared with `bool` type with an initialized value of `true`.

#### Output Values

```cpp
    std::cout << "Integer types:" << std::endl;
    // Outputs for each integer variable...
    std::cout << "Floating-point types:" << std::endl;
    // Outputs for each floating-point variable...
    std::cout << "Character types:" << std::endl;
    // Outputs for each character variable...
    std::cout << "Boolean type:" << std::endl;
    // Outputs for boolean variable...
```
- **Output Statements**: Uses `std::cout` to display values of different types to the console, organized by category.

#### Implicit and Explicit Type Conversions

```cpp
    intVar = floatVar;  // Implicit conversion from float to int
    doubleVar = intVar; // Implicit conversion from int to double
    shortVar = charVar; // Implicit conversion from char to short

    doubleVar = static_cast<double>(longVar); // Explicit conversion from long to double
    intVar = static_cast<int>(doubleVar);     // Explicit conversion from double to int
```
- **Type Conversions**: Demonstrates both implicit (automatically handled by the compiler) and explicit (using `static_cast`) type conversions between different data types.

#### Summary

This program illustrates:
- Various integer, floating-point, character, and boolean data types in C++.
- Initialization and output of variables of different types.
- Examples of implicit and explicit type conversions between data types.

Understanding these concepts is fundamental for effective data manipulation and type safety in C++ programming. Adjustments and further exploration of these concepts will enhance your grasp of data types in C++.

---

## Conditional Statements and Loops in C++

#### Conditional Statements

##### `if` Statement

- **Usage**: Executes a block of code if a specified condition is true.
- **Example**: 
  ```cpp
  int number = 10;
  if (number > 0) {
      std::cout << "Number is positive." << std::endl;
  }
  ```
- **Notes**: 
  - Condition (`number > 0`) evaluates to true, so the message is printed.

##### `if-else` Statement

- **Usage**: Executes one block of code if the condition is true and another block if it's false.
- **Example**: 
  ```cpp
  int age = 20;
  if (age >= 18) {
      std::cout << "You are an adult." << std::endl;
  } else {
      std::cout << "You are a minor." << std::endl;
  }
  ```
- **Notes**: 
  - Since `age` is 20 (`age >= 18` is true), it prints "You are an adult."

##### `if-else if-else` Statement

- **Usage**: Checks multiple conditions and executes the corresponding block of code.
- **Example**: 
  ```cpp
  char grade = 'B';
  if (grade == 'A') {
      std::cout << "Excellent!" << std::endl;
  } else if (grade == 'B') {
      std::cout << "Good job!" << std::endl;
  } else {
      std::cout << "Need improvement." << std::endl;
  }
  ```
- **Notes**: 
  - `grade` is 'B', so the second condition (`grade == 'B'`) is true, printing "Good job!".

##### `switch` Statement

- **Usage**: Evaluates an expression against multiple possible case values and executes the corresponding block of code.
- **Example**: 
  ```cpp
  int choice = 2;
  switch (choice) {
      case 1:
          std::cout << "Option 1 selected." << std::endl;
          break;
      case 2:
          std::cout << "Option 2 selected." << std::endl;
          break;
      default:
          std::cout << "Invalid choice." << std::endl;
  }
  ```
- **Notes**: 
  - `choice` is 2, so "Option 2 selected." is printed.

#### Loops

##### `while` Loop

- **Usage**: Executes a block of code repeatedly as long as a specified condition is true.
- **Example**: 
  ```cpp
  int count = 0;
  while (count < 5) {
      std::cout << "Count: " << count << std::endl;
      count++;
  }
  ```
- **Notes**: 
  - Prints `Count: 0` to `Count: 4` as `count` increments from 0 to 4.

##### `do-while` Loop

- **Usage**: Similar to `while` loop but ensures the block of code executes at least once, even if the condition is false initially.
- **Example**: 
  ```cpp
  int x = 5;
  do {
      std::cout << "Value of x: " << x << std::endl;
      x--;
  } while (x > 0);
  ```
- **Notes**: 
  - Prints `Value of x: 5` to `Value of x: 1` as `x` decrements from 5 to 1.

##### `for` Loop

- **Usage**: Executes a block of code a specified number of times.
- **Example**: 
  ```cpp
  for (int i = 1; i <= 5; ++i) {
      std::cout << "Iteration: " << i << std::endl;
  }
  ```
- **Notes**: 
  - Prints `Iteration: 1` to `Iteration: 5` with `i` incrementing from 1 to 5.

##### Range-based `for` Loop (C++11 onwards)

- **Usage**: Iterates over elements of a range (e.g., array, container) simplifying the syntax.
- **Example**: 
  ```cpp
  int numbers[] = {1, 2, 3, 4, 5};
  for (auto &num : numbers) {
      std::cout << "Number: " << num << std::endl;
  }
  ```
- **Notes**: 
  - Prints `Number: 1` to `Number: 5` iterating through each element in `numbers`.

#### Jump Statements

##### `break` Statement

- **Usage**: Terminates the loop or `switch` statement and transfers control to the next statement after the loop or `switch`.
- **Example**: 
  ```cpp
  for (int i = 1; i <= 10; ++i) {
      if (i == 5) {
          break; // Exit the loop when i equals 5
      }
      std::cout << "Value of i: " << i << std::endl;
  }
  ```
- **Notes**: 
  - Stops the loop when `i` equals 5, printing values `1` to `4`.

##### `continue` Statement

- **Usage**: Skips the rest of the loop body for the current iteration and continues with the next iteration.
- **Example**: 
  ```cpp
  for (int i = 1; i <= 5; ++i) {
      if (i == 3) {
          continue; // Skip printing when i equals 3
      }
      std::cout << "Value of i: " << i << std::endl;
  }
  ```
- **Notes**: 
  - Skips printing `Value of i: 3`, but continues with `1`, `2`, `4`, and `5`.

##### `goto` Statement

- **Usage**: Transfers control to the labeled statement, but generally avoided due to readability concerns.
- **Example**: 
  ```cpp
  int j = 1;
  loop:
  std::cout << "Value of j: " << j << std::endl;
  j++;
  if (j <= 3) goto loop;
  ```
- **Notes**: 
  - Prints `Value of j: 1`, `Value of j: 2`, and `Value of j: 3` using `goto` to loop.

### Summary

Understanding these constructs in C++—conditional statements (`if`, `if-else`, `if-else if-else`, `switch`), loops (`while`, `do-while`, `for`, range-based `for`), and jump statements (`break`, `continue`, `goto` when necessary)—is crucial for controlling program flow, iterating over data, and handling decision-making scenarios effectively. These constructs provide powerful tools for creating structured and efficient code in C++.


---

## Arrays and Strings in C++

#### Arrays

##### Definition and Declaration

- **Definition**: An array is a fixed-size sequential collection of elements of the same type, stored in contiguous memory locations.
- **Declaration**: Arrays are declared using square brackets (`[]`) after the type specifier.

##### Example

```cpp
int numbers[5];  // Declaration of an array named 'numbers' with 5 elements of type int
```

##### Initialization

- **Initialization**: Arrays can be initialized when declared or later using assignment.

```cpp
int numbers[5] = {1, 2, 3, 4, 5};  // Initialization of 'numbers' with values
```

##### Accessing Elements

- **Access**: Elements are accessed using zero-based indexing (`0` to `size-1`).

```cpp
int thirdNumber = numbers[2];  // Accessing the third element (index 2) of 'numbers'
```

##### Notes

- Arrays are static in size and cannot be resized after declaration.
- Elements are contiguous in memory, allowing efficient access.

#### Strings

##### Definition and Declaration

- **Definition**: A string is a sequence of characters stored as a standard C++ class (`std::string`) or as a character array (`char` array terminated by `'\0'`).

##### Example (Using `std::string`)

```cpp
#include <string>

std::string greeting = "Hello, World!";  // Declaration and initialization of a string
```

##### Example (Using `char` array)

```cpp
char name[20] = "John Doe";  // Declaration and initialization of a character array
```

##### Accessing Characters

- **Access**: Individual characters in a string are accessed similarly to elements in an array.

```cpp
char firstChar = greeting[0];  // Accessing the first character of 'greeting'
```

##### String Operations

- **Operations**: Strings support various operations like concatenation, comparison, and substring extraction using member functions or operators.

```cpp
std::string fullName = firstName + " " + lastName;  // Concatenating strings
```

##### Notes

- C++ provides a robust `std::string` class that manages dynamic memory and provides extensive string manipulation capabilities.
- Character arrays (`char` arrays) are manually managed and require explicit handling of null-termination (`'\0'`).

### Summary

Understanding arrays and strings in C++ is fundamental for managing collections of data and text. Arrays offer a fixed-size, contiguous storage for elements of the same type, while strings are sequences of characters with extensive manipulation capabilities through the `std::string` class or `char` arrays. Mastery of these concepts enables efficient data handling and text processing in C++ programs.

---

## Functions in C++

#### Definition and Purpose

- **Definition**: A function in C++ is a named block of code that performs a specific task. It encapsulates a sequence of statements that are executed when the function is called.
- **Purpose**: Functions promote code reusability, modularity, and abstraction by allowing you to define a task once and reuse it multiple times in your program.

#### Syntax

```cpp
return_type function_name(parameters) {
    // Function body (statements)
    // Return statement (optional)
}
```

- **`return_type`**: Specifies the type of data that the function will return after execution. Use `void` if the function does not return any value.
- **`function_name`**: A unique identifier for the function.
- **`parameters`**: Optional. Variables passed to the function to perform its task. They act as inputs to the function.

#### Example

```cpp
#include <iostream>

// Function declaration
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    // Function call
    int result = add(3, 5);
    std::cout << "Result: " << result << std::endl;  // Output: Result: 8

    return 0;
}
```

#### Components of a Function

1. **Function Declaration**: Specifies the function's existence, including its name, return type, and parameters (if any). This typically occurs before the `main` function or at the start of the program.

2. **Function Body**: Contains the statements that define what the function does when called. It is enclosed in curly braces `{}`.

3. **Return Statement**: Optional. It specifies the value that the function will return to the caller. If the function has a return type other than `void`, it must include a return statement with a value of that type.

#### Function Call

- **Calling a Function**: Invoking a function in your code triggers the execution of its body. Arguments passed to the function (if any) are evaluated and passed to the function's parameters.

```cpp
int result = add(3, 5);  // Calling the add function with arguments 3 and 5
```

#### Types of Functions

1. **Functions with Return Values**: Functions that compute a result and return it to the caller.

2. **Functions without Return Values (`void` functions)**: Functions that perform tasks but do not return any value.

#### Function Parameters

- **Parameters**: Act as placeholders for values passed to the function when it is called. They define what data the function needs to perform its task.

```cpp
int add(int a, int b) {
    // 'a' and 'b' are parameters
    int sum = a + b;
    return sum;
}
```

#### Function Overloading

- **Function Overloading**: Allows you to define multiple functions with the same name but different parameter lists or types. The compiler determines which function to call based on the arguments passed.

```cpp
int add(int a, int b);          // Function with two integer parameters
float add(float a, float b);    // Function with two float parameters
```

#### Scope and Lifetime

- **Scope**: Refers to where in the program a variable or function is accessible. Functions have their own local scope, and variables declared within a function are typically local to that function.

- **Lifetime**: Refers to the period during which a function or variable exists in memory. Function lifetime starts when it's called and ends when it returns.

### Detailed Explanation with Notes

#### `#include <iostream>` and `using namespace std;`

- **`#include <iostream>`**: This directive includes the standard input-output stream library in your program. It provides functionalities for input (via `cin`) and output (via `cout`).

- **`using namespace std;`**: This line declares that all elements in the `std` namespace are accessible in the current scope without prefixing them with `std::`.

#### `passByValue` Function

- **Purpose**: Demonstrates parameter passing by value.
- **Parameter**: `int num` is passed by value, meaning a copy of `number` from `main` is created.
- **Effect**: Changes made to `num` inside the function do not affect `number` in `main`.

#### `passByReference` Function

- **Purpose**: Demonstrates parameter passing by reference.
- **Parameter**: `int &num` accepts a reference to `number` from `main`.
- **Effect**: Changes made to `num` inside the function directly affect `number` in `main`.

#### `add` Function

- **Purpose**: Computes the sum of two integers (`a` and `b`).
- **Return Type**: `int` specifies that the function returns an integer value.
- **Return Statement**: `return a + b;` calculates and returns the sum of `a` and `b`.

#### `main` Function

- **Variable Declaration**: `int number = 10;` initializes `number` with the value `10`.

- **Function Calls**:
  - `passByValue(number);`: Demonstrates passing `number` by value. Shows that changes made to `num` inside the function do not affect `number` in `main`.
  - `passByReference(number);`: Demonstrates passing `number` by reference. Changes made to `num` inside the function directly affect `number` in `main`.
  - `int result = add(5, 3);`: Calls the `add` function with arguments `5` and `3`. Stores the returned value (`8`) in `result`.

- **Output**:
  - Displays the initial value of `number`.
  - Prints values of `number` after `passByValue` and `passByReference` function calls.
  - Outputs the result of the `add` function call.

#### Notes

- **Parameter Passing by Value**: 
  - Copies the actual value of the argument into the formal parameter. Modifications to the parameter inside the function do not affect the argument.
  - Useful when you do not want to modify the original value.
  
- **Parameter Passing by Reference**:
  - Passes a reference to the argument into the function, allowing the function to modify the argument.
  - Efficient for large data structures as it avoids copying.
  
- **Return Types**:
  - Functions can return values using `return` statements. The return type specifies the type of the value returned.
  
- **`cout` and `endl`**:
  - `cout` is used to output data to the console.
  - `endl` outputs a newline character and flushes the output buffer.
  
- **Function Organization**:
  - Functions help organize code into manageable units, promoting code reuse and readability.
  
- **Namespace Usage**:
  - `std::` is a namespace that contains standard C++ library entities.
  - `using namespace std;` allows you to use `cout`, `cin`, and other standard library components without explicitly qualifying them with `std::`.
  
Understanding these concepts and their applications is crucial for effective C++ programming, enabling structured and efficient code development.

#### Summary

Understanding functions in C++ is essential for structuring programs effectively. They allow you to break down complex tasks into manageable units, promote code reuse, and improve readability. Mastery of function concepts—declaration, definition, parameters, return types, scope, and lifetime—enables you to design modular and efficient C++ programs.

---

### Calculating Time and Space Complexity in C++

#### Time Complexity

**Definition**: Time complexity describes the amount of time an algorithm takes to run as a function of the size of its input.

##### Notation

- **Big O Notation (O)**: Represents the worst-case scenario for an algorithm's runtime.

##### Examples

```cpp
// Example 1: O(1) - Constant Time Complexity
void constantTime(int n) {
    int x = 10;
    cout << "Hello, World!" << endl;
}
```

- **Explanation**: Regardless of the size of `n`, the function executes a fixed number of operations (`int x = 10; cout << "Hello, World!" << endl;`). Thus, its time complexity is constant, O(1).

```cpp
// Example 2: O(n) - Linear Time Complexity
void linearTime(int n) {
    for (int i = 0; i < n; ++i) {
        cout << i << endl;
    }
}
```

- **Explanation**: The function iterates `n` times through the `for` loop, printing `i`. Therefore, its time complexity is O(n), where the runtime grows linearly with `n`.

```cpp
// Example 3: O(n^2) - Quadratic Time Complexity
void quadraticTime(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << i << " " << j << endl;
        }
    }
}
```

- **Explanation**: This function nests two `for` loops, each iterating `n` times. As a result, the total number of operations is proportional to `n^2`, leading to a time complexity of O(n^2).

#### Space Complexity

**Definition**: Space complexity describes the amount of memory space an algorithm uses as a function of its input size.

##### Notation

- **Big O Notation (O)**: Represents the worst-case scenario for an algorithm's memory usage.

##### Examples

```cpp
// Example 4: O(1) - Constant Space Complexity
void constantSpace(int n) {
    int x = 10;
    cout << "Hello, World!" << endl;
}
```

- **Explanation**: The function uses a constant amount of space (`int x = 10;`). Its space complexity is O(1), as it does not increase with `n`.

```cpp
// Example 5: O(n) - Linear Space Complexity
void linearSpace(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        v[i] = i;
    }
}
```

- **Explanation**: The function creates a vector `v` of size `n`. Therefore, its space complexity is O(n), as the memory usage grows linearly with `n`.

```cpp
// Example 6: O(n^2) - Quadratic Space Complexity
void quadraticSpace(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = i + j;
        }
    }
}
```

- **Explanation**: This function creates a 2D vector `matrix` of size `n x n`. Thus, its space complexity is O(n^2), as the memory usage scales quadratically with `n`.

### Summary

Understanding time and space complexity in C++ is crucial for designing efficient algorithms. Time complexity (measured in Big O notation) quantifies how the runtime of an algorithm scales with input size, while space complexity describes how the memory usage scales. Mastery of these concepts helps in analyzing algorithm performance, optimizing code, and choosing appropriate algorithms for different problem scenarios.

---

by- Aditya Kumar