# _319_Maximum_sum_subarray.py

# https://leetcode.com/problems/maximum-subarray/description/

def maxSubArray(nums):
    max_sum = nums[0]
    cur_sum = 0
    for num in nums:
        cur_sum = max(num, cur_sum + num)
        max_sum = max(max_sum, cur_sum)
    return max_sum


# Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
# Output: 6
# Explanation: The subarray [4,-1,2,1] has the largest sum 6.