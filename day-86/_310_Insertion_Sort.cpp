// _310_Insertion_Sort.cpp

// https://www.geeksforgeeks.org/problems/insertion-sort/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        int n = arr.size();
        int key;
        int IndexBeforeKey;
        for (int i = 1; i < n; i++)
        {
            key = arr[i];
            IndexBeforeKey = i - 1;
            while (IndexBeforeKey >= 0 && arr[IndexBeforeKey] > key)
            {
                arr[IndexBeforeKey + 1] = arr[IndexBeforeKey];
                IndexBeforeKey -= 1;
            }
            arr[IndexBeforeKey + 1] = key;
        }
    }
};

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]