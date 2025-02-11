// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

class Solution {
public:
    vector<vector<int>> subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int prefix[n];
        prefix[0] = arr[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = arr[i] + prefix[i - 1];
        }

        unordered_map<int, vector<int>> mp;
        vector<vector<int>> result;

        for (int i = 0; i < n; i++) {
            if (prefix[i] == k) {
                result.push_back(vector<int>(arr.begin(), arr.begin() + i + 1));
            }
            if (mp.find(prefix[i] - k) != mp.end()) {
                for (int idx : mp[prefix[i] - k]) {
                    result.push_back(vector<int>(arr.begin() + idx + 1, arr.begin() + i + 1));
                }
            }
            mp[prefix[i]].push_back(i);
        }

        return result;
    }
};
