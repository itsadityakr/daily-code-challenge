// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Matrix/problem/spirally-traversing-a-matrix-1587115621

#include <vector>
using namespace std;

class Solution {
public: 
    vector<int> spirallyTraverse(vector<vector<int>>& matrix, int r, int c) {
        vector<int> result;

        if (r == 0 || c == 0)
            return result;

        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        vector<vector<bool>> seen(r, vector<bool>(c, false));

        int x = 0, y = 0, di = 0;

        // Iterate through the matrix in a spiral order
        for (int i = 0; i < r * c; i++) {
            result.push_back(matrix[x][y]);
            seen[x][y] = true;
            int newX = x + dr[di];
            int newY = y + dc[di];

            // Check if the new position is within bounds and not visited
            if (newX >= 0 && newX < r && newY >= 0 && newY < c && !seen[newX][newY]) {
                x = newX;
                y = newY;
            } else {
                // Change direction
                di = (di + 1) % 4;
                x += dr[di];
                y += dc[di];
            }
        }
        return result;
    }
};
