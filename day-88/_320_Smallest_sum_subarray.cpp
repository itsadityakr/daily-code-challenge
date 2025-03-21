// _320_Smallest_sum_subarray.cpp

// https://www.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int smallestSumSubarray(vector<int> &nums)
    {
        int minSum = nums[0], curSum = 0;

        for (int num : nums)
        {
            if (curSum >= 0)
                curSum = num;
            else
                curSum += num;

            minSum = min(minSum, curSum);
        }
        return minSum;
    }
};

// Input: arr[] = {3,-4, 2,-3,-1, 7,-5}
// Output: -6
// Explanation: sub-array which has smallest sum among all the sub-array is {-4,2,-3,-1} = -6