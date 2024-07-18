
### Vectors in C++

#### Introduction

-   **Vectors** are part of the C++ Standard Template Library (STL).
-   They are dynamic arrays that can change size automatically when elements are added or removed.
-   They provide random access to elements, similar to arrays, but with additional functionalities.

#### Basic Operations

1.  **Initialization**
    
    `vector<int> v; // Creates an empty vector of integers` 
    
2.  **Adding Elements**
    
    `v.push_back(1);       // Adds 1 to the end of the vector
    v.emplace_back(2);    // Adds 2 to the end of the vector (more efficient than push_back)` 
    
3.  **Accessing Elements**
    
    `cout << v[0] << endl; // Accesses the first element (indexing starts from 0)
    cout << v.at(0) << endl; // Safer way to access elements with bounds checking` 
    
4.  **Copying Vectors**
    
    `vector<int> v1(5, 100); // Creates a vector of size 5, all elements initialized to 100
    vector<int> v2(v1);     // Copies all elements from v1 to v2` 
    
5.  **Resizing**
    
    `vector<int> v3(5); // Creates a vector of size 5 with default-initialized elements (usually 0 for int)` 
    
6.  **Iterators**
    
    `vector<int>::iterator it = v.begin(); // Points to the first element of the vector
    it++; // Moves the iterator to the next element
    it += 2; // Moves the iterator two steps forward` 
    

#### Advanced Operations

1.  **Using Nested Vectors and Pairs**
    
    `vector<pair<int, int>> vp; // Vector of pairs
    vp.push_back({1, 2});
    vp.emplace_back(3, 8);` 
    
2.  **Iterating Through Vectors**
    
    `// Using iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    
    // Using auto keyword
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    
    // Using range-based for loop
    for (auto elem : v) {
        cout << elem << " ";
    }` 
    
3.  **Modifying Elements**
    
    `v.erase(v.begin()); // Removes the first element
    v.erase(v.begin(), v.begin() + 2); // Removes the first two elements
    v.insert(v.begin(), 300); // Inserts 300 at the beginning
    v.insert(v.begin() + 1, 2, 250); // Inserts 250 twice starting from the second position` 
    
4.  **Inserting Elements from Another Vector**
    
    `vector<int> copy = {1, 2, 3};
    v.insert(v.begin(), copy.begin(), copy.begin() + 2); // Inserts first two elements of 'copy' at the beginning of 'v'` 
    
5.  **Removing Elements**
    
    `v.pop_back(); // Removes the last element` 
    
6.  **Swapping Vectors**
    
    `vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {6, 7, 8};
    v1.swap(v2); // Swaps the contents of v1 and v2` 
    
7.  **Clearing and Checking Size**
    
    `v1.clear(); // Removes all elements from the vector
    cout << v1.empty(); // Checks if the vector is empty, returns 1 (true) if empty, 0 (false) otherwise` 
    

#### Example Code

Here is a complete example demonstrating various vector operations:

    #include <bits/stdc++.h>
    using namespace std;

    #define endl "\n"

    // Function to print elements of a vector
    void printVector(const vector<int>& vec) {
        for (const auto& elem : vec) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Function to demonstrate various vector operations
    void explainVectors() {
    vector<int> intVec;

    // Adding elements
    intVec.push_back(1);
    intVec.emplace_back(2);

    // Working with pairs
    vector<pair<int, int>> pairVec;
    pairVec.push_back({1, 2});
    pairVec.emplace_back(3, 8);

    // Creating and copying vectors
    vector<int> vec1(5, 100);
    vector<int> vec2(vec1);

    // Initializing a vector of given size
    vector<int> vec3(5);

    // Initializing a vector with given values
    vector<int> sampleVec = {3, 5, 7, 9, 1};

    // Using an iterator
    vector<int>::iterator it = sampleVec.begin();
    it++;
    it += 2;

    // Accessing the last element
    int lastElem = sampleVec.back();

    // Printing vectors using different methods
    for (vector<int>::iterator it = sampleVec.begin(); it != sampleVec.end(); ++it) {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = sampleVec.begin(); it != sampleVec.end(); ++it) {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto elem : sampleVec) {
        cout << elem << " ";
    }
    cout << endl;

    // Modifying vectors
    sampleVec.erase(sampleVec.begin());
    sampleVec.erase(sampleVec.begin(), sampleVec.begin() + 2);

    // Inserting elements
    vector<int> insertVec(2, 100);
    insertVec.insert(insertVec.begin(), 300);
    insertVec.insert(insertVec.begin() + 1, 2, 250);

    // Inserting from another vector
    vector<int> copyVec = {1, 2, 3};
    insertVec.insert(insertVec.begin(), copyVec.begin(), copyVec.begin() + 2);

    // Removing elements
    insertVec.pop_back();

    // Swapping vectors
    vector<int> vecA = {1, 2, 3};
    vector<int> vecB = {6, 7, 8};
    vecA.swap(vecB);

    // Clearing and checking size
    vecA.clear();
    cout << vecA.empty();
}

int main() {
    explainVectors();
    return 0;
}`