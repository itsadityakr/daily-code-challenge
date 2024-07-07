#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int main(){
    cout<<factorial(6);
    return 0;
}