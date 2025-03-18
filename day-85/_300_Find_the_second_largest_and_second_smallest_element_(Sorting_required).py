# _300_Find_the_second_largest_and_second_smallest_element_(Sorting_required).py

def second_min_max(arr):
    if len(arr) < 2:
        return [-1, -1]

    min_val = float('inf')
    second_min = float('inf')
    max_val = float('-inf')
    second_max = float('-inf')

    for x in arr:
        if x > max_val:
            second_max = max_val
            max_val = x
        elif x > second_max and x != max_val:
            second_max = x

        if x < min_val:
            second_min = min_val
            min_val = x
        elif x < second_min and x != min_val:
            second_min = x

    second_min = second_min if second_min != float('inf') else -1
    second_max = second_max if second_max != float('-inf') else -1

    return [second_min, second_max]


arr = [10, 12, 13, 14, 5]
result = second_min_max(arr)
print(f"Second Min: {result[0]}, Second Max: {result[1]}")  

# Second Min: 10, Second Max: 13
