// _331_Find_the_subset_with_a_given_sum.cpp

// Subset Sum Problem

// Given an array arr[] of non-negative integers and a value sum, the task is to check if there is a subset of the given array whose sum is equal to the given sum.

// Examples:

// Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9
// Output: [[4, 5]]
// Explanation: There is a subset (4, 5) with sum 9.

class Solution
{
public:
    vector<vector<int>> result;

    void backtrack(vector<int> &nums, int start, vector<int> &subset, int currentSum, int target)
    {
        if (currentSum == target)
        {
            result.push_back(subset);
        }
        if (currentSum > target || start == nums.size())
        {
            return;
        }

        for (int i = start; i < nums.size(); i++)
        {
            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset, currentSum + nums[i], target);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithSum(vector<int> &nums, int target)
    {
        result.clear();
        vector<int> subset;
        backtrack(nums, 0, subset, 0, target);
        return result;
    }
};