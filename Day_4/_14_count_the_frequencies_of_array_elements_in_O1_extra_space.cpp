// https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;

    for (int num : nums) {
        frequencyMap[num]++;
        maxFrequency = max(maxFrequency, frequencyMap[num]);
    }
    int totalCount = 0;
    for (const auto& [key, frequency] : frequencyMap) {
        if (frequency == maxFrequency) {
            totalCount += frequency;
        }
    }

    return totalCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << maxFrequencyElements(nums);
}