### Priority Queue in C++

#### Introduction
A **priority queue** is a type of data structure where each element is assigned a priority, and elements are served based on their priority. By default, C++ provides a max-heap implementation for priority queues.

#### Including the Header
```cpp
#include <iostream>   // Standard input-output stream
#include <queue>      // Priority queue container adapter
#define endl "\n"     // Define endl for convenience
using namespace std;  // Standard C++ namespace
```

#### Declaring and Initializing a Priority Queue
```cpp
priority_queue<int> pq;   // Declare an empty max-heap priority queue of integers
```

- **`priority_queue<int>`**: Declares a max-heap priority queue named `pq` that holds integers.
- By default, `priority_queue` in C++ is a max-heap.

#### Basic Operations

1. **Insertion Operations**
   ```cpp
   pq.push(10); // Insert 10; priority_queue: Top-> [10]
   pq.push(2);  // Insert 2; priority_queue: Top-> [10, 2]
   pq.push(7);  // Insert 7; priority_queue: Top-> [10, 2, 7]
   pq.push(11); // Insert 11; priority_queue: Top-> [11, 10, 7, 2]
   pq.emplace(3); // Insert 3; priority_queue: Top-> [11, 10, 7, 2, 3]
   ```

   - **`push(value)`**: Inserts `value` into the priority queue.
   - **`emplace(args...)`**: Constructs an element in place at the appropriate position in the priority queue with `args...`.

2. **Accessing and Modifying Elements**
   ```cpp
   int topValue = pq.top(); // Accesses the top element: topValue = 11
   cout << "Top element of max-heap: " << topValue << endl;  // output -> 11
   ```

   - **`top()`**: Accesses the top (highest priority) element of the priority queue.

3. **Removing Elements**
   ```cpp
   pq.pop(); // Removes the top element: priority_queue: [10, 3, 7, 2]
   ```

   - **`pop()`**: Removes the top (highest priority) element from the priority queue.

4. **Size and Empty Check**
   ```cpp
   cout << "Size of max-heap: " << pq.size() << endl;  // output -> 4
   cout << "Is max-heap empty? " << (pq.empty() ? "Yes" : "No") << endl;  // output -> No
   ```

   - **`size()`**: Returns the number of elements in the priority queue.
   - **`empty()`**: Returns `true` if the priority queue is empty, `false` otherwise.

5. **Printing All Elements**
   To print all elements without modifying the original priority queue, create a copy:
   ```cpp
   cout << "Priority queue elements (max-heap): ";
   priority_queue<int> temp = pq;  // Create a copy of pq to avoid modifying the original
   while (!temp.empty()) {
       cout << temp.top() << " ";  // Print the top element
       temp.pop();  // Remove the top element
   }
   cout << endl;
   ```

6. **Swapping Priority Queues**
   ```cpp
   priority_queue<int> q1;
   q1.swap(pq);  // Swaps contents of q1 and pq; pq becomes empty, q1 has all elements
   ```

   - **`swap(other)`**: Swaps the contents of the priority queue with another priority queue (`other`).

#### Min-Heap Priority Queue
For a min-heap, use `greater` comparator:
```cpp
priority_queue<int, vector<int>, greater<int>> pq_mh;  // Declare a min-heap priority queue of integers
```

- **`priority_queue<int, vector<int>, greater<int>>`**: Declares a min-heap priority queue named `pq_mh` that holds integers.

#### Example Code

Here's a complete example demonstrating various operations on `std::priority_queue`:

```cpp
#include <iostream>
#include <queue>
#define endl "\n" // Define endl as newline for easier printing
using namespace std;

void explainPriority_queue() {
    // Create a max-heap priority queue of integers
    priority_queue<int> pq;

    pq.push(10); // Insert 10; priority_queue: Top-> [10]
    pq.push(2);  // Insert 2; priority_queue: Top-> [10, 2]
    pq.push(7);  // Insert 7; priority_queue: Top-> [10, 2, 7]
    pq.push(11); // Insert 11; priority_queue: Top-> [11, 10, 7, 2]
    pq.emplace(3); // Insert 3; priority_queue: Top-> [11, 10, 7, 2, 3]

    // Print the top element of the priority queue
    cout << "Top element of max-heap: " << pq.top() << endl; // output -> 11
    
    // Remove the top element
    pq.pop(); // priority_queue: [10, 3, 7, 2]

    // Print the size of the priority queue
    cout << "Size of max-heap: " << pq.size() << endl; // output -> 4

    // Check if the priority queue is empty
    cout << "Is max-heap empty? " << (pq.empty() ? "Yes" : "No") << endl; // output -> No

    // Print all elements of the max-heap priority queue
    cout << "Priority queue elements (max-heap): ";
    priority_queue<int> temp = pq; // Create a copy of pq to avoid modifying the original
    while (!temp.empty()) {
        cout << temp.top() << " "; // Print the top element
        temp.pop(); // Remove the top element
    }
    cout << endl; // Print newline after all elements

    // Create a min-heap priority queue of integers
    priority_queue<int, vector<int>, greater<int>> pq_mh;
    pq_mh.push(59); // Insert 59; priority_queue: Top-> [59]
    pq_mh.push(75); // Insert 75; priority_queue: Top-> [59, 75]
    pq_mh.push(23); // Insert 23; priority_queue: Top-> [23, 75, 59]
    pq_mh.push(66); // Insert 66; priority_queue: Top-> [23, 66, 59, 75]
    pq_mh.push(57); // Insert 57; priority_queue: Top-> [23, 57, 59, 75, 66]
    pq_mh.emplace(49); // Insert 49; priority_queue: Top-> [23, 57, 49, 75, 66, 59]

    // Print the top element of the min-heap priority queue
    cout << "Top element of min-heap: " << pq_mh.top() << endl; // output -> 23

    // Print all elements of the min-heap priority queue
    cout << "Priority queue elements (min-heap): ";
    priority_queue<int, vector<int>, greater<int>> temp_mh = pq_mh; // Create a copy to avoid modifying the original
    while (!temp_mh.empty()) {
        cout << temp_mh.top() << " "; // Print the top element
        temp_mh.pop(); // Remove the top element
    }
    cout << endl; // Print newline after all elements

    // Example of swapping contents of two priority queues
    priority_queue<int> q1;
    q1.swap(pq); // Swap contents of q1 and pq; pq becomes empty, q1 has all elements
}

int main() {
    explainPriority_queue(); // Call the function to demonstrate priority queue operations
    return 0; // Exit the program
}
```

#### Notes
- **Advantages of Priority Queues**:
  - Efficient for scenarios requiring the highest or lowest priority element access.
  - Provides `O(log n)` time complexity for insertion (`push`, `emplace`) and removal (`pop`) operations.
  - Access to the top element (`top()`) is `O(1)`.

- **Considerations**:
  - Elements are not stored in a sorted order internally.
  - Use `std::vector` or other sequence containers if you need sorted elements.

These notes cover the basics of `std::priority_queue` in C++, including its operations, advantages, considerations, and performance characteristics.

-by Aditya Kumar