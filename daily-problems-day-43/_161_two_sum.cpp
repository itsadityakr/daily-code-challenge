// https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_cardk

class Solution
{
public:
    bool twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int num : nums)
        {
            int complement = target - num;
            if (map.find(complement) != map.end())
            {
                return true;
            }
            map[num]++;
        }
        return false;
    }
};