// https://www.geeksforgeeks.org/problems/insertion-sort/1

class Solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        int key;
        for (int i = 1; i < arr.size(); i++)
        {
            key = arr[i];
            int j = i - 1;
            while (j >= 0 && key <= arr[j])
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
};