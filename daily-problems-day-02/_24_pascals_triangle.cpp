#include <iostream>
using namespace std;

void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows-i-1; space++) {
            cout <<" ";
        }
        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val <<" ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;

    printPascalsTriangle(rows);

    return 0;
}
