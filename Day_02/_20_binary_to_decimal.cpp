#include <iostream>
using namespace std;

int toDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int main() {
    int binary_num;
    cin >> binary_num;

    cout << toDecimal(binary_num) << endl;

    return 0;
}