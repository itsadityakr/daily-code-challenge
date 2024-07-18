#include <iostream>
using namespace std;

// Function to demonstrate parameter passing by value
void passByValue(int num) {
    cout << "Inside passByValue function:" << endl;
    cout << "Before modification, num = " << num << endl;
    num = 20; // Modify the parameter
    cout << "After modification, num = " << num << endl;
}

// Function to demonstrate parameter passing by reference
void passByReference(int &num) {
    cout << "Inside passByReference function:" << endl;
    cout << "Before modification, num = " << num << endl;
    num = 30; // Modify the parameter through reference
    cout << "After modification, num = " << num << endl;
}

// Function to demonstrate return types
int add(int a, int b) {
    return a + b; // Returns the sum of two integers
}

int main() {
    // Variable declaration and initialization
    int number = 10;

    // Function calls demonstrating parameter passing
    cout << "Initial value of number = " << number << endl;
    passByValue(number); // Passing by value
    cout << "Value of number after passByValue = " << number << endl;
    passByReference(number); // Passing by reference
    cout << "Value of number after passByReference = " << number << endl;

    // Function call demonstrating return type
    int result = add(5, 3); // Calling the add function
    cout << "Result of adding 5 and 3 = " << result << endl;

    return 0;
}
