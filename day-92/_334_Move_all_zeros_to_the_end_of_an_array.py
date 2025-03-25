# _334_Move_all_zeros_to_the_end_of_an_array.py

# https://leetcode.com/problems/move-zeroes/description/

# 283. Move Zeroes

# Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

# Note that you must do this in-place without making a copy of the array.

# Example:

# Input: nums = [0,1,0,3,12]
# Output: [1,3,12,0,0]

# Input: nums = [0]
# Output: [0]

# Constraints:

# 1 <= nums.length <= 10^4
# -2^31 <= nums[i] <= 2^31 - 1

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        right = 0
        for left in range(len(nums)):
            if nums[left] != 0:
                nums[left], nums[right] = nums[right], nums[left]
                right += 1
