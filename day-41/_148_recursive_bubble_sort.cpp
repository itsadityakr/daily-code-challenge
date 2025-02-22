// https://www.geeksforgeeks.org/problems/bubble-sort/1

class Solution
{
public:
    void bubbleSortRecursive(vector<int> &arr, int n)
    {
        if (n == 1)
            return;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        bubbleSortRecursive(arr, n - 1);
    }

    void bubbleSort(vector<int> &arr)
    {
        bubbleSortRecursive(arr, arr.size());
    }
};
