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

void printArrayPointers(int *arr, int size) {
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
    // Iterate over each row of the matrix
    for (int i = 0; i < rows; i++) {
        // Iterate over each column within the current row
        for (int j = 0; j < cols; j++) {
            // Calculate the address of the element at row i and column j

            // 1. Start with the address of the beginning of the matrix (which is `matrix`).
            // 2. To get to the start of the i-th row, move forward by `i * cols` elements.
            //    Each row has `cols` elements, so `i * cols` gives the number of elements to skip to reach the i-th row.
            // 3. Within the i-th row, move forward by `j` elements to get to the specific column.
            //    So, you add `j` to the offset to get the address of the element at `matrix[i][j]`.

            // To summarize:
            // - `matrix` is a pointer to the first element of the matrix.
            // - `i * cols` moves the pointer to the start of the i-th row.
            // - `j` moves the pointer to the specific column within the i-th row.

            // `*(matrix + (i * cols + j))` calculates the address of `matrix[i][j]` and dereferences it to get the value.

            // Example:
            // If matrix is a 3x3 matrix:
            // matrix = {1, 2, 3, 4, 5, 6, 7, 8, 9}
            // To access matrix[1][2]:
            // - Start of matrix: pointer to the first element (1)
            // - Move to the start of the 2nd row: (1 * 3) elements = 3 positions
            // - Move to the 3rd column in this row: (2 positions) = total 5 positions from the start
            // - `*(matrix + 5)` gives the value 6

            cout << *(matrix + (i * cols + j)) << " ";  // Print the value at matrix[i][j]
        }
        cout << endl;  // Print a newline after printing all columns of the current row
    }
}


int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Declare and initialize a 1D array of 5 integers

    int length = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the 1D array
                                                // sizeof(arr) gives the total size of the array in bytes
                                                // sizeof(arr[0]) gives the size of one element

    cout << "1D Array: ";
    printArray(arr, length);  // Call the function to print the 1D array elements
    cout << "1D Array with Pointers: ";
    printArrayPointers(arr, length);  // Call the function to print the 1D array elements

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
