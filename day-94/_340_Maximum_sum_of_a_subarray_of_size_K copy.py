# _340_Maximum_sum_of_a_subarray_of_size_K.py

# https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

# 2461. Maximum Sum of Distinct Subarrays With Length K

# You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

# The length of the subarray is k, and
# All the elements of the subarray are distinct.
# Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

# A subarray is a contiguous non-empty sequence of elements within an array.

# Examples :

# Input: nums = [1,5,4,2,9,9,9], k = 3
# Output: 15
# Explanation: The subarrays of nums with length 3 are:
# - [1,5,4] which meets the requirements and has a sum of 10.
# - [5,4,2] which meets the requirements and has a sum of 11.
# - [4,2,9] which meets the requirements and has a sum of 15.
# - [2,9,9] which does not meet the requirements because the element 9 is repeated.
# - [9,9,9] which does not meet the requirements because the element 9 is repeated.
# We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions

# Input: nums = [4,4,4], k = 3
# Output: 0
# Explanation: The subarrays of nums with length 3 are:
# - [4,4,4] which does not meet the requirements because the element 4 is repeated.
# We return 0 because no subarrays meet the conditions.
 

# Constraints:

# 1 <= k <= nums.length <= 105
# 1 <= nums[i] <= 105

def maximumSubarraySum(nums, k):
    freq = defaultdict(int)
    current_sum, max_sum = 0, 0
    n = len(nums)
    
    for i in range(n):
        current_sum += nums[i]
        freq[nums[i]] += 1
        
        if i >= k:
            left_element = nums[i - k]
            current_sum -= left_element
            freq[left_element] -= 1
            if freq[left_element] == 0:
                del freq[left_element]
        
        if len(freq) == k:
            max_sum = max(max_sum, current_sum)
    
    return max_sum
