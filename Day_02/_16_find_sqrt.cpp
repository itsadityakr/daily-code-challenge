#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

double findSqrt(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return n;

    double low = 0, high = n, mid;
    double tolerance = 0.00000001;

    while (high - low > tolerance) {
        mid = (low + high) / 2;
        if (mid * mid > n) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return (low + high) / 2;
}

int main() {
    int number;
    cin >> number;
    double result = findSqrt(number);
    cout<<result;
    return 0;
}
