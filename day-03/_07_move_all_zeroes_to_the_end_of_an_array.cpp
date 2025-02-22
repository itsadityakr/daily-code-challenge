// https://www.naukri.com/code360/problems/rotate-array_1230543?leftPanelTabValue=SUBMISSION
// https://leetcode.com/problems/move-zeroes/submissions/1483574931/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void swap(int &a, int &b) {
    if (&a != &b) {
        a= a^b;
        b= b^a;
        a= a^b;
    }
}

void pushZerosAtEnd(vector<int> &arr) 
{
    int n = arr.size();
    int zeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[i - zeroCount]);
        } else {
            zeroCount++;
        }
    }
    
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    pushZerosAtEnd(nums);

    for(int i = 0; i < n; i++) {
        cout<< nums[i];
    }

    cout << endl;
}