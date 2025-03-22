// _321_Longest_subarray_with_sum_K.cpp

// https://leetcode.com/problems/subarray-sum-equals-k/description/

// 560. Subarray Sum Equals K

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.
 
// Input: nums = [1,1,1], k = 2
// Output: 2

// Input: nums = [1,2,3], k = 3
// Output: 2

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum_count = {{0, 1}};
        int prefix_sum = 0, count = 0;

        for (int num : nums) {
            prefix_sum += num;
            if (prefix_sum_count.find(prefix_sum - k) != prefix_sum_count.end()) {
                count += prefix_sum_count[prefix_sum - k];
            }
            prefix_sum_count[prefix_sum]++;
        }
        
        return count;
    }
};
