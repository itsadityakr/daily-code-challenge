#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int noOfDigits(long long num) {
    int count = 0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}

int main() {
    long long number;
    cin >> number;
    cout<<noOfDigits(number);
    return 0;
}
