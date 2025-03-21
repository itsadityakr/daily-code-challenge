# _320_Smallest_sum_subarray.py

# https://www.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution:
    def smallestSumSubarray(self, nums):
        min_sum = nums[0]
        cur_sum = 0

        for num in nums:
            cur_sum = num if cur_sum >= 0 else cur_sum + num
            min_sum = min(min_sum, cur_sum)

        return min_sum

# Input: arr[] = {3,-4, 2,-3,-1, 7,-5}
# Output: -6
# Explanation: sub-array which has smallest sum among all the sub-array is {-4,2,-3,-1} = -6
