# _298_Reverse_an_array.py
    
def reverse(arr):
    start = 0
    end = (len(arr))-1
    while(start<end):
        arr[start],arr[end] = arr[end],arr[start]
        start += 1
        end -=1

arr = [10,12,13,14,5]
reverse(arr)
print(arr)

# Original array: 1 2 3 4 5 
# Reversed array: 5 4 3 2 1