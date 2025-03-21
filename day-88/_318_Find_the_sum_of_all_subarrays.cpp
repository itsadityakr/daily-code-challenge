// _318_Find_the_sum_of_all_subarrays.cpp

// https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#define MOD 1000000007

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        long long totalSum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long contribution = (long long) arr[i] * (i + 1) * (n - i);
            totalSum = (totalSum + contribution) % MOD;
        }

        return totalSum;
    }
};

// Input: arr[] = [1, 2, 3]
// Output: 20