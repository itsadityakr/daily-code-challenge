// _290_Binary_Subarray_with_Sum.cpp

// https://leetcode.com/problems/binary-subarrays-with-sum/description/

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

private:
    int atMost(vector<int> &nums, int goal)
    {
        if (goal < 0)
            return 0;
        int left = 0, sum = 0, count = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];
            while (sum > goal)
                sum -= nums[left++];
            count += (right - left + 1);
        }
        return count;
    }
};
