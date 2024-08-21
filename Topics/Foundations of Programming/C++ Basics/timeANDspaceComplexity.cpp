#include <iostream>

using namespace std;

// Function to find the maximum element in an array
// Time Complexity: O(n)
// - This function iterates through the array once to find the maximum element.
// - 'n' represents the number of elements in the array 'nums'.
int findMax(const int nums[], int size) {
    if (size == 0) {
        return -1; // Constant time check if array size is zero
    }

    int maxVal = nums[0]; // Constant time access (O(1)) to the first element
    for (int i = 1; i < size; ++i) { // Loop runs 'n-1' times
        if (nums[i] > maxVal) {
            maxVal = nums[i]; // Constant time assignment (O(1)) if condition true
        }
    }

    return maxVal; // Constant time return (O(1))
}

int main() {
    const int size = 6;
    int numbers[size] = {5, 2, 9, 1, 5, 6}; // Array initialization takes O(n) time and space
    
    // Call function to find the maximum element
    int maxNum = findMax(numbers, size); // Calls findMax function, which takes O(n) time
    
    // Output the maximum number found
    cout << "Maximum number in the array: " << maxNum << endl; // Constant time operation (O(1))
    
    return 0; // Constant time return (O(1))
}
