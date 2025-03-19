# _308_Bubble_Sort.py

# https://www.geeksforgeeks.org/problems/bubble-sort/1

class Solution:
    #Function to sort the array using bubble sort algorithm.
    def bubbleSort(self,arr):
        # code here
        for i in range(0,len(arr)):
            for j in range(1,len(arr)):
                if arr[j]<arr[j-1]:
                    arr[j-1],arr[j] = arr[j],arr[j-1]

# Input: arr[] = [4, 1, 3, 9, 7]
# Output: [1, 3, 4, 7, 9]