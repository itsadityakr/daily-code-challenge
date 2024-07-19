#include <iostream>
#include <unordered_set>  // Include for unordered_set
using namespace std;

void explainUnorderedSet() {
    // Unordered_set stores unique items in any order
    unordered_set<int> us; // Syntax

    // Insert elements into the set
    us.insert(1); // Set: {1}
    us.insert(2); // Set: {1, 2}
    us.insert(9); // Set: {1, 2, 9}
    us.emplace(6); // Set: {1, 2, 9, 6}
    us.insert(5); // Set: {1, 2, 9, 6, 5}
    us.insert(3); // Set: {1, 2, 9, 6, 5, 3}
    us.insert(7); // Set: {1, 2, 9, 6, 5, 3, 7}
    us.insert(8); // Set: {1, 2, 9, 6, 5, 3, 7, 8}
    us.insert(4); // Set: {1, 2, 9, 6, 5, 3, 7, 8, 4}
    us.insert(4); // Set: {1, 2, 9, 6, 5, 3, 7, 8, 4} (4 is not inserted again)

    // Find an element in the set
    auto it = us.find(4); // Returns iterator pointing to 4
    if (it != us.end()) {
        cout << "Value at iterator pointing to: " << *(it) << endl; // Print the value at which iterator is pointing
    } else {
        cout << "Element 4 not found in the set" << endl;
    }

    // Attempt to find an element not in the set
    auto it_not_found = us.find(10); // Returns iterator pointing to end()
    if (it_not_found == us.end()) {
        cout << "Element 10 not found in the set" << endl;
    }

    // Erase an element from the set
    us.erase(3); // Set: {1, 2, 9, 6, 5, 7, 8, 4}

    // Count occurrences of an element in the set
    int count = us.count(1); // count = 1, as only one '1' can exist in the set
    cout << "Count of 1 in the set: " << count << endl;

    // Displaying the elements of the set
    cout << "Elements in the set:";
    for (auto it = us.begin(); it != us.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Clear all elements from the set
    us.clear(); // Set is now empty
    cout << "Set cleared. Size of set: " << us.size() << endl;
}

int main() {
    explainUnorderedSet();
    return 0;
}
