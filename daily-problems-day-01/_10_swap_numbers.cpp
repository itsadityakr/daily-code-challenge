#include <iostream>
#include <vector>
using namespace std;

void swap (int &a, int &b) {
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b;
}

int main() {
    int m,n;
    cin>> m >> n;

    swap(m,n);
    return 0;
}