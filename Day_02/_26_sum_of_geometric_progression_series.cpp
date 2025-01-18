#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int sumOfGP(const vector<int>& arr) {
    int a = arr[0];
    int r = arr[1] / arr[0];
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        if (arr[i] / arr[i-1] != r) {
            return -1;
        }
    }

    int sum = 0;
    if (r == 1) {
        sum = a * n;
    } else {
        sum = a * (1 - pow(r, n)) / (1 - r);
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sumOfGP(arr);
    if (result == -1) {
        cout<<"-1";
    }
    else{
        cout<<result;
    }

    return 0;
}

/*
A Geometric Progression (GP) is a sequence of numbers in which each term after the first is found by multiplying the previous term by a constant called the common ratio.

The general form of a GP is:
    a, a*r, a*r*r, a*r*r*r, a*r*r*r*r, a*[r (n times)]
Where:
a is the first term,
r is the common ratio,
n is the number of terms.
The sum of the first n terms of a geometric progression is given by the formula:

The formula for the nth term of a geometric progression whose first term is a and common ratio is r is: an=arn-1. The sum of n terms in GP whose first term is a and the common ratio is r can be calculated using the formula: Sn = [a(1-r[power n])] / (1-r).
*/