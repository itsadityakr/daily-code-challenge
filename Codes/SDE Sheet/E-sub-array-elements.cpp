#include<iostream>
#include<vector>
using namespace std;
#define jl "\n"

void subArray(vector<int>& arr, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << jl;
        }
    }
}

int main()
{
    vector<int>arr={1,2,3,4};
    int n = arr.size();
    subArray(arr,n);
    return 0;
}

/*
1 
1 2
1 2 3
1 2 3 4
2
2 3
2 3 4
3
3 4
4
*/