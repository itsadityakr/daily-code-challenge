// _324_Check_if_a_subarray_with_sum_0_exist.cpp

// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// Subarray with 0 sum

// Given an array of integers, arr[]. Find if there is a subarray (of size at least one) with 0 sum. Return true/false depending upon whether there is a subarray present with 0-sum or not.

// Input: arr[] = [4, 2, -3, 1, 6]
// Output: true
// Explanation: 2, -3, 1 is the subarray with a sum of 0.

// Input: arr = [4, 2, 0, 1, 6]
// Output: true
// Explanation: 0 is one of the element in the array so there exist a subarray with sum 0.

// Input: arr = [1, 2, -1]
// Output: false

// Constraints:
// 1 <= arr.size <= 10^4
// -10^5 <= arr[i] <= 10^5

class Solution
{
public:
    bool subArrayExists(vector<int> &arr)
    {
        unordered_set<int> prefix_sums;
        int prefix_sum = 0;

        for (int num : arr)
        {
            prefix_sum += num;
            if (prefix_sum == 0 || prefix_sums.find(prefix_sum) != prefix_sums.end())
            {
                return true;
            }
            prefix_sums.insert(prefix_sum);
        }

        return false;
    }
};