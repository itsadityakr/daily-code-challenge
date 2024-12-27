// https://leetcode.com/problems/missing-number/submissions/1483544245/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int missing_number(vector<int> &arr, int size)
{
    int result = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        result = result ^ arr[i];
        result = result ^ i;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<missing_number(nums,n);
}