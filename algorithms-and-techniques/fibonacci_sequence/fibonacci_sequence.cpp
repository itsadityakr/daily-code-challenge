#include <iostream>
#include <unordered_map>
using namespace std;

// Function 1: Iterative Approach
int fibonacciIterative(int n) {
    if (n <= 1) return n; // Base case

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b; // Compute the next Fibonacci number
        a = b;     // Update the previous two numbers
        b = c;
    }
    return b; // Return the nth Fibonacci number
}

// Function 2: Recursive Approach
int fibonacciRecursive(int n) {
    if (n <= 1) return n; // Base case
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive case
}

// Function 3: Memoization (Optimized Recursion)
unordered_map<int, int> cache; // To store computed Fibonacci numbers
int fibonacciMemoized(int n) {
    if (n <= 1) return n; // Base case
    if (cache.find(n) != cache.end()) return cache[n]; // Check if already computed

    cache[n] = fibonacciMemoized(n - 1) + fibonacciMemoized(n - 2); // Store the result
    return cache[n]; // Return the computed value
}

// Function 4: Space-Optimized Iterative Approach
int fibonacciSpaceOptimized(int n) {
    if (n <= 1) return n; // Base case

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b; // Compute the next Fibonacci number
        a = b;         // Update the previous two numbers
        b = c;
    }
    return b; // Return the nth Fibonacci number
}

// Function 5: Print Fibonacci Sequence
void printFibonacciSequence(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout << a << " "; // Print the current Fibonacci number
        int c = a + b;    // Compute the next Fibonacci number
        a = b;            // Update the previous two numbers
        b = c;
    }
    cout << endl;
}

// Main Function
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Call all functions
    cout << "Iterative: Fibonacci(" << n << ") = " << fibonacciIterative(n) << endl;
    cout << "Recursive: Fibonacci(" << n << ") = " << fibonacciRecursive(n) << endl;
    cout << "Memoized: Fibonacci(" << n << ") = " << fibonacciMemoized(n) << endl;
    cout << "Space-Optimized: Fibonacci(" << n << ") = " << fibonacciSpaceOptimized(n) << endl;

    // Print the Fibonacci sequence
    printFibonacciSequence(n);

    return 0;
}