#include <iostream>
#include <map>  // Include for multimap
using namespace std;

void explainMultimap() {
    // multimap stores keys in sorted order
    // multimap includes key, value pairs where the key can have multiple values
    // Example: a class of students where multiple students (value) can have the same blood group (keys)

    // Syntax: multimap<key_dataType, value_dataType> variableName;
    multimap<int, int> mp; // Declare a multimap with int keys and int values

    // Example of a multimap with a pair as key and int as value
    multimap<pair<int, int>, int> mp_kp; // Declare a multimap with pair<int, int> keys and int values

    // Example of a multimap with int as key and a pair as value
    multimap<int, pair<int, int>> mp_vp; // Declare a multimap with int keys and pair<int, int> values

    // Insert elements into the multimap
    mp.insert({1, 12}); // Key: 1, Value: 12
    mp.insert({2, 72});
    mp.insert({3, 23});
    mp.insert({7, 15});
    mp.insert({6, 67});
    mp.insert({9, 21});
    mp.insert({4, 10});
    mp.insert({3, 1}); // Key: 3, Value: 1

    // Insert into the multimap with pair as key
    mp_kp.insert({{2, 3}, 10}); // Key: {2, 3}, Value: 10

    // Display the elements of the multimap
    cout << "Elements in mp:" << endl;
    for (auto item : mp) {
        cout << "Key: " << item.first << ", Value: " << item.second << endl;
    }

    // Count occurrences of key
    cout << "Occurrences of key 3: " << mp.count(3) << endl;

    // Find range of elements with a specific key
    auto range = mp.equal_range(3);
    cout << "Elements with key 3:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Find an element
    auto it1 = mp.find(3); // Find key if it exists, return the iterator it
    if (it1 != mp.end()) {
        cout << "Found key 3 with value: " << it1->second << endl; // The iterator it points to the value of the key
    } else {
        cout << "Key 3 not found" << endl;
    }

    auto it2 = mp.find(5); // Since key 5 does not exist it will point to end
    if (it2 != mp.end()) {
        cout << "Found key 5 with value: " << it2->second << endl; // Will return value if key is found
    } else {
        cout << "Key 5 not found" << endl;
    }

    auto it3 = mp.lower_bound(4); // Find the first element that is not less than 4
    if (it3 != mp.end()) {
        cout << "Lower bound of 4: Key: " << it3->first << ", Value: " << it3->second << endl;
    } else {
        cout << "Lower bound of 4 not found" << endl;
    }

    auto it4 = mp.upper_bound(6); // Find the first element that is greater than 6
    if (it4 != mp.end()) {
        cout << "Upper bound of 6: Key: " << it4->first << ", Value: " << it4->second << endl;
    } else {
        cout << "Upper bound of 6 not found" << endl;
    }
}

int main() {
    explainMultimap();
    return 0;
}
