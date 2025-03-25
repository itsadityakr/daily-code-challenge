# _336_Find_the_union_of_two_sorted_arrays.py

# https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

# Union of 2 Sorted with Duplicates

# Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

# Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

# Examples:

# Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
# Output: 1 2 3 4 5 6 7
# Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

# Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
# Output: 1 2 3 4 5
# Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.

# Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
# Output: 1 2
# Explanation: Distinct elements including both the arrays are: 1 2.

# Constraints:
# 1  <=  a.size(), b.size()  <=  10^5
# -10^9  <=  a[i] , b[i]  <=  10^9

class Solution:
    def findUnion(self, a: List[int], b: List[int]) -> List[int]:
        res = []
        pa, pb = 0, 0
        aN, bN = len(a), len(b)
        
        while pa < aN and pb < bN:
            if res and res[-1] == a[pa]:
                pa += 1
                continue
            if res and res[-1] == b[pb]:
                pb += 1
                continue
            
            if a[pa] < b[pb]:
                res.append(a[pa])
                pa += 1
            elif a[pa] > b[pb]:
                res.append(b[pb])
                pb += 1
            else:
                res.append(a[pa])
                pa += 1
                pb += 1

        while pa < aN:
            if not res or res[-1] != a[pa]:
                res.append(a[pa])
            pa += 1

        while pb < bN:
            if not res or res[-1] != b[pb]:
                res.append(b[pb])
            pb += 1

        return res
