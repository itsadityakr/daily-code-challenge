// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/smallest-positive-missing-number-1587115621

#include <cmath> // for abs function

class Solution {
public:
    // Function to find the smallest positive number missing from the array.

// Linear time routine for partitioning step
int partition(int arr[], int n)
{
    int pind = 0;

    // each time we find a positive number we move it to the
    // left side before the pivot
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) // pivot is 0
        {
            swap(arr[i], arr[pind]);
            pind++;
        }
    }

    // return index of the first non-positive number
    return pind;
}

// Function for finding the first missing positive number
int missingNumber(int arr[], int n)
{
    int k = partition(arr, n);

    // Traverse the positive part of the array
    for (int i = 0; i < k; i++) {
        // get the absolute value of the current element
        int val = abs(arr[i]);

        // If the absolute value is within range and the
        // element at index `val-1` is positive, mark its
        // presence by changing its sign to negative
        if (val - 1 < k && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }

    // Traverse the positive part of the array again to find
    // the smallest missing positive number
    for (int i = 0; i < k; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }

    // If all numbers from 1 to k are present, then the
    // missing number is `k + 1`
    return k + 1;
}
};