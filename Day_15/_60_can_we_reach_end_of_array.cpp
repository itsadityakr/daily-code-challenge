// https://leetcode.com/problems/jump-game/description/

#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int> &nums)
{
    int maxReach = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (i > maxReach)
            return false;
        maxReach = max(maxReach, i + nums[i]);
        if (maxReach >= n - 1)
            return true;
    }
    return false;
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
    cout << (canJump(nums) ? "true" : "false") << endl;
    return 0;
}