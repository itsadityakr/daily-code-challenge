#include <iostream>
#include <vector>
using namespace std;

long getMaximumProfit(long* values, int n) {
    if (n == 0) return 0;
    long maxProfit = 0;
    for (int i = 1; i < n; ++i) {
        if (values[i] > values[i - 1]) {
            maxProfit += values[i] - values[i - 1];
        }
    }
    return maxProfit;
}

int main() {
    long values[] = {1, 2, 3, 0, 4, 6}; // Example stock prices
    int n = sizeof(values) / sizeof(values[0]);
    
    long maxProfit = getMaximumProfit(values, n);
    
    cout << "Maximum Profit: " << maxProfit << endl;
    
    return 0;
}

/*
getMaximumProfit Function:

Purpose: Calculates the maximum profit from buying and selling stocks on given days.
Algorithm:
Iterates through the array of stock prices.
Adds the difference between current and previous day prices to maxProfit if the current price is higher (indicating a profitable transaction).
Returns the accumulated maxProfit.
main Function:

Initializes an example array of stock prices.
Calculates the maximum profit by calling getMaximumProfit.
Prints the maximum profit to the console.
*/
