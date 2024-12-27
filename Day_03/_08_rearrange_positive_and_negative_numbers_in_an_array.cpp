// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// https://www.naukri.com/code360/problems/alternate-positive-and-negative_893342?leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int positive_val_index = 0; //even index representation
    int negative_val_index = 1; //odd index representation

    vector<int>new_nums(nums.size());
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0){
            new_nums[positive_val_index] = nums[i];
            positive_val_index +=2;
        }
        else{
            new_nums[negative_val_index] = nums[i];
            negative_val_index +=2;
        }
    }
    return new_nums;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> new_vec = rearrangeArray(nums);
    
    for(int i=0;i<n;i++){
        cout<<new_vec[i]<<" ";
    }
}