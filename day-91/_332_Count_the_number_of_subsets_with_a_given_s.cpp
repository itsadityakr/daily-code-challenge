// _332_Count_the_number_of_subsets_with_a_given_s.cpp

// https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// Perfect Sum Problem

// Given an array arr of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.

// Examples:
// Input: arr[] = [5, 2, 3, 10, 6, 8], target = 10
// Output: 3
// Explanation: The subsets {5, 2, 3}, {2, 8}, and {10} sum up to the target 10.

// Input: arr[] = [2, 5, 1, 4, 3], target = 10
// Output: 3
// Explanation: The subsets {2, 1, 4, 3}, {5, 1, 4}, and {2, 5, 3} sum up to the target 10.

// Input: arr[] = [5, 7, 8], target = 3
// Output: 0
// Explanation: There are no subsets of the array that sum up to the target 3.

// Input: arr[] = [35, 2, 8, 22], target = 0
// Output: 1
// Explanation: The empty subset is the only subset with a sum of 0.

// Constraints:
// 1 ≤ arr.size() ≤ 10^3
// 0 ≤ arr[i] ≤ 10^3
// 0 ≤ target ≤ 10^3

class Solution
{
public:
    int count = 0;

    void findSubsets(vector<int> &arr, int index, int currentSum, int target)
    {
        if (index == arr.size())
        {
            if (currentSum == target)
                count++;
            return;
        }
        findSubsets(arr, index + 1, currentSum + arr[index], target);
        findSubsets(arr, index + 1, currentSum, target);
    }

    int perfectSum(vector<int> &arr, int target)
    {
        count = 0;
        findSubsets(arr, 0, 0, target);
        return count;
    }
};
