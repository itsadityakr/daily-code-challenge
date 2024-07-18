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
    // Initializing an empty vector of integers
    vector<int> intVec;

    // Adding an element to the end of the vector
    intVec.push_back(1);
    // cout << intVec[0] << endl; // output -> 1
    // cout << intVec[1] << endl; // output -> garbage value or random value

    // Using emplace_back (more efficient than push_back)
    intVec.emplace_back(2);

    // Initializing a vector of pairs
    vector<pair<int, int>> pairVec;
    pairVec.push_back({1, 2});
    pairVec.emplace_back(3, 8);
    // cout << pairVec[0].first << endl;  // output -> 1
    // cout << pairVec[1].second << endl; // output -> 8

    // Initializing a vector with 5 elements, all set to 100
    vector<int> vec1(5, 100); // {100, 100, 100, 100, 100}

    // Copying vec1 into vec2
    vector<int> vec2(vec1); // {100, 100, 100, 100, 100}

    // Initializing a vector of size 5 (default values are 0)
    vector<int> vec3(5); // {0, 0, 0, 0, 0}

    // Initializing a vector with given values
    vector<int> sampleVec = {3, 5, 7, 9, 1};

    // Using an iterator to access elements
    vector<int>::iterator it = sampleVec.begin(); // points to 3
    // cout << *(it) << endl; // output -> 3

    it++;
    // cout << *(it) << endl; // output -> 5

    it += 2;
    // cout << *(it) << endl; // output -> 9

    // Iterator to the end of the vector
    vector<int>::iterator endIt = sampleVec.end(); // points to a position after the last element

    // Accessing the last element
    int lastElem = sampleVec.back(); // output -> 1

    // Printing vector elements using different methods

    // Using iterator
    for (vector<int>::iterator it = sampleVec.begin(); it != sampleVec.end(); ++it) {
        cout << *(it) << " "; // output -> 3 5 7 9 1
    }
    cout << endl;

    // Using auto keyword with iterator
    for (auto it = sampleVec.begin(); it != sampleVec.end(); ++it) {
        cout << *(it) << " "; // output -> 3 5 7 9 1
    }
    cout << endl;

    // Using range-based for loop
    for (auto elem : sampleVec) {
        cout << elem << " "; // output -> 3 5 7 9 1
    }
    cout << endl;

    // Erasing elements
    sampleVec.erase(sampleVec.begin()); // {5, 7, 9, 1}

    sampleVec.erase(sampleVec.begin(), sampleVec.begin() + 2); // {9, 1}

    // Inserting elements
    vector<int> insertVec(2, 100); // {100, 100}
    insertVec.insert(insertVec.begin(), 300); // {300, 100, 100}
    insertVec.insert(insertVec.begin() + 1, 2, 250); // {300, 250, 250, 100, 100}

    // Inserting elements from another vector
    vector<int> copyVec = {1, 2, 3};
    insertVec.insert(insertVec.begin(), copyVec.begin(), copyVec.begin() + 2); // {1, 2, 300, 250, 250, 100, 100}

    // cout << insertVec.size(); // output -> 7

    // Removing the last element
    insertVec.pop_back(); // {1, 2, 300, 250, 250, 100}

    // Swapping two vectors
    vector<int> vecA = {1, 2, 3};
    vector<int> vecB = {6, 7, 8};
    vecA.swap(vecB); // vecA = {6, 7, 8}, vecB = {1, 2, 3}

    // Clearing all elements from the vector
    vecA.clear();

    // Checking if a vector is empty
    cout << vecA.empty(); // output -> 1 (true)
}

int main() {
    explainVectors();
    return 0;
}

