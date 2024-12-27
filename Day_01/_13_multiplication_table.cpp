#include <iostream>
#include <vector>
using namespace std;

void mul_table(int n) {
    for(int i = 1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    mul_table(n);
    return 0;
}