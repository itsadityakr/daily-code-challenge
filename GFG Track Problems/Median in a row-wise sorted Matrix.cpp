// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-non-mutating-stl-algorithms/problem/median-in-a-row-wise-sorted-matrix1527

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countLessEqual(vector<vector<int>>& matrix, int target) {
        int count = 0;
        for (const auto& row : matrix) {
            count += upper_bound(row.begin(), row.end(), target) - row.begin();
        }
        return count;
    }
    
    int median(vector<vector<int>>& matrix, int R, int C){
        int minVal = INT_MAX, maxVal = INT_MIN;
        
        // Finding the minimum and maximum elements in the matrix
        for (int i = 0; i < R; ++i) {
            minVal = min(minVal, matrix[i][0]);
            maxVal = max(maxVal, matrix[i][C - 1]);
        }
        
        int desired = (R * C + 1) / 2;
        while (minVal < maxVal) {
            int mid = minVal + (maxVal - minVal) / 2;
            int count = countLessEqual(matrix, mid);
            if (count < desired)
                minVal = mid + 1;
            else
                maxVal = mid;
        }
        
        return minVal;
    }
};