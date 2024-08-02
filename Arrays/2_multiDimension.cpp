#include<bits/stdc++.h>  // Include all standard libraries (not recommended for large projects)
#define endl "\n"  // Define endl as a newline character for readability
using namespace std;  // Use the standard namespace

int main()
{
    // Declare and initialize a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},  // First row
        {4, 5, 6},  // Second row
        {7, 8, 9}   // Third row
    };

    // Access the element at the second row and third column
    int element = matrix[1][2];  // Note: Indices start from 0, so [1][2] refers to the value 6

    // Print the accessed element
    cout << "Element at second row, third column: " << element << endl;

    return 0;  // Return 0 to indicate successful execution
}
