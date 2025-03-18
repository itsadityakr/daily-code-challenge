# _299_Find_the_sum_of_all_elements_in_an_array.py

def sumArr (nums):
    sum = 0
    for num in nums:
        sum += num
    return sum

arr = [1, 4, 3, 6, 2]
print(sumArr(arr))

# arr = [1, 4, 3, 6, 2]
# sum = 16