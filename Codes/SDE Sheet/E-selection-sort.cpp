#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    selectionSort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
selectionSort Function:

Sorts the vector arr in ascending order using the selection sort algorithm.
It iterates through the array and, for each position, finds the minimum element in the remaining unsorted part.
Swaps this minimum element with the element at the current position.
main Function:

Initializes a vector arr with some unsorted integers.
Calls selectionSort to sort the vector.
Prints the sorted vector to the console.
*/