// 78. Subsets

// https://leetcode.com/problems/subsets/description/

// _330_Print_all_subsets_of_an_array.cpp

// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

// Input: nums = [0]
// Output: [[],[0]]

// Constraints:

// 1 <= nums.length <= 10
// -10 <= nums[i] <= 10
// All the numbers of nums are unique.

class Solution
{
public:
    void backtrack(vector<int> &nums, int start, vector<int> &subset, vector<vector<int>> &result)
    {
        result.push_back(subset);
        for (int i = start; i < nums.size(); i++)
        {
            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset, result);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(nums, 0, subset, result);
        return result;
    }
};