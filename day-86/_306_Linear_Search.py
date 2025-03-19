# // _306_Linear_Search.py

# // https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

class Solution:
    #Complete the below function
    def search(self,arr, x):
        #Your code here
        
        # APPROACH 1
        for num in range(0,len(arr)):
            if x == arr[num]:
                return num
                
        # APPROACH 2 # FAST
        # if x in arr:
        #     return arr.index(x) 
        
        return -1

# Input: 
# 1 2 3 4
# 3

# Output:
# 2