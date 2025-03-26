// _337_Find_the_pair_with_a_given_sum.cpp

// https://www.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// Find all pairs with a given sum

// Given two unsorted arrays a[]  and b[], the task is to find all pairs whose sum equals x from both arrays.

// Note: All pairs should be returned in increasing order of u. For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then (u1,v1) should be returned first else second.

// Examples:

// Input: target = 9, a[] = [1, 2, 4, 5, 7], b[] = [5, 6, 3, 4, 8]
// Output:
// 1 8
// 4 5
// 5 4
// Explanation: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.

// Input: target = 8, a[] = [-1, -2, 4, -6, 5, 7], b[] = [6, 3, 4, 0]
// Output:
// 4 4
// 5 3

// Input: target = 9, a[] = [1, 2, 4, 5, 7, 4], b[] = [5, 6, 3, 4, 8, 4]
// Output:
// 1 8
// 4 5
// 4 5
// 5 4
// 5 4
// Explanation: (1, 8), (4, 5), (4, 5), (5, 4) and (5, 4) are the pairs which sum to 9.

// Constraints:
// 1 ≤ arr1.size, arr2.size ≤ 10^5
// -2*10^4 ≤ target, arr1[i], arr2[i] ≤ 2*10^4

// HASH MAP APPROACH FOR SORTED ARRAY

class Solution
{
public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2)
    {
        unordered_map<int, int> freq;
        vector<pair<int, int>> result;

        for (int num : arr1)
        {
            freq[num]++;
        }

        for (int num : arr2)
        {
            int complement = target - num;
            if (freq[complement] > 0)
            {
                for (int i = 0; i < freq[complement]; i++)
                {
                    result.push_back({complement, num});
                }
            }
        }

        sort(result.begin(), result.end());

        return result;
    }
};

// TWO POINTER APPROACH FOR SORTED ARRAY

class Solution
{
public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2)
    {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        vector<pair<int, int>> result;
        int i = 0, j = arr2.size() - 1;

        while (i < arr1.size() && j >= 0)
        {
            int sum = arr1[i] + arr2[j];

            if (sum == target)
            {
                int count1 = 1, count2 = 1;

                while (i + 1 < arr1.size() && arr1[i] == arr1[i + 1])
                {
                    count1++;
                    i++;
                }

                while (j - 1 >= 0 && arr2[j] == arr2[j - 1])
                {
                    count2++;
                    j--;
                }

                for (int x = 0; x < count1; x++)
                {
                    for (int y = 0; y < count2; y++)
                    {
                        result.push_back({arr1[i], arr2[j]});
                    }
                }

                i++;
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return result;
    }
};
