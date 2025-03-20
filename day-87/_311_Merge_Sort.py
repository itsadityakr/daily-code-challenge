# _311_Merge_Sort.cpp

# https://www.geeksforgeeks.org/problems/merge-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution:

    def mergeSort(self, arr, start, end):
        if start >= end:
            return
        mid = start + (end - start) // 2
        self.mergeSort(arr, start, mid)
        self.mergeSort(arr, mid + 1, end)
        self.merge(arr, start, mid, end)

    def merge(self, arr, start, mid, end):
        i = start
        j = mid + 1
        temp = []
        while i <= mid and j <= end:
            if arr[i] < arr[j]:
                temp.append(arr[i])
                i += 1
            else:
                temp.append(arr[j])
                j += 1
        while i <= mid:
            temp.append(arr[i])
            i += 1

        while j <= end:
            temp.append(arr[j])
            j += 1
        for k in range(0, len(temp)):
            arr[k + start] = temp[k]

# Input: arr[] = [4, 1, 3, 9, 7]
# Output: [1, 3, 4, 7, 9]