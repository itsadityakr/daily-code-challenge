#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

void printSeriesForwardBackward(int arr[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < COLS; ++j) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int j = COLS - 1; j >= 0; --j) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void printSpiral(int arr[][COLS]) {
    int top = 0, bottom = ROWS - 1;
    int left = 0, right = COLS - 1;
    int direction = 0;

    while (top <= bottom && left <= right) {
        if (direction == 0) { // left to right
            for (int i = left; i <= right; ++i) {
                cout << arr[top][i] << " ";
            }
            ++top;
        } else if (direction == 1) { // top to bottom
            for (int i = top; i <= bottom; ++i) {
                cout << arr[i][right] << " ";
            }
            --right;
        } else if (direction == 2) { // right to left
            for (int i = right; i >= left; --i) {
                cout << arr[bottom][i] << " ";
            }
            --bottom;
        } else if (direction == 3) { // bottom to top
            for (int i = bottom; i >= top; --i) {
                cout << arr[i][left] << " ";
            }
            ++left;
        }
        direction = (direction + 1) % 4;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {8, 12, 16, 15},
        {14, 13, 9, 5},
        {6, 7, 11, 10}
    };

    printSeriesForwardBackward(arr);
    printSpiral(arr);

    return 0;
}
