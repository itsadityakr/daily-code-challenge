#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool armstrong(int num) {
    int count = 0;
    int sum = 0;
    int originalNum = num;

    while (num != 0) {
        int digit = num % 10;
        num /= 10;
        count++;
    }
    
    num = originalNum;

    while (num != 0) {
        int digit = num % 10;
        num /= 10;
        sum += pow(digit, count);
    }
    return sum == originalNum;
}


int main()
{
    int n;
    cin>>n;
    if (armstrong(n)) {
        cout <<1;
    } else {
        cout <<0;
    }
    return 0;
}