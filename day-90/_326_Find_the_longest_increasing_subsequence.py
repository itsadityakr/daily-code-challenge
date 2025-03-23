# https://leetcode.com/problems/longest-increasing-subsequence/description/

# _326_Find_the_longest_increasing_subsequence.py

# 300. Longest Increasing Subsequence

# Given an integer array nums, return the length of the longest strictly increasing subsequence.

# Example:

# Input: nums = [10,9,2,5,3,7,101,18]
# Output: 4
# Explanation: The longest increasing subsequence is [2,3,7,18], therefore the length is 4.

# Input: nums = [0,1,0,3,2,3]
# Output: 4
# Example 3:

# Input: nums = [7,7,7,7,7,7,7]
# Output: 1

# Constraints:
# 1 <= nums.length <= 2500
# -10^4 <= nums[i] <= 10^4

# Follow up: Can you come up with an algorithm that runs in O(n log(n)) time complexity?

def binary_search(sub, num):
    left, right = 0, len(sub) - 1
    pos = len(sub)
    while left <= right:
        mid = left + (right - left) // 2
        if sub[mid] >= num:
            pos = mid
            right = mid - 1
        else:
            left = mid + 1
    return pos

def length_of_LIS(nums):
    sub = []
    for num in nums:
        pos = binary_search(sub, num)
        if pos == len(sub):
            sub.append(num)
        else:
            sub[pos] = num
    return len(sub)

nums = [10, 9, 2, 5, 3, 7, 101, 18]
print(length_of_LIS(nums))
