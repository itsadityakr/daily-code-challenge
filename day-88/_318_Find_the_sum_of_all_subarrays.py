# _318_Find_the_sum_of_all_subarrays.py

# https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

MOD = 1000000007

class Solution:
    def subarraySum(self, arr):
        total_sum = 0
        n = len(arr)

        for i in range(n):
            contribution = arr[i] * (i + 1) * (n - i)
            total_sum = (total_sum + contribution) % MOD
        
        return total_sum
    
# Input: arr[] = [1, 2, 3]
# Output: 20