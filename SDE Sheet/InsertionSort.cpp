#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();
    insertionSort(n, arr);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
insertionSort Function: Sorts the elements of the vector arr in ascending order using the insertion sort algorithm.

It iterates from the second element to the end of the array.
For each element, it finds the correct position in the sorted portion of the array and inserts the element there by shifting larger elements to the right.
main Function:

Initializes a vector arr with some unsorted integers.
Calls insertionSort to sort the vector.
Prints the sorted vector to the console.
*/