#include <iostream>
using namespace std;

double harmonicSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    cout << harmonicSum(n) << endl;

    return 0;
}

/*
The harmonic series is a series of numbers where each term is the reciprocal of a positive integer. It is represented as:
Sn = 1 + 1/2 + 1/3 + 1/5 ......+ 1/n

Sn is the sum of the first n terms.
The i-th term in the series is where i starts from 1 and increases by 1.
*/