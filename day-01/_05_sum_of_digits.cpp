#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while(num!=0){
        sum = sum + num %10;
        num = num/10;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
    return 0;
}