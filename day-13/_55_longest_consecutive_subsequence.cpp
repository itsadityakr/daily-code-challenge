// https://leetcode.com/problems/longest-consecutive-sequence/description/

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int maxcount = 0;
        int n = nums.size();
        if (n == 0)
            return 0;
        int count = 1;
        for (int i = 1; i < n; i++) {
            int p = nums[i - 1] + 1;
            int q = nums[i];
            if (p == q)
                count++;
            else {
                maxcount = max(maxcount, count);
                count = 1;
            }
        }
        return max(maxcount, count);
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

    cout << longestConsecutive(nums);
    return 0;
}