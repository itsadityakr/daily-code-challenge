#include <iostream>

int main() {
    // Conditional Statements
    
    // if statement
    int number = 10;
    if (number > 0) {
        std::cout << "Number is positive." << std::endl;
    }

    // if-else statement
    int age = 20;
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    // if-else if-else statement
    char grade = 'B';
    if (grade == 'A') {
        std::cout << "Excellent!" << std::endl;
    } else if (grade == 'B') {
        std::cout << "Good job!" << std::endl;
    } else {
        std::cout << "Need improvement." << std::endl;
    }

    // Switch statement
    int choice = 2;
    switch (choice) {
        case 1:
            std::cout << "Option 1 selected." << std::endl;
            break;
        case 2:
            std::cout << "Option 2 selected." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }

    // Loops
    
    // while loop
    int count = 0;
    while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }

    // do-while loop
    int x = 5;
    do {
        std::cout << "Value of x: " << x << std::endl;
        x--;
    } while (x > 0);

    // for loop
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration: " << i << std::endl;
    }

    // Range-based for loop (C++11 onwards)
    int numbers[] = {1, 2, 3, 4, 5};
    for (auto &num : numbers) {
        std::cout << "Number: " << num << std::endl;
    }

    // Jump Statements
    
    // break statement
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        std::cout << "Value of i: " << i << std::endl;
    }

    // continue statement
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            continue; // Skip printing when i equals 3
        }
        std::cout << "Value of i: " << i << std::endl;
    }

    // goto statement (avoided in general practice due to readability concerns)
    int j = 1;
loop:
    std::cout << "Value of j: " << j << std::endl;
    j++;
    if (j <= 3) goto loop;

    return 0;
}