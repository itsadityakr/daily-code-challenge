# _312_Quick_Sort.py

# https://www.geeksforgeeks.org/problems/quick-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution:
    def quickSort(self, arr, start, end):
        if start >= end:
            return

        if start < end:
            pI = self.partition(arr, start, end)
            self.quickSort(arr, start, pI - 1)
            self.quickSort(arr, pI + 1, end)

    def partition(self, arr, start, end):
        idx = start - 1
        pI = arr[end]

        for j in range(start, end):
            if arr[j] <= pI:
                idx += 1
                arr[j], arr[idx] = arr[idx], arr[j]

        idx += 1
        arr[end], arr[idx] = arr[idx], arr[end]
        return idx

# Input: arr[] = [4, 1, 3, 9, 7]
# Output: [1, 3, 4, 7, 9]
