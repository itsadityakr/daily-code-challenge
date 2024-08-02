#include<iostream>  // Include the input/output stream library
#define endl "\n"  // Define endl as a newline character (for readability and consistency)

using namespace std;  // Use the standard namespace

int main()
{
    int x = 10;  // Declare an integer variable x and initialize it with the value 10
    cout << "Value of x: " << x << endl;  // Print the value of x

    int *ptr = &x;  // Declare a pointer variable ptr and store the address of x in it
                    // ptr now points to the memory location where x is stored
    cout << "Address of x (stored in ptr): " << ptr << endl;  // Print the address stored in ptr

    int value = *ptr;  // Dereference the pointer ptr to get the value stored at the address it points to
                       // The value stored in x (which is 10) is now assigned to the variable value
    cout << "Value stored at address ptr (value of x): " << value << endl;  // Print the value stored at the address ptr

    return 0;  // Return 0 to indicate that the program executed successfully
}
