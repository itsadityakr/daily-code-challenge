// _307_Binary_Search.cpp

// https://www.geeksforgeeks.org/problems/binary-search-1587115620/1

class Solution
{
public:
    int binarysearch(vector<int> &arr, int k)
    {
        int low = 0, high = arr.size() - 1, result = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k)
            {
                result = mid;
                high = mid - 1;
            }
            else if (arr[mid] < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return result;
    }
};

// Input: k = 4 arr[] = 1 2 3 4 5
// Your Output: 3