# _325_Print_all_subsequences_of_an_array.py

# Given an array arr[]. The task is to find all the possible subsequences of the given array using recursion.

# Examples:

# Input: arr[] = [1, 2, 3]
# Output : [3], [2], [2, 3], [1], [1, 3], [1, 2], [1, 2, 3], []

# Input: arr[] = [1, 2]
# Output : [2], [1], [1, 2], []

def generate_subsequences(arr, index, current, result):
    if index == len(arr):
        result.append(current[:])
        return
    current.append(arr[index])
    generate_subsequences(arr, index + 1, current, result)
    current.pop()
    generate_subsequences(arr, index + 1, current, result)


def start_subsequence_generation(arr):
    result = []
    generate_subsequences(arr, 0, [], result)
    return result


arr = [1, 2, 3]
subsequences = start_subsequence_generation(arr)

for seq in subsequences:
    print(seq)
