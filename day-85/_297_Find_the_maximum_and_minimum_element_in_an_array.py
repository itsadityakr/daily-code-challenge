# _297_Find_the_maximum_and_minimum_element_in_an_array.py

def min_max(arr):
    if not arr:
        return [None, None]

    min_val = float('inf')
    max_val = float('-inf')

    for x in arr:
        if x > max_val:
            max_val = x
        if x < min_val:
            min_val = x

    return [min_val, max_val]

arr = [3, 7, 2, 9, 4, 1, 8]
result = min_max(arr)
print(result)

# result = [1,9]