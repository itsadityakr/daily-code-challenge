#include <vector>
#include <iostream>

using namespace std;

int minJumps(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return 0;

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, i + nums[i]);

        if (i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;

            if (currentEnd >= n - 1)
            {
                return jumps;
            }
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    cout << minJumps(nums) << endl;
    return 0;
}