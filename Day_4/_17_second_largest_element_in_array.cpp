#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    int largest = INT_MIN;
    int second_largest = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
    }
    cout<<second_largest;
    return arr;
}

int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> result_arr= kthSmallLarge(arr, n,k);

    for(const auto& elements:result_arr){
        cout<<elements;
    }

    return 0;
}