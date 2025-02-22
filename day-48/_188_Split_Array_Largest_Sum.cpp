// https://leetcode.com/problems/split-array-largest-sum/description/

class Solution
{
public:
    bool isValid(vector<int> &nums, int k, int maxSum)
    {
        int count = 1, currSum = 0;
        for (int num : nums)
        {
            if (currSum + num > maxSum)
            {
                count++;
                currSum = 0;
            }
            currSum += num;
        }
        return count <= k;
    }

    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (isValid(nums, k, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
