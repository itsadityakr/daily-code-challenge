// _322_Count_subarrays_with_sum_0.cpp

// https://www.geeksforgeeks.org/problems/zero-sum-subarrays1825/1

// Zero Sum Subarrays

// You are given an array arr[] of integers. Find the total count of subarrays with their sum equal to 0.

// Input: arr[] = [0, 0, 5, 5, 0, 0]
// Output: 6
// Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].

// Input: arr[] = [6, -1, -3, 4, -2, 2, 4, 6, -12, -7]
// Output: 4
// Explanation: The 4 subarrays are [-1, -3, 4], [-2, 2], [2, 4, 6, -12], and [-1, -3, 4, -2, 2]

class Solution {
    public:
        int findSubarray(vector<int>& arr) {
            unordered_map<int, int> prefix_sum_count = {{0, 1}};
            int prefix_sum = 0, count = 0;
    
            for (int num : arr) {
                prefix_sum += num;
                if (prefix_sum_count.find(prefix_sum) != prefix_sum_count.end()) {
                    count += prefix_sum_count[prefix_sum];
                }
                prefix_sum_count[prefix_sum]++;
            }
            
            return count;
        }
    };