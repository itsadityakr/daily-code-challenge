# _309_Selection_Sort.py

# https://www.geeksforgeeks.org/problems/selection-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution: 
    def selectionSort(self, arr):
        for i in range(len(arr)):
            min_index = i
            for j in range(i + 1, len(arr)):
                if arr[j] < arr[min_index]:
                    min_index = j
            arr[i], arr[min_index] = arr[min_index], arr[i]
        return arr
    
# Input: arr[] = [4, 1, 3, 9, 7]
# Output: [1, 3, 4, 7, 9]