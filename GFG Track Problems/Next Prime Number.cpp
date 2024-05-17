// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-flow-function-loop/problem/next-prime-number

#include <cmath>

int nextPrime(int n) {
    // If n is less than or equal to 1, return 2 as the next prime number
    if (n <= 1)
        return 2;
    
    // Start checking for primes from n + 1
    int next = n + 1;
    // Keep iterating until a prime number is found
    while (true) {
        bool isPrime = true;
        // Check if next is divisible by any number from 2 to sqrt(next)
        for (int i = 2; i <= sqrt(next); ++i) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }
        // If next is prime, return it
        if (isPrime)
            return next;
        // Otherwise, move to the next number
        ++next;
    }
}