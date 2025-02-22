// https://www.geeksforgeeks.org/problems/reverse-an-array/0

class Solution
{
public:
    void reverseHelper(vector<int> &arr, int left, int right)
    {
        if (left >= right)
            return;
        swap(arr[left], arr[right]);
        reverseHelper(arr, left + 1, right - 1);
    }

    void reverseArray(vector<int> &arr)
    {
        reverseHelper(arr, 0, arr.size() - 1);
    }
};
