#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

// Function to demonstrate various pair operations
void explainPairs() {
    // Initializing a simple pair
    pair<int, int> simplePair = {1, 3};

    // Accessing elements of the pair
    cout << "First element: " << simplePair.first << ", Second element: " << simplePair.second << endl;

    // Initializing a nested pair
    pair<int, pair<int, int>> nestedPair = {1, {2, 3}};

    // Accessing elements of the nested pair
    cout << "First element: " << nestedPair.first << ", Nested pair first element: " << nestedPair.second.first << endl;
    // cout << nestedPair.second; // Can't directly access pairs, would need to access individual elements

    // Initializing an array of pairs
    pair<int, int> pairArray[] = {{1, 2}, {4, 5}, {7, 9}};

    // Accessing elements of the array of pairs
    cout << "Second element of the second pair: " << pairArray[1].second << endl;
}

int main() {
    explainPairs();
    return 0;
}
