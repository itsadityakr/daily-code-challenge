#include <iostream>
#include <vector>
using namespace std;

int sumOfAP(const vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    int d = arr[1] - arr[0];
    int a1 = arr[0];
    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i - 1] != d) {
            return -1;
        }
    }
    return (n * (2 * a1 + (n - 1) * d)) / 2;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sumOfAP(arr);
    cout << result;

    return 0;
}

/*
Arithmetic Progression Formula (AP Formulas)
nth term of an AP: an = a + (n - 1)d.
Sum of n terms of an AP: 
        Sn = n/2 (2a + (n - 1) d)
        = n/2 (a + l)
        ,where l is the last term of the arithmetic progression.
*/