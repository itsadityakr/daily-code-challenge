#include<bits/stdc++.h>  // Include all standard libraries (not recommended for large projects)
#define endl "\n"  // Define endl as a newline character for readability
using namespace std;  // Use the standard namespace

int main()
{
    int arr[5];  // Declaration of an integer array of size 5
                 // This array is uninitialized, so it contains garbage values

    int arr1[5] = {10, 20, 30, 40, 50};  // Initialize an array with specific values
                                        // All elements are set as {10, 20, 30, 40, 50}

    int arr2[5] = {10, 20};  // Initialize an array with partial values
                             // The array elements are set as {10, 20, 0, 0, 0}
                             // Elements not explicitly initialized are set to 0

    int firstElement = arr[0];  // Access the first element of the uninitialized array 'arr'
                                 // The value is undefined and can be garbage

    arr[2] = 60;  // Modify the third element of the uninitialized array 'arr'

    // Print all elements of 'arr1'
    for(int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";  // Print each element followed by a space
    }
    cout << endl;  // Print a newline after printing all elements

    return 0;  // Return 0 to indicate successful execution
}
