#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

void printMatrix(vector<vector<int>>& matrix) {
    for(int row = 0; row < matrix.size(); row++) {
        for(int col = 0; col < matrix[row].size(); col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void setMatrixZeros(vector<vector<int>> &matrix) {
    int rowCount = matrix.size();
    int colCount = matrix[0].size();
    
    bool firstColumnHasZero = false, firstRowHasZero = false;
    
    for(int row = 0; row < rowCount; row++) {
        if(matrix[row][0] == 0) {
            firstColumnHasZero = true;
            break;
        }
    }
    
    for(int col = 0; col < colCount; col++) {
        if(matrix[0][col] == 0) {
            firstRowHasZero = true;
            break;
        }
    }
    
    for(int row = 1; row < rowCount; row++) {
        for(int col = 1; col < colCount; col++) {
            if(matrix[row][col] == 0) {
                matrix[row][0] = 0;
                matrix[0][col] = 0;
            }
        }
    }
    
    for(int row = 1; row < rowCount; row++) {
        for(int col = 1; col < colCount; col++) {
            if(matrix[row][0] == 0 || matrix[0][col] == 0) {
                matrix[row][col] = 0;
            }
        }
    }
    
    if(firstColumnHasZero) {
        for(int row = 0; row < rowCount; row++) {
            matrix[row][0] = 0;
        }
    }
    
    if(firstRowHasZero) {
        for(int col = 0; col < colCount; col++) {
            matrix[0][col] = 0;
        }
    }

    printMatrix(matrix);
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    
    setMatrixZeros(matrix);
}


/*
printMatrix Function: Prints the matrix to the console. Each row is printed on a new line with elements separated by spaces.

setMatrixZeros Function:

Identifies Zero Rows/Columns: Checks if the first row or column contains zeros.
Marks Zeros: Uses the first row and column to mark which rows and columns need to be set to zero.
Sets Zeros: Sets the appropriate rows and columns to zero based on the markers.
Restores First Row and Column: If necessary, sets the entire first row and column to zero.
main Function:

Initializes a matrix with a zero element.
Calls setMatrixZeros to process the matrix.
The matrix is modified and printed with zeroes in the appropriate rows and columns.
*/