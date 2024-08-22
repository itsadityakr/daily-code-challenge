#include <bits/stdc++.h>
using namespace std;

long long calculateCombination(int total, int selection) {
    if (selection > total - selection) 
        selection = total - selection;
    
    long long combination = 1;
    for (int i = 0; i < selection; ++i) {
        combination *= (total - i);
        combination /= (i + 1);
    }
    return combination;
}

vector<vector<long long>> generatePascalsTriangle(int rowCount) {
    vector<vector<long long>> triangle(rowCount);
    
    for (int row = 0; row < rowCount; ++row) {
        triangle[row].resize(row + 1);
        for (int column = 0; column <= row; ++column) {
            triangle[row][column] = calculateCombination(row, column);
        }
    }
    return triangle;
}

int main() {
    int numberOfRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numberOfRows;

    vector<vector<long long>> pascalTriangle = generatePascalsTriangle(numberOfRows);

    for (const auto &row : pascalTriangle) {
        for (const auto &value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
