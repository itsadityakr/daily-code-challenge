# _304_Left_rotate_the_array_by_K_places.py

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        start = 0
        end = len(nums)
        n = k % end
        nums[start:end] = nums[n:end] + nums[start:n]
        
# Input: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
# Output: [4, 5, 6, 7, 1, 2, 3]