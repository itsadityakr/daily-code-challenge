// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/check-if-array-is-sorted-and-rotated-clockwise-1587115620

#include <iostream>
using namespace std;

class Solution {
public:
    // Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num) {
        int minIndex = -1;
        int minValue = INT_MAX;

        // Find the minimum element and its index
        for (int i = 0; i < num; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
                minIndex = i;
            }
        }

        // Check if the array is sorted in increasing order
        bool increasing = true;
        for (int i = 1; i < num; i++) {
            if (arr[(minIndex + i) % num] < arr[(minIndex + i - 1) % num]) {
                increasing = false;
                break;
            }
        }

        // Check if the array is sorted in decreasing order
        bool decreasing = true;
        for (int i = 1; i < num; i++) {
            if (arr[(minIndex + i) % num] > arr[(minIndex + i - 1) % num]) {
                decreasing = false;
                break;
            }
        }

        // Return true if the array is either sorted in increasing order and rotated,
        // or sorted in decreasing order and rotated.
        return (increasing || decreasing);
    }
};