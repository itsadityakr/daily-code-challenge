# _305_Right_rotate_the_array_by_K_places.py

# https://leetcode.com/problems/rotate-array/description/
 
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        start = 0
        end = len(nums)
        n = k % end
        nums[start:end] = reversed(nums[start:end])
        nums[start:n] = reversed(nums[start:n])
        nums[n:end] = reversed(nums[n:end])
        
# nums = [1,2,3,4,5,6,7], k =3
# Output = [5,6,7,1,2,3,4]