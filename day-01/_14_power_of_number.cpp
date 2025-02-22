#include <iostream>
#include <vector>
using namespace std;

long long int power(int m,int n) {
    if (n == 0) return 1;
    long long int pro = 1;
    for(int i= 1;i<=n;i++){
        pro *= m;
    }
    return pro;
}

int main() {
    int m,n;
    cin>>m>>n;

    cout<<power(m,n);
    return 0;
}