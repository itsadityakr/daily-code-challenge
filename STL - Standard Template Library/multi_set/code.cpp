#include <iostream>
#include <set>
#define endl "\n"
using namespace std;

void explainMulti_set(){
    // Define a multiset of integers
    // Mutiple values in sorted order
    multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(1); // Multiset: {1}
    ms.insert(1); // Multiset: {1, 1}
    ms.insert(1); // Multiset: {1, 1, 1}
    ms.insert(1); // Multiset: {1, 1, 1, 1}
    ms.insert(2); // Multiset: {1, 1, 1, 1, 2}
    ms.emplace(3); // Multiset: {1, 1, 1, 1, 2, 3}
    ms.insert(4); // Multiset: {1, 1, 1, 1, 2, 3, 4}
    ms.insert(3); // Multiset: {1, 1, 1, 1, 2, 3, 3, 4} (allowing duplicates)

    // Find an element in the multiset
    auto it = ms.find(3); // Returns iterator pointing to one of the '3'ms
    cout << "Value at iterator pointing to 3: " << *(it) << endl; // Print the value at which iterator is pointing

    // Attempt to find an element not in the multiset
    auto it_not_found = ms.find(7); // Returns iterator pointing to end()

    // Erase an element from the multiset
    ms.erase(3); // Multiset: {1, 1, 1, 1, 2, 4}

    // Erase a specific number of occurrences of a value (1 in this case)
    int count_to_delete = 3;
    auto it_to_delete = ms.find(1); // Iterator pointing to the first occurrence of '1'
    while (count_to_delete > 0 && it_to_delete != ms.end()) {
        it_to_delete = ms.erase(it_to_delete); // Erase the element and move to the next one
        --count_to_delete; // Decrease the count
    }

    // Erase all occurrences of a specific value
    ms.erase(1); // Multiset: {2, 4}

    // Count occurrences of an element in the multiset
    int count = ms.count(1); // count = 0, as '1' is no longer in the multiset

    // Erase a range of elements from the multiset
    auto it1 = ms.find(2); // Iterator pointing to 2
    auto it2 = ms.find(3); // Iterator pointing to end() (as 3 is not found)
    ms.erase(it1, it2); // Erases elements from it1 (included) to it2 (excluded), Multiset: {2, 4}

    auto it_lower = ms.lower_bound(2); // Iterator to the first element >= 2 (points to 2 itself)

    auto it_upper = ms.upper_bound(3); // Iterator to the first element > 3 (points to end() since there is no element greater than 3)

    // Displaying the elements of the multiset
    cout << "Elements in the multiset:";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;
}

int main() {
    explainMulti_set();
    return 0;
}
