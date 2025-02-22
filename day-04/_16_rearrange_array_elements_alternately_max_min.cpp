#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> max_min_array_form(vector<int> &nums, int n) {
    vector<int> arranged_array(n);
    int left = 0, right = n - 1;
    bool toggle = true;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (toggle) {
            arranged_array[i] = nums[right--];
        } else {
            arranged_array[i] = nums[left++];
        }
        toggle = !toggle;
    }

    return arranged_array;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> new_vec = max_min_array_form(nums, n);
    
    for (int i = 0; i < new_vec.size(); i++) {
        cout << new_vec[i] << " ";
    }
    cout << endl;
    return 0;
}
