# _301_Check_if_an_array_is_sorted.py

def is_sorted(nums):
    for i in range(len(nums) - 1):
        if nums[i] > nums[i + 1]:  
            return False
    return True

print(is_sorted([1, 2, 3, 4, 5]))  # True
print(is_sorted([5, 3, 4, 2, 1]))  # False
print(is_sorted([10, 20, 30, 40])) # True
print(is_sorted([7]))              # True
print(is_sorted([]))               # True
