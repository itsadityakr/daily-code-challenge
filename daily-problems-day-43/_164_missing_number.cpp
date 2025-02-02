// https://leetcode.com/problems/missing-number/description/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        vector<int> series;
        for (int i = 0; i <= nums.size(); i++)
        {
            series.push_back(i);
        }
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (int num : series)
        {
            freq[num]++;
        }
        for (auto &[num, count] : freq)
        {
            if (count == 1)
            {
                return num;
            }
        }
        return 0;
    }
};