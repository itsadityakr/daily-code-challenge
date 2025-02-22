// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>

#include <cmath>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;
        for (int idx = 0; idx < nums.size(); idx++) {
            rightSum -= nums[idx];
            if (leftSum == rightSum)
                return idx;
            leftSum += nums[idx];
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << sol.pivotIndex(nums) << endl;

    return 0;
}
