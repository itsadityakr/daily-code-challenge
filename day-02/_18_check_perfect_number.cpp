#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

bool isPerfectNumber(int n){
    if(n<=1) return 0;
    int sum = 0;
    vector<int> factors;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            factors.push_back(i);
        }
    }
    for(int i=0;i<factors.size()-1;i++){
        sum+=factors[i];
    }
    return (sum == n) ? 1 : 0;
}

int main(){
    int n;
    cin>>n;
    cout<<isPerfectNumber(n);
}