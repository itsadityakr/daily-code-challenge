#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int second_largest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }

    int l = INT_MIN, sl = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > l) {
            sl = l;
            l = arr[i];
        } else if (arr[i] > sl && arr[i] != l) {
            sl = arr[i];
        }
    }

    return sl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << second_largest(arr,n);
    return 0;
}
