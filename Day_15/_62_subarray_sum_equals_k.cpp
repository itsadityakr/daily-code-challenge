// https://leetcode.com/problems/subarray-sum-equals-k/

#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;
    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;
        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - k];
        }
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << subarraySum(nums, k) << endl;
    return 0;
}