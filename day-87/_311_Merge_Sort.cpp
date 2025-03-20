// _311_Merge_Sort.cpp

// https://www.geeksforgeeks.org/problems/merge-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    void mergeSort(vector<int> &arr, int start, int end)
    {
        if (start >= end)
            return; // Base case to stop recursion

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }

    void merge(vector<int> &arr, int start, int mid, int end)
    {
        vector<int> temp;
        int i = start, j = mid + 1;

        // Merge the two halves
        while (i <= mid && j <= end)
        {
            if (arr[i] <= arr[j])
            {
                temp.push_back(arr[i++]);
            }
            else
            {
                temp.push_back(arr[j++]);
            }
        }

        // Copy remaining elements from left half
        while (i <= mid)
        {
            temp.push_back(arr[i++]);
        }

        // Copy remaining elements from right half
        while (j <= end)
        {
            temp.push_back(arr[j++]);
        }

        // Copy sorted elements back into original array
        for (int k = 0; k < temp.size(); k++)
        {
            arr[start + k] = temp[k];
        }
    }
};

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]