// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Matrix/problem/search-in-a-matrix-1587115621

#include <vector>
using namespace std;

class Solution {
public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>>& matrix, int n, int m, int x) {
        if (n == 0 || m == 0)
            return false;

        int row = 0;
        int col = m - 1; // Start from the top-right corner

        while (row < n && col >= 0) {
            if (matrix[row][col] == x)
                return true;
            else if (matrix[row][col] < x)
                row++; // Move down as the current element is smaller than x
            else
                col--; // Move left as the current element is greater than x
        }
        
        return false; // Element not found
    }
};