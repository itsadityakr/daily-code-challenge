// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = -1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[i - 1])
            {
                count = i;
                break;
            }
        }
        if (count != -1)
        {
            if (nums[0] < nums[n - 1])
            {
                return false;
            }
            for (int i = count + 1; i < n; i++)
            {
                if (nums[i] < nums[i - 1])
                {
                    return false;
                }
            }
        }

        return true;
    }
};