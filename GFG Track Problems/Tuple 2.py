# https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/Python-Foundation-List/problem/tuple-2

def sequence(numbers):
    # Determine the common difference
    common_difference = numbers[1] - numbers[0]
    
    # Generate the next three elements in the sequence
    next_elements = [numbers[-1] + common_difference * (i+1) for i in range(3)]
    
    # Combine all elements into a tuple
    result = numbers + tuple(next_elements)
    
    return result