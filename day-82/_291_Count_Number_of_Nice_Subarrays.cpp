// _291_Count_Number_of_Nice_Subarrays.cpp
// https://leetcode.com/problems/count-number-of-nice-subarrays/description/

class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

private:
    int atMost(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;
        int left = 0, count = 0, oddCount = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            oddCount += nums[right] % 2;
            while (oddCount > k)
                oddCount -= nums[left++] % 2;
            count += (right - left + 1);
        }
        return count;
    }
};
