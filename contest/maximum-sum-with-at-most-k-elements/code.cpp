#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution
{
public:
    long long maxSum(vector<vector<int>> &grid, vector<int> &limits, int k)
    {
        priority_queue<int> maxHeap;

        int n = grid.size();

        for (int i = 0; i < n; i++)
        {
            sort(grid[i].rbegin(), grid[i].rend());

            for (int j = 0; j < min((int)grid[i].size(), limits[i]); j++)
            {
                maxHeap.push(grid[i][j]);
            }
        }
        long long sum = 0;
        while (k-- > 0 && !maxHeap.empty())
        {
            sum += maxHeap.top();
            maxHeap.pop();
        }

        return sum;
    }
};