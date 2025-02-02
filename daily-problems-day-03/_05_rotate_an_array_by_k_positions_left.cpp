// https://www.naukri.com/code360/problems/rotate-array_1230543?leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> rotate_array(vector<int>arr, int k) {
    int n = arr.size();
    k %= n; // If ( k ) is larger than ( n ), rotating the array ( k ) times is equivalent to rotating it ( k \mod n ) times. For example: For an array of size ( n = 5 ), rotating it 7 times produces the same result as rotating it ( 7 \mod 5 = 2 ) times. This is because after every ( n ) rotations, the array returns to its original order.
    
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    
    return arr;
}


int main() {
    int n, k;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> k;
    vector<int> rotated_array = rotate_array(nums, k);
    
    for(int i = 0; i < n; i++) {
        cout << rotated_array[i] << " ";
    }
    cout << endl;
}