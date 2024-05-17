// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-array-string-pointer-reference/problem/find-distinct-elements2054

#include <vector>
#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>

class Solution {
public:
    int distinct(std::vector<std::vector<int>> M, int N) {
        // Create a set to store distinct elements
        std::unordered_set<int> commonElements(M[0].begin(), M[0].end());

        // Iterate through each row of the matrix
        for (int i = 1; i < N; ++i) {
            std::unordered_set<int> currentRow(M[i].begin(), M[i].end());
            // Create a temporary set to store common elements of current row and previous common elements
            std::unordered_set<int> temp;
            // Iterate through elements of current row
            for (int elem : currentRow) {
                // If the element is present in previous common elements, add it to temporary set
                if (commonElements.count(elem)) {
                    temp.insert(elem);
                }
            }
            // Update commonElements set with temporary set
            commonElements = temp;
        }

        // Return the size of commonElements set, which represents the count of distinct common elements
        return commonElements.size();
    }
};