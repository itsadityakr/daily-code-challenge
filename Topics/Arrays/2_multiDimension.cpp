#include <bits/stdc++.h>  // Include all standard libraries (not recommended for large projects)
#define endl "\n"  // Define endl as a newline character for readability
using namespace std;  // Use the standard namespace

int main() {
    // Declare and initialize a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},  // First row
        {4, 5, 6},  // Second row
        {7, 8, 9}   // Third row
    };

    // Calculate the total number of elements in the matrix
    int total_elements = sizeof(matrix) / sizeof(matrix[0][0]);
    cout << "Total number of elements: " << total_elements << endl;

    // Calculate the number of rows in the matrix
    // sizeof(matrix) gives the total size of the 2D array in bytes.
    // sizeof(matrix[0]) gives the size of one row (which is a 1D array) in bytes.
    // Dividing the total size by the size of one row gives the number of rows.
    int num_rows = sizeof(matrix) / sizeof(matrix[0]);
    cout << "Number of rows: " << num_rows << endl;

    // Calculate the number of columns in the matrix
    // sizeof(matrix[0]) gives the size of one row in bytes.
    // sizeof(matrix[0][0]) gives the size of one element in bytes.
    // Dividing the size of one row by the size of one element gives the number of columns.
    int num_columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    cout << "Number of columns: " << num_columns << endl;

    // Access the element at the second row and third column
    int element = matrix[1][2];  // Note: Indices start from 0, so [1][2] refers to the value 6

    // Print the accessed element
    cout << "Element at second row, third column: " << element << endl;

    return 0;  // Return 0 to indicate successful execution
}
