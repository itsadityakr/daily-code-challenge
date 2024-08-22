#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    bubbleSort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
bubbleSort Function:

Sorts the vector arr in ascending order using the bubble sort algorithm.
It iterates through the array, repeatedly swapping adjacent elements if they are in the wrong order.
An optimization is included with the swapped flag to terminate early if no swaps are made during a pass, indicating that the array is already sorted.
main Function:

Initializes a vector arr with unsorted integers.
Calls bubbleSort to sort the vector.
Prints the sorted vector to the console.
*/