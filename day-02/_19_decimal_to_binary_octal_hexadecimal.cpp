#include <iostream>
using namespace std;

void toBinary(int n) {
    for (int i = 31; i >= 0; --i) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

void toOctal(int n) {
    int octalNum[100], i = 0;
    while (n != 0) {
        octalNum[i++] = n % 8;
        n /= 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << octalNum[j];
    }
    cout << endl;
}

void toHexadecimal(int n) {
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        int temp = n % 16;
        hexaDeciNum[i++] = (temp < 10) ? temp + '0' : temp - 10 + 'A';
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << hexaDeciNum[j];
    }
    cout << endl;
}

int main() {
    int decimal;
    cin >> decimal;

    toBinary(decimal);
    toOctal(decimal);
    toHexadecimal(decimal);

    return 0;
}
