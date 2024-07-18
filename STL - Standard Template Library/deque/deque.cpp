#include <iostream>
#include <deque>

using namespace std;

//Vector: Uses contiguous memory, efficient for random access (O(1)), slower for insertions/deletions at the beginning (O(n)).
// List: Uses non-contiguous memory (doubly linked list), efficient for insertions/deletions anywhere (O(1)), slower for access (O(n)).
// Deque: Hybrid structure, efficient for insertions/deletions at both ends (O(1)), and offers efficient random access (O(1)).

void explainDeque() {
    deque<int> dq;
    
    // Operations on deque
    dq.push_back(1);        // deque: [1]
    dq.emplace_back(2);     // deque: [1, 2]
    dq.push_front(3);       // deque: [3, 1, 2]
    dq.emplace_front(4);    // deque: [4, 3, 1, 2]

    dq.pop_back();          // deque: [4, 3, 1]
    dq.pop_front();         // deque: [3, 1]

    int backValue = dq.back();   // backValue = 1
    int frontValue = dq.front(); // frontValue = 3

    deque<int>::iterator it = dq.begin();  // Iterator pointing to beginning
    deque<int>::iterator endIt = dq.end(); // Iterator pointing to end

    dq.clear();             // deque cleared, size becomes 0
    // dq.insert(begin() + 15, value); // Insert at a specific position, but 15 is out of bounds here
    size_t size = dq.size(); // size = 0

    dq.swap(dq); // Swaps contents with another deque (itself in this case)
}

int main() {
    explainDeque();
    return 0;
}
