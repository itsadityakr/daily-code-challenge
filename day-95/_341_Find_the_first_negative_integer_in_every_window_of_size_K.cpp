// _341_Find_the_first_negative_integer_in_every_window_of_size_K.cpp

// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

// First negative in every window of size k
// Difficulty: MediumAccuracy: 48.61%Submissions: 180K+Points: 4Average Time: 15m
// Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

// Note: If a window does not contain a negative integer, then return 0 for that window.

// Examples:

// Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
// Output: [-8, 0, -6, -6]
// Explanation:
// Window [-8, 2] First negative integer is -8.
// Window [2, 3] No negative integers, output is 0.
// Window [3, -6] First negative integer is -6.
// Window [-6, 10] First negative integer is -6.

// Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28] , k = 3
// Output: [-1, -1, -7, -15, -15, 0]
// Explanation:
// Window [12, -1, -7] First negative integer is -1.
// Window [-1, -7, 8] First negative integer is -1.
// Window [-7, 8, -15] First negative integer is -7.
// Window [8, -15, 30] First negative integer is -15.
// Window [-15, 30, 16] First negative integer is -15.
// Window [30, 16, 28] No negative integers, output is 0.

// Input: arr[] = [12, 1, 3, 5] , k = 3
// Output: [0, 0]
// Explanation:
// Window [12, 1, 3] No negative integers, output is 0.
// Window [1, 3, 5] No negative integers, output is 0.

// Constraints:
// 1 <= arr.size() <= 10^6
// -10^5 <= arr[i] <= 10^5
// 1 <= k <= arr.size()

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        deque<int> dq;
        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] < 0)
                dq.push_back(i);
        }
        for (int i = k; i < arr.size(); i++)
        {
            result.push_back(dq.empty() ? 0 : arr[dq.front()]);
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            if (arr[i] < 0)
                dq.push_back(i);
        }
        result.push_back(dq.empty() ? 0 : arr[dq.front()]);
        return result;
    }
};
