### Unordered Map in C++

An **unordered map** is a type of associative container in the Standard Template Library (STL) that stores key-value pairs with unique keys. Unlike `map`, which maintains its elements in a sorted order, `unordered_map` uses a hash table to manage the elements, so it does not maintain any particular order.

#### Characteristics of Unordered Map
- **Key-Value Pairs**: Stores pairs of keys and values. Each key must be unique, but values can be duplicated.
- **Unordered Storage**: Elements are not stored in any specific order; they are organized based on hash values.
- **Hash Table**: Internally implemented as a hash table, which provides average-case constant time complexity for insertion, deletion, and access operations.
- **No Ordering**: Unlike `map`, `unordered_map` does not maintain any ordering of keys.

#### Syntax
```cpp
#include <unordered_map>
using namespace std;

void explainUnorderedMap() {
    unordered_map<key_dataType, value_dataType> variableName;
}
```

#### Basic Operations

1. **Insertion**:
   - `operator[]`: Inserts a key-value pair or updates the value associated with an existing key. If the key does not exist, it is created with a default value for the value type.
   - `insert(pair)`: Inserts a key-value pair into the unordered_map. If the key already exists, the insertion is ignored.
   - `emplace(key, value)`: Constructs and inserts a key-value pair.

2. **Accessing Elements**:
   - `find(key)`: Returns an iterator to the element with the specified key. If the key is not found, it returns `end()`.
   - `at(key)`: Accesses the value associated with the key, throws `out_of_range` exception if the key is not found.
   - `operator[]`: Provides access to the value associated with the key. Creates the key with a default value if it does not exist.

3. **Removing Elements**:
   - `erase(key)`: Removes all elements with the specified key.
   - `erase(iterator)`: Removes the element at the specified iterator position.
   - `erase(range)`: Removes elements in the range specified by two iterators.

4. **Size and Capacity**:
   - `size()`: Returns the number of elements in the unordered_map.
   - `empty()`: Returns `true` if the unordered_map is empty, `false` otherwise.
   - `clear()`: Removes all elements from the unordered_map.

5. **Iterating**:
   - Use iterators to traverse through the elements of the unordered_map.

6. **Hash Functions**:
   - The default hash function is used for built-in types. Custom hash functions can be provided for user-defined types by specializing the `std::hash` template.

#### Example
```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

void explainUnorderedMap() {
    unordered_map<int, int> ump;

    ump[1] = 12;
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
        cout << "Found key 3 with value: " << it1->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    auto it2 = ump.find(5); // Since key 5 does not exist it will point to end
    if (it2 != ump.end()) {
        cout << "Found key 5 with value: " << it2->second << endl;
    } else {
        cout << "Key 5 not found" << endl;
    }

    // Note: unordered_map does not support lower_bound and upper_bound operations as it is not ordered
}

int main() {
    explainUnorderedMap();
    return 0;
}
```

#### Key Points
- **Performance**: `unordered_map` offers average-case constant time complexity for insertion, deletion, and access operations due to its hash table implementation.
- **Hash Function**: By default, it uses `std::hash` for hashing keys, but custom hash functions can be used by providing a hash function object.
- **Ordering**: Elements are not ordered, so operations like `lower_bound` and `upper_bound` are not available.

This summary covers the essential aspects of using and understanding `unordered_map` in C++.

-by Aditya Kumar