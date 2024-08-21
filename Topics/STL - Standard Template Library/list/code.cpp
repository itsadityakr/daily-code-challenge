#include <iostream>   // Include the standard input-output stream header
#include <list>       // Include list header for using std::list
using namespace std;  // Avoid using "using namespace std;" in headers, but it's fine in simple code like this.

void explainLists() {
    list<int> ls;    // Declare a list of integers named 'ls'
    
    // Insert elements into the list

    ls.push_back(2);    // Output -> 2, Insert 2 at the back of the list
    ls.push_front(1);   // Output -> 1 2, Insert 1 at the front of the list

    ls.push_front(5);   // Output -> 5 1 2, Insert 5 at the front of the list

    // emplace_front is used to construct an element in place at the front
    ls.emplace_front(6); // Output -> 6 5 1 2, Construct 6 in place at the front of the list

    //push_front copies an existing item to the front of the list, while emplace_front constructs a new item right there, which can be more efficient for complex objects or when you need precise control over how objects are created.

    // Print all elements in the list using a range-based for loop
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    explainLists();  // Call the explainLists function to demonstrate list operations
    return 0;        // Indicate successful completion of the program
}
