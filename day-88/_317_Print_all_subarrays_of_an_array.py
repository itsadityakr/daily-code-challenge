# _317_Print_all_subarrays_of_an_array.py

# https://www.geeksforgeeks.org/problems/generating-all-subarrays/0

def get_subarrays(arr):
    n = len(arr)
    result = []
    for start in range(n):
        for end in range(start, n):
            result.append(arr[start:end+1])
    return result

# Input: arr[] = [1, 2, 3]
# Output: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
