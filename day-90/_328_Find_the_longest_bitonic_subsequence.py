# _328_Find_the_longest_bitonic_subsequence.py

# https://www.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1

# Longest Bitonic subsequence

# Given an array of positive integers. Find the maximum length of Bitonic subsequence. 
# A subsequence of array is called Bitonic if it is first strictly increasing, then strictly decreasing. Return the maximum length of bitonic subsequence.
 
# Note : A strictly increasing or a strictly decreasing sequence should not be considered as a bitonic sequence

# Examples :

# Input: n = 5, nums[] = [1, 2, 5, 3, 2]
# Output: 5
# Explanation: The sequence {1, 2, 5} is increasing and the sequence {3, 2} is decreasing so merging both we will get length 5.

# Input: n = 8, nums[] = [1, 11, 2, 10, 4, 5, 2, 1]
# Output: 6
# Explanation: The bitonic sequence {1, 2, 10, 4, 2, 1} has length 6.

# Input: n = 5, nums[] = [10, 20, 30]
# Output: 0
# Explanation: The decreasing or increasing part cannot be empty

# Input: n = 3, nums[] = [10, 10, 10]
# Output: 0
# Explanation: The subsequences must be strictly increasing or decreasing

# Constraints:
# 1 ≤ length of array ≤ 10^3
# 1 ≤ arr[i] ≤ 10^4

class Solution:
    def binary_search(self, sub, num):
        left, right, pos = 0, len(sub) - 1, len(sub)
        while left <= right:
            mid = left + (right - left) // 2
            if sub[mid] >= num:
                pos = mid
                right = mid - 1
            else:
                left = mid + 1
        return pos

    def compute_LIS(self, nums):
        n = len(nums)
        LIS = [1] * n
        sub = []
        for i in range(n):
            pos = self.binary_search(sub, nums[i])
            if pos == len(sub):
                sub.append(nums[i])
            else:
                sub[pos] = nums[i]
            LIS[i] = pos + 1
        return LIS

    def compute_LDS(self, nums):
        n = len(nums)
        LDS = [1] * n
        sub = []
        for i in range(n - 1, -1, -1):
            pos = self.binary_search(sub, nums[i])
            if pos == len(sub):
                sub.append(nums[i])
            else:
                sub[pos] = nums[i]
            LDS[i] = pos + 1
        return LDS

    def longestBitonicSequence(self, n, nums):
        if n < 3:
            return 0

        LIS = self.compute_LIS(nums)
        LDS = self.compute_LDS(nums)

        max_bitonic = 0
        for i in range(n):
            if LIS[i] > 1 and LDS[i] > 1:
                max_bitonic = max(max_bitonic, LIS[i] + LDS[i] - 1)

        return max_bitonic
