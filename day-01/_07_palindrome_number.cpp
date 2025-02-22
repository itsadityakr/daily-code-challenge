#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if(reversed!=originalNum){
        return 0;
    }
    return 1;
}


int main()
{
    int n;
    cin>>n;
    cout<<isPalindrome(n);
    return 0;
}