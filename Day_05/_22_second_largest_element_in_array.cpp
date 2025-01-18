#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int second_largest(vector<int> &nums) {
    if (nums.size() < 2) return -1;
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int x = 0; x < nums.size(); x++) {
        if (nums[x] > largest) {
            secondLargest = largest;
            largest = nums[x];
        } else if (nums[x] > secondLargest && nums[x] < largest) {
            secondLargest = nums[x];
        }
    }
    
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}


int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << second_largest(nums);
}
