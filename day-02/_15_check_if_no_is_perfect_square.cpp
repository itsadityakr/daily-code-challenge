#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) return false;
    int root = sqrt(n);
    return (root * root == n);
}

int main() {
    int n;
    cin>>n;
    bool result = isPerfectSquare(n);
    cout<<result;
    return 0;
}
