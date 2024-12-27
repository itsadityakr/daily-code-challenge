// https://www.naukri.com/code360/library/smallest-element-in-an-array

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int smallest_element(vector<int> & nums,int size){
    int min = INT_MAX;
    for(int i = 0 ;i<size;i++){
        if(nums[i]<min){
            min = nums[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<smallest_element(nums,n);
}