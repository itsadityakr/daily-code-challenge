// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end())
        {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i;
    }
    return {};
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> new_vec = twoSum(nums, k);
    for (auto x : new_vec)
    {
        cout << x;
    }
    return 0;
}