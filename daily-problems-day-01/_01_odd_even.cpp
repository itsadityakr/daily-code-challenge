#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int setBit = n & 1;
    if(setBit==0){
        cout<<"Even";
    }
    // if(n%2==0){
    //     cout<<"Even";
    // }
    else{
        cout<<"Odd";
    }
    return 0;
}