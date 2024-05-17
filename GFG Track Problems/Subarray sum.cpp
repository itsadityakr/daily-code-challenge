// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-unordered-map/problem/subarray-sum

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long int maximum_sum(vector<long long int> v)
        {
            int n = v.size();
            unordered_map<long long int, int> first, last;
            long long int pr[n];

            // Build prefix sum array
            for (int i = 0; i < n; i++) {
                if (i)
                    pr[i] = pr[i - 1] + v[i];
                else
                    pr[i] = v[i];
                
                // Update first and last occurrence of each element
                if (first.find(v[i]) == first.end())
                    first[v[i]] = i + 1;
                last[v[i]] = i + 1;
            }

            long long int ans = 0;

            // Find the maximum sum with the same first and last value
            for (int i = 0; i < n; i++) {
                int start = first[v[i]];
                int end = last[v[i]];
                if (start == 1)
                    ans = max(ans, pr[end - 1]);
                else
                    ans = max(ans, pr[end - 1] - pr[start - 2]);
            }
            return ans;
        }
};