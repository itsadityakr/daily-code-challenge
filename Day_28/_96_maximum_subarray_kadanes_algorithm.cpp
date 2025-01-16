// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

// Kadane's Algorithm is a popular and efficient method used to solve the Maximum Subarray Problem, where the goal is to find the contiguous subarray with the largest sum in a given array of integers.

// The algorithm is based on the idea of dynamic programming.

// function kadane(nums):
//     maxSum = nums[0]
//     currentSum = nums[0]
//     for i from 1 to length(nums) - 1:
//         currentSum = max(nums[i], currentSum + nums[i])
//         maxSum = max(maxSum, currentSum)
//     return maxSum
// Why Kadane's Algorithm Works
// The algorithm efficiently computes the result in 

// Example Walkthrough
// Given the array nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]:

// Given the array `nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`:

// | Index | nums[i] | currentSum | maxSum |
// |-------|---------|------------|--------|
// |   0   |   -2    |    -2      |   -2   |
// |   1   |    1    |     1      |    1   |
// |   2   |   -3    |    -2      |    1   |
// |   3   |    4    |     4      |    4   |
// |   4   |   -1    |     3      |    4   |
// |   5   |    2    |     5      |    5   |
// |   6   |    1    |     6      |    6   |
// |   7   |   -5    |     1      |    6   |
// |   8   |    4    |     5      |    6   |

// Output: maxSum = 6, which corresponds to the subarray [4, -1, 2, 1].

// Time and Space Complexity
// Time Complexity: O(n), because the algorithm processes each element exactly once.
// Space Complexity: O(1), as it uses only a few variables.
// This makes Kadane's Algorithm one of the most efficient solutions for finding the maximum subarray sum.