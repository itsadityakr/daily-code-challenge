// https://www.naukri.com/code360/problems/unique-pair-using-bits_972997?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> findNonRepeating(vector<int>& arr) {
    int xorAll = 0;
    for (int num : arr) {
        xorAll ^= num;
    }
    int rightmostSetBit = xorAll & -xorAll;
    int num1 = 0, num2 = 0;
    for (int num : arr) {
        if (num & rightmostSetBit) {
            num1 ^= num;
        } else {
            num2 ^= num;
        }
    }
    return {num1, num2};
}


int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> new_vec = findNonRepeating(nums);
    
    for(int i = 0;i<new_vec.size(); i++) {
        cout << new_vec[i] << " ";
    }
    cout << endl;
}