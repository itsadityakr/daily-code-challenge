### Notes on `map` in C++

#### Overview
- **Definition**: `map` is an associative container that stores elements in key-value pairs.
- **Unique Keys**: Keys are unique, meaning each key can appear only once in the map.
- **Sorted Order**: Elements are stored in a sorted order based on the keys.
- **Underlying Data Structure**: Typically implemented as a balanced binary search tree, often a Red-Black Tree.

#### Syntax
```cpp
map<key_dataType, value_dataType> map_name;
```
- `key_dataType`: Data type of the key.
- `value_dataType`: Data type of the value.
- `map_name`: Name of the map.

#### Declaration Examples
```cpp
map<int, int> mp; // Map with int keys and int values
map<pair<int, int>, int> mp_kp; // Map with pair<int, int> keys and int values
map<int, pair<int, int>> mp_vp; // Map with int keys and pair<int, int> values
```

#### Insertion
- Using `operator[]`
  ```cpp
  mp[1] = 12; // Inserts {1, 12}
  ```
- Using `emplace`
  ```cpp
  mp.emplace(3, 1); // Inserts {3, 1}
  ```
- Using `insert`
  ```cpp
  mp.insert({3, 1}); // Inserts {3, 1}, if key 3 does not already exist
  ```

#### Accessing Elements
- Accessing value by key
  ```cpp
  int value = mp[1]; // Returns value associated with key 1
  ```
- If the key does not exist, `operator[]` inserts the key with a default value of 0.

#### Finding Elements
- Using `find`
  ```cpp
  auto it = mp.find(3); // Returns an iterator to the element with key 3, or mp.end() if not found
  if (it != mp.end()) {
      cout << it->second; // Access value through the iterator
  }
  ```

#### Lower Bound and Upper Bound
- `lower_bound`
  - Finds the first element that is not less than the given key.
  ```cpp
  auto it = mp.lower_bound(4); // Returns an iterator to the first element >= 4
  if (it != mp.end()) {
      cout << "Lower bound of 4: Key: " << it->first << ", Value: " << it->second << endl;
  } else {
      cout << "Lower bound of 4 not found" << endl;
  }
  ```
- `upper_bound`
  - Finds the first element that is greater than the given key.
  ```cpp
  auto it = mp.upper_bound(6); // Returns an iterator to the first element > 6
  if (it != mp.end()) {
      cout << "Upper bound of 6: Key: " << it->first << ", Value: " << it->second << endl;
  } else {
      cout << "Upper bound of 6 not found" << endl;
  }
  ```

#### Iterating Over Elements
- Iterating through all elements in the map
  ```cpp
  for (auto item : mp) {
      cout << "Key: " << item.first << ", Value: " << item.second << endl;
  }
  ```

#### Example Code
```cpp
#include <iostream>
#include <map>
using namespace std;

void explainMap() {
    map<int, int> mp;
    mp[1] = 12;
    mp[2] = 72;
    mp[3] = 23;
    mp[7] = 15;
    mp[6] = 67;
    mp[9] = 21;
    mp[4] = 10;
    mp.emplace(3, 1);

    cout << "Elements in mp:" << endl;
    for (auto item : mp) {
        cout << "Key: " << item.first << ", Value: " << item.second << endl;
    }

    cout << "Value for key 1: " << mp[1] << endl;
    cout << "Value for key 5: " << mp[5] << endl; // Default value 0 for non-existent key

    auto it1 = mp.find(3);
    if (it1 != mp.end()) {
        cout << "Found key 3 with value: " << it1->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    auto it2 = mp.find(5);
    if (it2 != mp.end()) {
        cout << "Found key 5 with value: " << it2->second << endl;
    } else {
        cout << "Key 5 not found" << endl;
    }

    auto it3 = mp.lower_bound(4);
    if (it3 != mp.end()) {
        cout << "Lower bound of 4: Key: " << it3->first << ", Value: " << it3->second << endl;
    } else {
        cout << "Lower bound of 4 not found" << endl;
    }

    auto it4 = mp.upper_bound(6);
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
```

### Key Points
- `map` is useful when you need to associate unique keys with values.
- It maintains order based on the keys.
- Provides efficient lookup, insertion, and deletion operations with logarithmic time complexity.
- Supports operations like `find`, `lower_bound`, and `upper_bound` for efficient element access and manipulation.

-by Aditya Kumar