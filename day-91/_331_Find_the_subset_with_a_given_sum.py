# _331_Find_the_subset_with_a_given_sum.py

# Subset Sum Problem

# Given an array arr[] of non-negative integers and a value sum, the task is to check if there is a subset of the given array whose sum is equal to the given sum.

# Examples:

# Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9
# Output: [[4, 5]]
# Explanation: There is a subset (4, 5) with sum 9.

class Solution:
    def __init__(self):
        self.result = []

    def backtrack(self, nums, start, subset, currentSum, target):
        if currentSum == target:
            self.result.append(subset[:])
        if currentSum > target or start == len(nums):
            return

        for i in range(start, len(nums)):
            subset.append(nums[i])
            self.backtrack(nums, i + 1, subset, currentSum + nums[i], target)
            subset.pop()

    def subsetsWithSum(self, nums, target):
        self.result = []
        self.backtrack(nums, 0, [], 0, target)
        return self.result
