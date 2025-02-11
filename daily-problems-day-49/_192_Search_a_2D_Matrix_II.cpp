// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

class Solution {
    bool search(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            if (search(matrix[i], target)) {
                return true;
            }
        }
        return false;
    }
};