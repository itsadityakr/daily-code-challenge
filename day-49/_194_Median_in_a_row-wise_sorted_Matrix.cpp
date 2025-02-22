// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=median-in-a-row-wise-sorted-matrix

class Solution {
public:
    int countSmallerEqual(vector<int>& row, int x) {
        return upper_bound(row.begin(), row.end(), x) - row.begin();
    }

    int median(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int minVal = mat[0][0], maxVal = mat[0][n-1];

        for (int i = 0; i < m; i++) {
            minVal = min(minVal, mat[i][0]);
            maxVal = max(maxVal, mat[i][n-1]);
        }

        int medianPos = (m * n) / 2 + 1;

        while (minVal < maxVal) {
            int mid = minVal + (maxVal - minVal) / 2;
            int count = 0;

            for (int i = 0; i < m; i++) {
                count += countSmallerEqual(mat[i], mid);
            }

            if (count < medianPos) {
                minVal = mid + 1;
            } else {
                maxVal = mid;
            }
        }

        return minVal;
    }
};
