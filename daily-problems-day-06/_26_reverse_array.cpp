// https://www.naukri.com/code360/problems/reverse-the-array_1262298
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

void reverseArray(vector<int>& arr, int m) {
    int start = m + 1;
    int end = arr.size() - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (auto ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,m);
    return 0;
}