// https://www.naukri.com/code360/problems/missing-number_6680467?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int missing_number(vector<int> &arr, int size)
{
    int n = size;
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
    return xor1 ^ xor2;
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