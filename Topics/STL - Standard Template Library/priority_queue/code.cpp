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
