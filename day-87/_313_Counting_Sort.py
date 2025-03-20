# _313_Counting_Sort.py

# https://www.geeksforgeeks.org/problems/counting-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution:
    def countSort(self, arr: str) -> str:
        count = [0] * 256  

        for c in arr:
            count[ord(c)] += 1  

        result = []
        for i in range(256):
            result.extend([chr(i)] * count[i])  

        return "".join(result)

# Input: N = 13, S = "geeksforgeeks"
# Output: eeeefggkkorss

#--------- ORIGINAL COUNTING SORT ---------

def counting_sort(arr):
    if not arr:
        return arr  

    max_val = max(arr)  
    count = [0] * (max_val + 1)  

    for num in arr:
        count[num] += 1

    index = 0
    for num, freq in enumerate(count):
        for _ in range(freq):
            arr[index] = num
            index += 1
    return arr

arr = [4, 2, 2, 8, 3, 3, 1]
sorted_arr = counting_sort(arr)
print(sorted_arr)