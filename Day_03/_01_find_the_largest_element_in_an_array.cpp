// https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int largest_element(vector<int> & nums,int size){
    int max = INT_MIN;
    for(int i = 0 ;i<size;i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<largest_element(nums,n);
}