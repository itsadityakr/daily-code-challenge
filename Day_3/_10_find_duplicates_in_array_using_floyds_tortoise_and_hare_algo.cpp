// https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?leftPanelTabValue=PROBLEM
// https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<findDuplicate(nums);
}