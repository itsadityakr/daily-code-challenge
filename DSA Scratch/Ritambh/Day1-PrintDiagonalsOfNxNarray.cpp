#include <iostream>
#include <vector>

using namespace std;

void printDiagonal(const vector<vector<int>>& matrix) {
    int size = matrix.size();
    for (int i = 0; i < size; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Diagonal elements: ";
    printDiagonal(matrix);

    return 0;
}
