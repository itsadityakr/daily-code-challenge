// https://www.naukri.com/code360/problems/count-frequency-in-a-range_8365446?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int> freqMap;
    int maxFreq = 0;
    for(int ele : nums){
        freqMap[ele]++;
        maxFreq = max(maxFreq,freqMap[ele]);
    }
    return maxFreq;
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