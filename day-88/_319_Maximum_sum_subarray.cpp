// _319_Maximum_sum_subarray.cpp

// https://leetcode.com/problems/maximum-subarray/description/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = nums[0], curSum = 0;
        for (int num : nums)
        {
            curSum = max(num, curSum + num);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.