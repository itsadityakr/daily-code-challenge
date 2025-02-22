// https://leetcode.com/problems/find-a-peak-element-ii/

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int midCol = left + (right - left) / 2;

            int maxRow = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][midCol] > mat[maxRow][midCol]) {
                    maxRow = i;
                }
            }

            int leftValue = (midCol > 0) ? mat[maxRow][midCol - 1] : -1;
            int rightValue = (midCol < n - 1) ? mat[maxRow][midCol + 1] : -1;

            if (mat[maxRow][midCol] > leftValue && mat[maxRow][midCol] > rightValue) {
                return {maxRow, midCol};
            }

            if (mat[maxRow][midCol] < rightValue) {
                left = midCol + 1;
            } else {
                right = midCol - 1;
            }
        }
        
        return {-1, -1};
    }
};
