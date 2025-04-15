'''
_349_LC_238_Product_of_Array_Except_Self.py

https://leetcode.com/problems/product-of-array-except-self/description/

238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

'''

class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        count_zero = nums.count(0)
        if count_zero > 1:
            return [0] * len(nums)
        
        product = 1
        for num in nums:
            if num != 0:
                product *= num

        result = []
        for num in nums:
            if count_zero == 0:
                result.append(product // num)
            elif num == 0:
                result.append(product)
            else:
                result.append(0)

        return result