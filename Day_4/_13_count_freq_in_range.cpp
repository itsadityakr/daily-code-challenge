// https://www.naukri.com/code360/problems/count-frequency-in-a-range_8365446?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> countFrequency(vector<int> &nums, int n){
    vector<int> freq_arr(n);
    for(int i=0;i<n;i++){
        if(nums[i]<=n){
            freq_arr[nums[i]-1]++;
        }
    }
    return freq_arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> new_vec = countFrequency(nums, n);
    
    for(int i = 0;i<new_vec.size(); i++) {
        cout << new_vec[i] << " ";
    }
    cout << endl;
    return 0;
}