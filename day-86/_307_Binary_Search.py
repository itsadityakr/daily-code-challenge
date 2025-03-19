# _307_Binary_Search.py

# https://www.geeksforgeeks.org/problems/binary-search-1587115620/1

class Solution:
    def binarysearch(self, arr, k):
        low = 0
        high = len(arr) - 1
        result = -1

        while low <= high:
            mid = low + (high - low) // 2

            if arr[mid] == k:
                result = mid
                high = mid - 1
            elif arr[mid] < k:
                low = mid + 1
            else:
                high = mid - 1

        return result


# Input: k = 4 arr[] = 1 2 3 4 5
# Your Output: 3