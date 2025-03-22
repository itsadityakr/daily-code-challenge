# _321_Longest_subarray_with_sum_K.py

# https://leetcode.com/problems/subarray-sum-equals-k/description/

# 560. Subarray Sum Equals K

# Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

# A subarray is a contiguous non-empty sequence of elements within an array.

# Input: nums = [1,1,1], k = 2
# Output: 2

# Input: nums = [1,2,3], k = 3
# Output: 2

class Solution(object):
    def subarraySum(self, nums, k):
        prefix_sum_count = {0: 1}
        prefix_sum = 0
        count = 0

        for num in nums:
            prefix_sum += num
            if (prefix_sum - k) in prefix_sum_count:
                count += prefix_sum_count[prefix_sum - k]
            prefix_sum_count[prefix_sum] = prefix_sum_count.get(prefix_sum, 0) + 1

        return count
