#include <iostream>
#include <unordered_map>  // Include for unordered_map
using namespace std;

void explainUnorderedMap() {
    // unordered_map stores unique keys but does not keep them in any particular order
    // unordered_map includes key, value pairs where the key should be unique, values can be duplicated.
    // Example: a class of students with the same name (value) but different roll numbers (key).

    // Syntax: unordered_map<key_dataType, value_dataType> variableName;
    unordered_map<int, int> ump; // Declare an unordered_map with int keys and int values

    // Example of an unordered_map with int as key and a pair as value
    unordered_map<int, pair<int, int>> ump_vp; // Declare an unordered_map with int keys and pair<int, int> values

    // Insert elements into the unordered_map
    ump[1] = 12; // Key: 1, Value: 12
    ump[2] = 72;
    ump[3] = 23;
    ump[7] = 15;
    ump[6] = 67;
    ump[9] = 21;
    ump[4] = 10;
    ump.emplace(3, 1); // Key: 3, Value: 1

    // Insert using insert function
    ump.insert({3, 1}); // Key: 3, Value: 1 (note that key 3 already exists, so the value won't be inserted again)

    // Display the elements of the unordered_map
    cout << "Elements in ump:" << endl;
    for (auto item : ump) {
        cout << "Key: " << item.first << ", Value: " << item.second << endl;
    }

    cout << "Value for key 1: " << ump[1] << endl; // Display value if key is found
    cout << "Value for key 5: " << ump[5] << endl; // Will insert key 5 with default value 0

    auto it1 = ump.find(3); // Find key if it exists, return the iterator it
    if (it1 != ump.end()) {
        cout << "Found key 3 with value: " << it1->second << endl; // The iterator it points to the value of the key
    } else {
        cout << "Key 3 not found" << endl;
    }

    auto it2 = ump.find(5); // Since key 5 does not exist it will point to end
    if (it2 != ump.end()) {
        cout << "Found key 5 with value: " << it2->second << endl; // Will return value if key is found
    } else {
        cout << "Key 5 not found" << endl;
    }

    // Note: unordered_map does not support lower_bound and upper_bound operations as it is not ordered
}

int main() {
    explainUnorderedMap();
    return 0;
}
