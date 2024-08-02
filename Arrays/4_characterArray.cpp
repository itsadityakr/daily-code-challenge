#include<iostream>  // Include the input/output stream library
#define endl "\n"  // Define endl as a newline character (for readability and consistency)
using namespace std;  // Use the standard namespace

int main() {
    char name[10] = "John";  // Declare and initialize a character array of size 10
                             // The string "John" is stored in the first 4 elements
                             // The remaining elements are filled with null characters '\0'

    cout << "Name: " << name << endl;  // Print the content of the character array

    return 0;  // Return 0 to indicate successful execution
}
