# _303_Left_rotate_the_array_by_one_place.py

#  ----- LEFT ROTATE SOLUTION -----

class Solution:
    def rotate(self, arr):
        start = 0
        end = len(arr)
        idx = 1
        arr[idx:end] = reversed(arr[idx:end])
        arr[start:end] = reversed(arr[start:end])
        
# Input: 1 2 3 4 5
# Your Output: 2 3 4 5 1

#  ----- RIGHT ROTATE SOLUTION -----

# https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

# class Solution:
#     def rotate(self, arr):
#         start = 0
#         end = len(arr)
#         idx = 1
#         arr[start:end] = reversed(arr[start:end])
#         arr[idx:end] = reversed(arr[idx:end])