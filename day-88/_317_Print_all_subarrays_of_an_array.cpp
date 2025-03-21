// _317_Print_all_subarrays_of_an_array.cpp

// https://www.geeksforgeeks.org/problems/generating-all-subarrays/0

class Solution
{
public:
    vector<vector<int>> getSubArrays(vector<int> &arr)
    {
        int n = arr.size();
        vector<vector<int>> result;
        for (int start = 0; start < n; start++)
        {
            for (int end = start; end < n; end++)
            {
                vector<int> subarray;
                for (int i = start; i <= end; i++)
                {
                    subarray.push_back(arr[i]);
                }
                result.push_back(subarray);
            }
        }
        return result;
    }
};

// Input: arr[] = [1, 2, 3]
// Output: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]