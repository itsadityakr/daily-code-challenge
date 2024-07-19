### Multimap in C++

A **multimap** is a type of associative container in the Standard Template Library (STL) that allows multiple values to be associated with the same key. This is in contrast to a standard `map` which allows only unique keys. Here are the key points and operations related to `multimap`:

#### Characteristics of Multimap
- **Key-Value Pairs**: Each element is a key-value pair, where the key can have multiple associated values.
- **Sorted Order**: The elements are stored in a sorted order based on the key.
- **Duplicates Allowed**: Unlike `map`, a `multimap` allows duplicate keys.
- **Balanced Binary Tree**: Internally implemented as a balanced binary tree.

#### Syntax
```cpp
multimap<key_dataType, value_dataType> variableName;
```

#### Key Features
1. **Duplicate Keys**: Unlike `map`, `multimap` allows multiple elements with the same key.
2. **Ordered**: Elements are stored in a sorted order based on the keys.
3. **Key-Value Pairs**: Each element is a combination of a key and a value.


#### Key Operations

1. **Insertion**:
   - `mp.insert({key, value});` - Inserts a key-value pair.
   - Multiple values can be inserted for the same key.

2. **Counting Occurrences**:
   - `mp.count(key);` - Returns the number of elements with the specified key.

3. **Finding Elements**:
   - `mp.find(key);` - Returns an iterator to the first element with the specified key.
   - If the key is not found, it returns `mp.end()`.

4. **Range Queries**:
   - `mp.equal_range(key);` - Returns a range of elements with the specified key.
   - `mp.lower_bound(key);` - Returns an iterator to the first element that is not less than the specified key.
   - `mp.upper_bound(key);` - Returns an iterator to the first element that is greater than the specified key.

5. **Iterating Through Elements**:
   - Use a loop to iterate through the elements of the multimap:
     ```cpp
     for (auto item : mp) {
         cout << "Key: " << item.first << ", Value: " << item.second << endl;
     }
     ```

#### Example Output
```
Elements in mp:
Key: 1, Value: 12
Key: 2, Value: 72
Key: 3, Value: 23
Key: 3, Value: 1
Key: 4, Value: 10
Key: 6, Value: 67
Key: 7, Value: 15
Key: 9, Value: 21
Occurrences of key 3: 2
Elements with key 3:
Key: 3, Value: 23
Key: 3, Value: 1
Found key 3 with value: 23
Key 5 not found
Lower bound of 4: Key: 4, Value: 10
Upper bound of 6: Key: 7, Value: 15
```

#### Summary
- A `multimap` is useful when you need to store multiple values for the same key while maintaining order.
- It supports various operations to insert, find, and query elements.
- It is an efficient way to handle key-value pairs with duplicate keys while ensuring sorted order.

These notes cover the essential concepts and usage of `multimap` in C++.

-by Aditya Kumar