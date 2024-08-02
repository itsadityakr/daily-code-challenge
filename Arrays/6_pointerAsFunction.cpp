#include <iostream>  // Include the input/output stream library
using namespace std;  // Use the standard namespace

// Function to print the elements of the array
void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {  // Loop through the array elements
        cout << arr[i] << " ";  // Print each element followed by a space
    }
    cout << endl;  // Print a newline after the array elements
}

// Function to modify the elements of the array
void modifyArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {  // Loop through the array elements
        arr[i] += 10;  // Add 10 to each element in the array
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Declare and initialize an array of 5 integers
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    cout << "Original array: ";
    printArray(arr, size);  // Call the function to print the original array

    modifyArray(arr, size);  // Call the function to modify the array

    cout << "Modified array: ";
    printArray(arr, size);  // Call the function to print the modified array

    return 0;  // Return 0 to indicate successful execution
}
