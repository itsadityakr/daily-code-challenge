# 78. Subsets

# https://leetcode.com/problems/subsets/description/

# _330_Print_all_subsets_of_an_array.py

# Given an integer array nums of unique elements, return all possible subsets (the power set).

# The solution set must not contain duplicate subsets. Return the solution in any order.

# Example:

# Input: nums = [1,2,3]
# Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

# Input: nums = [0]
# Output: [[],[0]]

# Constraints:

# 1 <= nums.length <= 10
# -10 <= nums[i] <= 10
# All the numbers of nums are unique.

class Solution:
    def backtrack(self, nums, start, subset, result):
        result.append(subset[:])
        for i in range(start, len(nums)):
            subset.append(nums[i])
            self.backtrack(nums, i + 1, subset, result)
            subset.pop()

    def subsets(self, nums):
        result = []
        self.backtrack(nums, 0, [], result)
        return result
