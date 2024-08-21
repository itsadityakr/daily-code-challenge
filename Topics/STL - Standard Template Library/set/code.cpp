#include <iostream>
#include <set>
#define endl "\n"
using namespace std;

void explainSet(){
    // Set stores unique items in a sorted order
    // Iterator will only return the value not the address of iterator
    // Define a set of integers
    set<int> s;

    // Insert elements into the set
    s.insert(1); // Set: {1}
    s.insert(2); // Set: {1, 2}
    s.emplace(3); // Set: {1, 2, 3}
    s.insert(4); // Set: {1, 2, 3, 4}
    s.insert(3); // Set: {1, 2, 3, 4} (3 is not inserted again)
    // Lower bound and upper bound operations



    // Find an element in the set
    auto it = s.find(3); // Returns iterator pointing to 3
    cout << *(it) << endl; // Print the value at which iterator is pointing

    // Attempt to find an element not in the set
    auto it_not_found = s.find(7); // Returns iterator pointing to end()

    // Erase an element from the set
    s.erase(3); // Set: {1, 2, 4}

    // Count occurrences of an element in the set
    int count = s.count(1); // count = 1, as only one '1' can exist in the set

    // Erase a range of elements from the set
    auto it1 = s.find(2); // Iterator pointing to 2
    auto it2 = s.find(3); // Iterator pointing to end() (as 3 is not found)
    s.erase(it1, it2); // Erases elements from it1 (included) to it2 (excluded), Set: {1, 4}

    auto it_lower = s.lower_bound(2); // Iterator to the first element >= 2 (points to 2 itself (lower_bound(2) will return an iterator pointing to the first element that is not less than 2. In this case, it points to 2 itself because 2 is the first element that is not less than 2.))
    
    auto it_upper = s.upper_bound(3); // Iterator to the first element > 3 (points to end() i.e. 4 (Since 3 is no longer in the set (3 was erased earlier), it_upper will point to s.end(), indicating that there is no element in the set greater than 3.))

    cout<<*it_lower; // output -> 2
    cout<<*it_upper; // output -> 4

    // Displaying the elements of the set
    cout << "Elements in the set:";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;
}

int main() {
    explainSet();
    return 0;
}
