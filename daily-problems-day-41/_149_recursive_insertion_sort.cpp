// https://www.geeksforgeeks.org/problems/insertion-sort/1

class Solution
{
public:
    void insertionSortRecursive(vector<int> &arr, int n)
    {
        if (n <= 1)
            return;
        insertionSortRecursive(arr, n - 1);
        int last = arr[n - 1];
        int j = n - 2;
        while (j >= 0 && arr[j] > last)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = last;
    }
    void insertionSort(vector<int> &arr)
    {
        insertionSortRecursive(arr, arr.size());
    }
};