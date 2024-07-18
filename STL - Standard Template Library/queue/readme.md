### Queue in C++

#### Introduction
- A **queue** is a FIFO (First In, First Out) data structure where elements are added at the rear and removed from the front.
- The `std::queue` container adapter provides a queue-like interface over other sequence containers, typically `std::deque` by default, but it can also be implemented over `std::list`.

#### Including the Header
```cpp
#include <iostream>   // Standard input-output stream
#include <queue>      // Queue container adapter
#define endl "\n"     // Define endl for convenience
using namespace std;  // Standard C++ namespace
```

- **`#include <queue>`**: Imports the necessary header for using `std::queue`.
- **`#define endl "\n"`**: Defines `endl` to output a newline character.
- **`using namespace std;`**: Simplifies code by allowing access to standard library entities without prefixing them with `std::`.

#### Declaring and Initializing a Queue
```cpp
queue<int> q;   // Declare an empty queue of integers
```

- **`queue<int>`**: Declares a queue named `q` that holds integers.
- Queues can hold any data type (`int`, `double`, custom objects, etc.).

#### Basic Operations

1. **Insertion Operations**
   ```cpp
   q.push(1);        // queue: front -> [1] <- rear
   q.push(2);        // queue: front -> [1, 2] <- rear
   q.push(3);        // queue: front -> [1, 2, 3] <- rear
   q.push(4);        // queue: front -> [1, 2, 3, 4] <- rear
   q.emplace(5);     // queue: front -> [1, 2, 3, 4, 5] <- rear
   ```

   - **`push(value)`**: Inserts `value` at the rear of the queue.
   - **`emplace(args...)`**: Constructs an element in place at the rear of the queue with `args...`.

2. **Accessing and Modifying Elements**
   ```cpp
   int frontValue = q.front();   // Accesses the front element: frontValue = 1
   int backValue = q.back();     // Accesses the rear element: backValue = 5

   cout << frontValue << endl;  // output -> 1
   cout << backValue << endl;   // output -> 5

   q.back() += 8; // Modifies the rear element: backValue becomes 13 (5 + 8)
   ```

   - **`front()`**: Accesses the front element of the queue.
   - **`back()`**: Accesses the rear element of the queue.

3. **Removing Elements**
   ```cpp
   q.pop();          // Removes the front element: queue: front -> [2, 3, 4, 13] <- rear
   ```

   - **`pop()`**: Removes the front element from the queue.

4. **Size and Empty Check**
   ```cpp
   cout << q.size() << endl;   // output -> 4, returns the number of elements in the queue
   cout << q.empty() << endl;  // output -> 0 (false, as the queue is not empty), checks if the queue is empty
   ```

   - **`size()`**: Returns the number of elements in the queue.
   - **`empty()`**: Returns `true` if the queue is empty, `false` otherwise.

5. **Swapping Queues**
   ```cpp
   queue<int> q1;
   q1.swap(q);   // Swaps the contents of q1 and q (q1 will be empty, and q will be empty after the swap)
   ```

   - **`swap(other)`**: Swaps the contents of the queue with another queue (`other`).

6. **Printing the Queue**
   To print the contents of the queue without modifying it permanently, you can use a loop:
   ```cpp
   cout << "Elements in the queue: ";
   while (!q.empty()) {
       cout << q.front() << " ";
       q.pop();
   }
   cout << endl;
   ```

   - Use a loop to print and empty the queue.

#### Example Code

Here's a complete example demonstrating various operations on `std::queue`:

```cpp
#include <iostream>
#include <queue>
#define endl "\n"
using namespace std;

void explainQueue() {
    queue<int> q;   // Declare an empty queue of integers

    // Insert elements into the queue
    q.push(1);        // queue: front -> [1] <- rear
    q.push(2);        // queue: front -> [1, 2] <- rear
    q.push(3);        // queue: front -> [1, 2, 3] <- rear
    q.push(4);        // queue: front -> [1, 2, 3, 4] <- rear
    q.emplace(5);     // queue: front -> [1, 2, 3, 4, 5] <- rear

    // Access front and back elements
    cout << q.front() << endl;  // output -> 1
    cout << q.back() << endl;   // output -> 5

    // Modify the rear element
    q.back() += 8;  // The rear element becomes 13 (5 + 8)

    // Remove the front element
    q.pop();          // queue: front -> [2, 3, 4, 13] <- rear

    // Print queue size and check if empty
    cout << q.size() << endl;   // output -> 4
    cout << q.empty() << endl;  // output -> 0 (false, as the queue is not empty)

    // Print all elements in the queue
    cout << "Elements in the queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Swap contents with another queue
    queue<int> q1;
    q1.swap(q);   // Swaps the contents of q1 and q (both will be empty after this since q is now empty)
}

int main() {
    explainQueue();
    return 0;
}
```

#### Notes
- **Advantages of Queues**:
  - Simple and easy-to-use FIFO data structure.
  - Efficient for scenarios requiring order preservation (e.g., scheduling, buffering).

- **Considerations**:
  - Queues do not support random access to elements; access is restricted to the front and rear elements.
  - Use `std::deque` for scenarios requiring double-ended access and dynamic resizing.

- **Performance**:
  - `std::queue` provides `O(1)` time complexity for insertion (`push`, `emplace`) and removal (`pop`) operations at the front and rear.
  - Access to the front and rear elements (`front()`, `back()`) also has `O(1)` time complexity.

These notes cover the basics of `std::queue` in C++, including its operations, advantages, considerations, and performance characteristics.

-by Aditya Kumar