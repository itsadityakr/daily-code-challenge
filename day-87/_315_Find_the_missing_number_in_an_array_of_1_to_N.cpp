// _315_Find_the_missing_number_in_an_array_of_1_to_N.cpp

// https://leetcode.com/problems/missing-number/description/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }
};

// Input: nums = [3,0,1]
// Output: 2