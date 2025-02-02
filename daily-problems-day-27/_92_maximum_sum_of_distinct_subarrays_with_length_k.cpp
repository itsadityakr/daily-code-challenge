// https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long currentSum = 0, maxSum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
            freq[nums[i]]++;

            if (i >= k) {
                int leftElement = nums[i - k];
                currentSum -= leftElement;
                freq[leftElement]--;
                if (freq[leftElement] == 0) {
                    freq.erase(leftElement);
                }
            }

            if (freq.size() == k) {
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};
