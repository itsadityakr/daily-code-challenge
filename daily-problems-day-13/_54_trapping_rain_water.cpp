// https://leetcode.com/problems/trapping-rain-water/description/

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int trap(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int left_max = 0, right_max = 0;
    int water_trapped = 0;

    while (left < right)
    {
        if (height[left] < height[right])
        {
            if (height[left] >= left_max)
            {
                left_max = height[left];
            }
            else
            {
                water_trapped += left_max - height[left];
            }
            left++;
        }
        else
        {
            if (height[right] >= right_max)
            {
                right_max = height[right];
            }
            else
            {
                water_trapped += right_max - height[right];
            }
            right--;
        }
    }

    return water_trapped;
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

    cout << trap(nums);
    return 0;
}