// _298_Reverse_an_array.cpp

void swap(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void reverseArr(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Original array: 1 2 3 4 5 
// Reversed array: 5 4 3 2 1
