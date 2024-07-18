#include <iostream>
#include <queue>
#define endl "\n"
using namespace std;

void explainQueue() {
    queue<int> q;

    q.push(1);        // queue: front -> [1] <- rear
    q.push(2);        // queue: front -> [1, 2] <- rear
    q.push(3);        // queue: front -> [1, 2, 3] <- rear
    q.push(4);        // queue: front -> [1, 2, 3, 4] <- rear
    q.emplace(5);     // queue: front -> [1, 2, 3, 4, 5] <- rear

    // Access front and back elements
    q.front(); // Should output 1
    q.back(); // Should output 5
    
    q.back() += 8; // Should output 13 (5 + 8)

    q.pop(); // queue: front -> [2, 3, 4, 13] <- rear

    q.size(); // output -> 4
    q.empty(); // output -> 0 (false, as queue is not empty)

    // Print all elements in the queue
    cout << "Elements in the queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    queue<int> q1;
    q1.swap(q);     // Swaps contents of q1 and q (although q is now empty, q1 will also be empty after this)
}

int main() {
    explainQueue();
    return 0;
}
