// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        int countPair = 0;
        for (auto &[num, count] : freq)
        {
            if (k == 0 && count > 1)
                countPair++;
            else if (k > 0 && freq.count(num + k))
                countPair++;
        }
        return countPair;
    }
};