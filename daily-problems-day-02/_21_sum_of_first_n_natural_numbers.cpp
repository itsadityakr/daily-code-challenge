#include <iostream>
#include <cmath>
using namespace std;

int naturalNumsSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;

    cout << naturalNumsSum(num) << endl;

    return 0;
}
