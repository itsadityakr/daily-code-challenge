// https://leetcode.com/problems/maximum-difference-between-increasing-elements/
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int maximumDifference(vector<int> &nums)
{
    int minElement = nums[0];
    int maxDifference = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > minElement)
        {
            maxDifference = max(maxDifference, nums[i] - minElement);
        }
        else
        {
            minElement = nums[i];
        }
    }

    return maxDifference;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maximumDifference(nums);
}
