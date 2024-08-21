#include <iostream>
#include <map>  // Include for map
using namespace std;

void explainMap() {
    // map stores unique keys in sorted order
    // map includes key, value pairs where the key should be unique, values can be duplicated.
    // Example: a class of students with the same name (value) but different roll numbers (key).

    // Syntax: map<key_dataType, value_dataType> variableName;
    map<int, int> mp; // Declare a map with int keys and int values

    // Example of a map with a pair as key and int as value
    map<pair<int, int>, int> mp_kp; // Declare a map with pair<int, int> keys and int values

    // Example of a map with int as key and a pair as value
    map<int, pair<int, int>> mp_vp; // Declare a map with int keys and pair<int, int> values

    // Insert elements into the map
    mp[1] = 12; // Key: 1, Value: 12
    mp[2] = 72;
    mp[3] = 23;
    mp[7] = 15;
    mp[6] = 67;
    mp[9] = 21;
    mp[4] = 10;
    mp.emplace(3, 1); // Key: 3, Value: 1

    // Insert using insert function
    mp.insert({3, 1}); // Key: 3, Value: 1 (note that key 3 already exists, so the value won't be inserted again)

    // Insert into the map with pair as key
    mp_kp[{2, 3}] = 10; // Key: {2, 3}, Value: 10

    // Display the elements of the map
    cout << "Elements in mp:" << endl;
    for (auto item : mp) {
        cout << "Key: " << item.first << ", Value: " << item.second << endl;
    }

    cout << "Value for key 1: " << mp[1] << endl; // Display value if key is found
    cout << "Value for key 5: " << mp[5] << endl; // Will insert key 5 with default value 0

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
    explainMap();
    return 0;
}
