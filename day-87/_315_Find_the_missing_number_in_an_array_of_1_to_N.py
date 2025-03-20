# _315_Find_the_missing_number_in_an_array_of_1_to_N.py

# https://leetcode.com/problems/missing-number/description/

class Solution:
    def missingNumber(self, nums):
        res = len(nums)
        for i in range(len(nums)):
            res ^= i
            res ^= nums[i]
        return res

# Input: nums = [3,0,1]
# Output: 2
