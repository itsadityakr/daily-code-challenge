#include <iostream>
#include <cmath>
using namespace std;

int naturalOddNumsSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if(i%2!=0) sum += i;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;

    cout << naturalOddNumsSum(num) << endl;

    return 0;
}
