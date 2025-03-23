// _327_Find_the_longest_decreasing_subsequence.cpp

// 326. Find the Longest Decreasing Subsequence

// Given an integer array nums, return the length of the longest strictly decreasing subsequence.

// Example:

// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest decreasing subsequence is [10, 9, 7, 3] (or other valid sequences), therefore the length is 4.

// Input: nums = [0,1,0,3,2,3]
// Output: 3
// Explanation: The longest decreasing subsequence is [3, 2, 0] (or other valid sequences), therefore the length is 3.

// Input: nums = [7,7,7,7,7,7,7]
// Output: 1

// Constraints:
// 1 <= nums.length <= 2500
// -10^4 <= nums[i] <= 10^4

// Follow up: Can you come up with an algorithm that runs in O(n log(n)) time complexity?

int binarySearch(vector<int>& sub, int num) {
    int left = 0, right = sub.size() - 1, pos = sub.size();
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (sub[mid] <= num) { // Change condition for decreasing order
            pos = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return pos;
}

int longestDecreasingSubsequence(vector<int>& nums) {
    vector<int> sub;
    for (int num : nums) {
        int pos = binarySearch(sub, num);
        if (pos == sub.size()) sub.push_back(num);
        else sub[pos] = num;
    }
    return sub.size();
}