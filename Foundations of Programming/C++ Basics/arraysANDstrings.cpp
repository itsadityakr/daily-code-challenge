#include <iostream>
#include <algorithm> // for sort
#include <string>    // for string
using namespace std;

// Function to demonstrate operations on arrays
void arrayOperations() {
    // Declaration and initialization of an array of integers
    int numbers[5] = {4, 2, 1, 5, 3};

    // Accessing elements of the array
    cout << "Array elements:";
    for (int i = 0; i < 5; ++i) {
        cout << " " << numbers[i];
    }
    cout << endl;

    // Modifying array elements
    numbers[1] = 10;
    cout << "Modified array:";
    for (int i = 0; i < 5; ++i) {
        cout << " " << numbers[i];
    }
    cout << endl;

    // Sorting array elements
    sort(numbers, numbers + 5);
    cout << "Sorted array:";
    for (int i = 0; i < 5; ++i) {
        cout << " " << numbers[i];
    }
    cout << endl;

    // Size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Size of numbers array: " << size << endl;
}

// Function to demonstrate operations on strings
void stringOperations() {
    // Declaration and initialization of strings
    char greeting[] = "Hello, World!"; // C-style string
    string message = "Welcome to C++!"; // C++ string object

    // Accessing characters in a string
    cout << "First character of greeting: " << greeting[0] << endl;
    cout << "Fifth character of message: " << message[4] << endl;

    // Concatenating strings
    string fullName = message + " Programming";
    cout << "Concatenated string: " << fullName << endl;

    // Substring extraction
    string subStr = fullName.substr(0, 7); // Extracts substring from index 0 to 6
    cout << "Substring: " << subStr << endl;

    // Finding characters in a string
    size_t found = fullName.find('g'); // Finds the first occurrence of 'g' in fullName
    if (found != string::npos) {
        cout << "'g' found at position: " << found << endl;
    } else {
        cout << "'g' not found in string." << endl;
    }

    // Length of a string
    int len = fullName.length(); // Gets the length of the string
    cout << "Length of fullName string: " << len << endl;
}

int main() {
    cout << "Demonstrating Arrays:" << endl;
    arrayOperations();

    cout << "\nDemonstrating Strings:" << endl;
    stringOperations();

    return 0;
}
