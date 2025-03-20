# _314_Find_the_Kth_largest_and_smallest_element.py

# https://leetcode.com/problems/kth-largest-element-in-an-array/description/

import random

class Solution:
    def findKthLargest(self, nums, k):
        if not nums: 
            return  # Base case: If the list is empty, return nothing

        # Step 1: Choose a random pivot from the list
        pivot = random.choice(nums)

        # Step 2: Partition the list into three parts
        larger_than_pivot = [x for x in nums if x > pivot]   # Elements greater than pivot
        equal_to_pivot = [x for x in nums if x == pivot]      # Elements equal to pivot
        smaller_than_pivot = [x for x in nums if x < pivot]   # Elements smaller than pivot

        # Step 3: Get the counts
        count_larger = len(larger_than_pivot)  # Number of elements greater than pivot
        count_equal = len(equal_to_pivot)      # Number of elements equal to pivot

        # Step 4: Recursive selection logic
        if k <= count_larger:
            # The k-th largest element is in the "larger_than_pivot" partition
            return self.findKthLargest(larger_than_pivot, k)
        
        elif k > count_larger + count_equal:
            # The k-th largest element is in the "smaller_than_pivot" partition,
            # Adjust `k` by subtracting the elements that are greater than or equal to pivot
            return self.findKthLargest(smaller_than_pivot, k - count_larger - count_equal)
        
        else:
            # The k-th largest element is in the "equal_to_pivot" partition
            return equal_to_pivot[0]

# Input: nums = [3,2,1,5,6,4], k = 2
# Output: 5