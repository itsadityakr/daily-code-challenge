// https://www.naukri.com/code360/problems/two-sum_839653?leftPanelTabValue=SOLUTION
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n) {
    unordered_map<int, int> hashMap;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        hashMap[arr[i]]++;
        if (target - arr[i] == arr[i]) {
            if (hashMap[arr[i]] > 1) {
                ans.push_back({arr[i], arr[i]});
                hashMap[arr[i]] -= 2;
            }
        } else {
            if (hashMap[arr[i]] > 0 && hashMap[target - arr[i]] > 0) {
                ans.push_back({arr[i], target - arr[i]});
                hashMap[arr[i]] -= 1;
                hashMap[target - arr[i]] -= 1;
            }
        }
    }
    if (ans.empty()) {
        ans.push_back({-1, -1});
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<pair<int, int>> result = twoSum(nums, k, n);
    for (auto& p : result) {
        if (p.first == -1 && p.second == -1) {
            cout <<0<< endl;
        } else {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}
