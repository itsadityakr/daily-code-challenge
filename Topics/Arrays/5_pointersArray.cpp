#include <iostream>  // Include the input/output stream library
using namespace std;  // Use the standard namespace

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare and initialize an array of 5 integers
    int *ptr = arr;  // Pointer pointing to the first element of the array
                     // Note: 'arr' itself is a pointer to the first element of the array

    // Dereferencing the pointer to get the first element of the array
    cout << "First element: " << *ptr << endl;

    // Accessing the second element by moving the pointer to the next position in memory
    cout << "Second element: " << *(ptr + 1) << endl;

    return 0;  // Return 0 to indicate successful execution
}
