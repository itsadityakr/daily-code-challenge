#include<iostream>  // Include the input/output stream library
#define endl "\n"  // Define endl as a newline character (for readability and consistency)
using namespace std;  // Use the standard namespace

// Function to print the elements of a 1D array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {  // Loop through each element of the array
        cout << arr[i] << " ";  // Print each element followed by a space
    }
    cout << endl;  // Print a newline after printing all elements
}

// Function to print a 2D array using direct access
void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";  // Print each element followed by a space
        }
        cout << endl;  // Print a newline after printing each row
    }
}

// Function to print a 2D array using pointer notation
void printMatrixPointers(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(matrix + i * cols + j) << " ";  // Access elements using pointer arithmetic
        }
        cout << endl;  // Print a newline after printing each row
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Declare and initialize a 1D array of 5 integers

    int length = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the 1D array
                                                // sizeof(arr) gives the total size of the array in bytes
                                                // sizeof(arr[0]) gives the size of one element

    cout << "1D Array: ";
    printArray(arr, length);  // Call the function to print the 1D array elements

    int matrix[3][3] = {  // Declare and initialize a 2D array
        {1, 2, 3},  // First row
        {4, 5, 6},  // Second row
        {7, 8, 9}   // Third row
    };

    cout << "2D Array:" << endl;
    printMatrix(matrix, 3, 3);  // Call the function to print the 2D array elements

    cout << "2D Array with Pointers:" << endl;
    printMatrixPointers(&matrix[0][0], 3, 3);  // Call the function to print the 2D array elements using pointers

    return 0;  // Return 0 to indicate successful execution
}
