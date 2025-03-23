// _328_Find_the_longest_bitonic_subsequence.cpp

// https://www.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1

// Longest Bitonic subsequence

// Given an array of positive integers. Find the maximum length of Bitonic subsequence.
// A subsequence of array is called Bitonic if it is first strictly increasing, then strictly decreasing. Return the maximum length of bitonic subsequence.

// Note : A strictly increasing or a strictly decreasing sequence should not be considered as a bitonic sequence

// Examples :

// Input: n = 5, nums[] = [1, 2, 5, 3, 2]
// Output: 5
// Explanation: The sequence {1, 2, 5} is increasing and the sequence {3, 2} is decreasing so merging both we will get length 5.

// Input: n = 8, nums[] = [1, 11, 2, 10, 4, 5, 2, 1]
// Output: 6
// Explanation: The bitonic sequence {1, 2, 10, 4, 2, 1} has length 6.

// Input: n = 5, nums[] = [10, 20, 30]
// Output: 0
// Explanation: The decreasing or increasing part cannot be empty

// Input: n = 3, nums[] = [10, 10, 10]
// Output: 0
// Explanation: The subsequences must be strictly increasing or decreasing

// Constraints:
// 1 ≤ length of array ≤ 10^3
// 1 ≤ arr[i] ≤ 10^4

class Solution
{
public:
    int binarySearch(vector<int> &sub, int num)
    {
        int left = 0, right = sub.size() - 1, pos = sub.size();
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (sub[mid] >= num)
            {
                pos = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return pos;
    }

    vector<int> computeLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> LIS(n, 1), sub;
        for (int i = 0; i < n; i++)
        {
            int pos = binarySearch(sub, nums[i]);
            if (pos == sub.size())
                sub.push_back(nums[i]);
            else
                sub[pos] = nums[i];

            LIS[i] = pos + 1;
        }
        return LIS;
    }

    vector<int> computeLDS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> LDS(n, 1), sub;
        for (int i = n - 1; i >= 0; i--)
        {
            int pos = binarySearch(sub, nums[i]);
            if (pos == sub.size())
                sub.push_back(nums[i]);
            else
                sub[pos] = nums[i];

            LDS[i] = pos + 1;
        }
        return LDS;
    }

    int LongestBitonicSequence(int n, vector<int> &nums)
    {
        n = nums.size();
        if (n < 3)
            return 0;

        vector<int> LIS = computeLIS(nums);
        vector<int> LDS = computeLDS(nums);

        int maxBitonic = 0;
        for (int i = 0; i < n; i++)
        {
            if (LIS[i] > 1 && LDS[i] > 1)
                maxBitonic = max(maxBitonic, LIS[i] + LDS[i] - 1);
        }

        return maxBitonic;
    }
};