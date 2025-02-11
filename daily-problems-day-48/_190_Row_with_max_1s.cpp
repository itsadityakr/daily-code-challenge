// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int n = arr.size(), m = arr[0].size();
        int maxRow = -1, maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            int firstOneIndex = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
            int countOnes = m - firstOneIndex;

            if (firstOneIndex < m && countOnes > maxCount)
            {
                maxCount = countOnes;
                maxRow = i;
            }
        }

        return maxRow;
    }
};