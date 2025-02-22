#include <iostream>
#include <vector>
using namespace std;

int check (int &m) {
    if(m<0) return -1;
    else if (m>0) return 1;
    else return 0;
    return 0;
}

int main() {
    int m;
    cin>> m;

    cout<<check(m);
    return 0;
}