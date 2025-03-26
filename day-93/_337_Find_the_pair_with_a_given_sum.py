# _337_Find_the_pair_with_a_given_sum.py

# https://www.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

# Find all pairs with a given sum

# Given two unsorted arrays a[]  and b[], the task is to find all pairs whose sum equals x from both arrays.

# Note: All pairs should be returned in increasing order of u. For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then (u1,v1) should be returned first else second.

# Examples:

# Input: target = 9, a[] = [1, 2, 4, 5, 7], b[] = [5, 6, 3, 4, 8]
# Output: 
# 1 8
# 4 5 
# 5 4
# Explanation: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.

# Input: target = 8, a[] = [-1, -2, 4, -6, 5, 7], b[] = [6, 3, 4, 0]
# Output:
# 4 4 
# 5 3

# Input: target = 9, a[] = [1, 2, 4, 5, 7, 4], b[] = [5, 6, 3, 4, 8, 4]
# Output:
# 1 8
# 4 5
# 4 5
# 5 4
# 5 4
# Explanation: (1, 8), (4, 5), (4, 5), (5, 4) and (5, 4) are the pairs which sum to 9.

# Constraints:
# 1 ≤ arr1.size, arr2.size ≤ 10^5
# -2*10^4 ≤ target, arr1[i], arr2[i] ≤ 2*10^4

from collections import defaultdict

# HASH MAP APPROACH FOR SORTED ARRAYF

class Solution:
    def allPairs_hashmap(self, target, arr1, arr2):
        freq = defaultdict(int)
        result = []

        for num in arr1:
            freq[num] += 1

        for num in arr2:
            complement = target - num
            if complement in freq:
                for _ in range(freq[complement]):
                    result.append((complement, num))

        result.sort()
        return result
    
    # TWO POINTER APPROACH FOR SORTED ARRAY

    def allPairs_twopointer(self, target, arr1, arr2):
        arr1.sort()
        arr2.sort()
        result = []
        
        i, j = 0, len(arr2) - 1
        
        while i < len(arr1) and j >= 0:
            total = arr1[i] + arr2[j]
            
            if total == target:
                count1, count2 = 1, 1
                
                while i + 1 < len(arr1) and arr1[i] == arr1[i + 1]:
                    count1 += 1
                    i += 1

                while j - 1 >= 0 and arr2[j] == arr2[j - 1]:
                    count2 += 1
                    j -= 1

                for _ in range(count1):
                    for _ in range(count2):
                        result.append((arr1[i], arr2[j]))

                i += 1
                j -= 1

            elif total < target:
                i += 1
            else:
                j -= 1

        return result
