// https://leetcode.com/problems/contiguous-array/

class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        unordered_map<int, int> prefixSumIndex;
        prefixSumIndex[0] = -1;

        int maxLength = 0;
        int prefixSum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            prefixSum += (nums[i] == 1) ? 1 : -1;

            if (prefixSumIndex.find(prefixSum) != prefixSumIndex.end())
            {
                maxLength = max(maxLength, i - prefixSumIndex[prefixSum]);
            }
            else
            {
                prefixSumIndex[prefixSum] = i;
            }
        }

        return maxLength;
    }
};
