// _312_Quick_Sort.cpp

// https://www.geeksforgeeks.org/problems/quick-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    void quickSort(vector<int> &arr, int start, int end)
    {
        if (start >= end)
        {
            return;
        }

        int pI = partition(arr, start, end);
        quickSort(arr, start, pI - 1);
        quickSort(arr, pI + 1, end);
    }

private:
    int partition(vector<int> &arr, int start, int end)
    {
        int idx = start - 1;
        int pI = arr[end];

        for (int j = start; j < end; j++)
        {
            if (arr[j] <= pI)
            {
                idx++;
                swap(arr[j], arr[idx]);
            }
        }

        idx++;
        swap(arr[end], arr[idx]);
        return idx;
    }
};

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]