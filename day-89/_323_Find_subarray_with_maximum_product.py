# _323_Find_subarray_with_maximum_product.py

# https://leetcode.com/problems/maximum-product-subarray/description/

# 152. Maximum Product Subarray

# Given an integer array nums, find a subarray that has the largest product, and return the product.

# The test cases are generated so that the answer will fit in a 32-bit integer.

# Input: nums = [2,3,-2,4]
# Output: 6
# Explanation: [2,3] has the largest product 6.

# Input: nums = [-2,0,-1]
# Output: 0
# Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

class Solution:
    def maxProduct(self, nums):
        max_product = min_product = result = nums[0]

        for num in nums[1:]:
            if num < 0:
                max_product, min_product = min_product, max_product
            max_product = max(num, max_product * num)
            min_product = min(num, min_product * num)
            result = max(result, max_product)

        return result
