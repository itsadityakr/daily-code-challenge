#include<iostream>  // Include the input/output stream library
#define endl "\n"  // Define endl as a newline character (for readability and consistency)
#include <cstring>  // For string manipulation functions like strcpy, strcat, strlen
using namespace std;  // Use the standard namespace

int main() {
    char ch[10] = "John";  // Declare and initialize a character array of size 10
                             // The string "John" is stored in the first 4 elements
                             // The remaining elements are filled with null characters '\0'

    cout << "Name: " << ch << endl;  // Print the content of the character array

    // 1. Basic Initialization and Output
    char greeting[20] = "Hello, World!";  // Declare and initialize a character array
    cout << "Greeting: " << greeting << endl;

    // 2. Character Array Without Initialization
    char message[20];  // Declare a character array without initializing it
    strcpy(message, "Hello, C++!");  // Copy a string into the character array
    cout << "Message: " << message << endl;

    // 3. Reading a String from Input
    char name[30];  // Declare a character array to hold a name
    cout << "Enter your name: ";
    cin.getline(name, sizeof(name));  // Read a line of input into the character array
    cout << "Hello, " << name << "!" << endl;

    // 4. Copying and Concatenating Strings
    char firstName[20] = "John";
    char lastName[20] = "Doe";
    char fullName[40];  // Array to hold the concatenated string

    strcpy(fullName, firstName);  // Copy firstName to fullName
    strcat(fullName, " ");        // Concatenate a space to fullName
    strcat(fullName, lastName);   // Concatenate lastName to fullName
    cout << "Full Name: " << fullName << endl;

    // 5. Character Array with Manual Null-Termination
    char text[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // Explicitly include the null terminator
    cout << "Text: " << text << endl;

    // 6. Modifying Elements of a Character Array
    char phrase[20] = "OpenAI";  // Declare and initialize a character array
    phrase[0] = 'O';            // Modify elements of the array
    phrase[1] = 'p';
    phrase[2] = 'e';
    phrase[3] = 'n';
    phrase[4] = 'C';
    phrase[5] = 'H';
    phrase[6] = 'A';
    phrase[7] = 'I';
    phrase[8] = '\0';          // Null terminator to mark the end of the string
    cout << "Modified Phrase: " << phrase << endl;

    return 0;  // Return 0 to indicate successful execution
}