// https://www.geeksforgeeks.org/problems/bubble-sort/1

class Solution
{
public:
    void bubbleSort(vector<int> &arr)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
    }
};