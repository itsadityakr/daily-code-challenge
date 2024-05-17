// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Matrix/problem/boolean-matrix-problem-1587115620

#include <vector>
using namespace std;

class Solution {
public:
    // Function to modify the matrix such that if a matrix cell matrix[i][j]
    // is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Arrays to store flags for rows and columns to be modified
        vector<bool> rowFlag(rows, false);
        vector<bool> colFlag(cols, false);

        // Step 1: Mark rows and columns that need to be modified
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 1) {
                    rowFlag[i] = true;
                    colFlag[j] = true;
                }
            }
        }

        // Step 2: Update matrix based on flags
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowFlag[i] || colFlag[j]) {
                    matrix[i][j] = 1;
                }
            }
        }
    }
};
