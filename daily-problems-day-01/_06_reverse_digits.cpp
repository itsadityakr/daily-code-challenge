#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int reverseDigits(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed; 
}


int main()
{
    int n;
    cin>>n;
    cout<<reverseDigits(n);
    return 0;
}