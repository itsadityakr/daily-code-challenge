// https://www.naukri.com/code360/problems/duplicate-in-array_893397?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int duplicate_number(vector<int> & nums,int size){
    int xor1 = 0;

    for(int i=1;i<=size-1;i++){
        xor1 ^= i;
    }

    for(int i=0;i<size;i++){
        xor1 ^= nums[i];
    }

    return xor1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<duplicate_number(nums,n);
}