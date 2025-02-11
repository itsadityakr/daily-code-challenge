int gcd(int x,y){
    while(x!=0){
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    return x;
}

int extendedGCD(int a, int b, int &x, int &y) {
    // Base case: If b is 0, the GCD is a, and we can set x = 1 and y = 0.
    // This is because: a * 1 + 0 * 0 = a (which is the GCD).
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    // Recursive case:
    // We call the function again with b and the remainder of a % b.
    // This is the same as the Euclidean Algorithm, but we also keep track of x1 and y1,
    // which are the coefficients for the equation: b * x1 + (a % b) * y1 = GCD(b, a % b).
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);

    // After the recursive call, we update x and y using the following formulas:
    // x = y1 (coefficient of b from the previous step)
    // y = x1 - (a / b) * y1 (coefficient of a % b from the previous step)
    // This ensures that the equation a * x + b * y = GCD(a, b) holds true.
    x = y1;
    y = x1 - (a / b) * y1;

    // Return the GCD of a and b.
    return gcd;
}