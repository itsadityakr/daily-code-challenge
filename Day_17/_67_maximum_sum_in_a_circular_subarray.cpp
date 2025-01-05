// https://leetcode.com/problems/maximum-sum-circular-subarray/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int total = 0, maxSum = nums[0], curMax = 0, minSum = nums[0], curMin = 0;
    for (int num : nums) {
        curMax = max(curMax + num, num);
        maxSum = max(maxSum, curMax);
        curMin = min(curMin + num, num);
        minSum = min(minSum, curMin);
        total += num;
    }
    return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
}

int main() {
    vector<int> nums = {5, -3, 5};
    cout << maxSubarraySumCircular(nums) << endl;
}
