// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Matrix/problem/determinant-of-a-matrix-1587115620

#include <vector>
using namespace std;

class Solution {
public:
    // Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int>>& matrix, int n) {
        // Base case: if matrix is 1x1, return its single element
        if (n == 1)
            return matrix[0][0];
        
        int det = 0; // Initialize determinant value

        // Temporary matrix for storing the minor
        vector<vector<int>> tempMinor(n - 1, vector<int>(n - 1, 0));

        // Sign multiplier for each term in the expansion
        int sign = 1;

        // Iterate over the first row to expand the determinant
        for (int j = 0; j < n; j++) {
            // Calculate the minor for element (0, j)
            getMinor(matrix, tempMinor, 0, j, n);

            // Recursive call to calculate the determinant of the minor
            int minorDet = determinantOfMatrix(tempMinor, n - 1);

            // Add the current term to the determinant
            det += sign * matrix[0][j] * minorDet;

            // Flip the sign for the next term
            sign = -sign;
        }

        return det;
    }

private:
    // Function to compute the minor of element at row, col
    void getMinor(vector<vector<int>>& matrix, vector<vector<int>>& tempMinor, int row, int col, int n) {
        int minorRow = 0, minorCol = 0;

        // Iterate over the matrix to exclude row and col
        for (int i = 0; i < n; i++) {
            if (i != row) {
                minorCol = 0;
                for (int j = 0; j < n; j++) {
                    if (j != col) {
                        tempMinor[minorRow][minorCol] = matrix[i][j];
                        minorCol++;
                    }
                }
                minorRow++;
            }
        }
    }
};