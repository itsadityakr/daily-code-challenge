// _294_Subarray_with_K_Different_Integers.cpp

// https://leetcode.com/problems/subarrays-with-k-different-integers/description/

class Solution
{
public:
    int atMostK(vector<int> &nums, int k)
    {
        if (k == 0)
            return 0;

        unordered_map<int, int> count;
        int left = 0, result = 0, distinct = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (count[nums[right]] == 0)
                distinct++;
            count[nums[right]]++;

            while (distinct > k)
            {
                count[nums[left]]--;
                if (count[nums[left]] == 0)
                    distinct--;
                left++;
            }

            result += (right - left + 1);
        }

        return result;
    }

    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};