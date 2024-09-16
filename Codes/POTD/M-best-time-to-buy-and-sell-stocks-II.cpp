/*__________________________PROBLEM__________________________*/
/*
Best Time to Buy and Sell Stock II
Moderate

Problem statement
You have been given stock values/prices for N number of days. Every i-th day signifies the price of a stock on that day. Your task is to find the maximum profit which you can make by buying and selling the stocks.

Note :
You may make as many transactions as you want but can not have more than one transaction at a time i.e, if you have the stock, you need to sell it first, and then only you can buy it again.
Detailed explanation ( Input/output format, Notes, Images )

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1 :
1
7
1 2 3 4 5 6 7
Sample Output 1 :
6
Explanation :
We can make the maximum profit by buying the stock on the first day and selling it on the last day.

Sample Input 2 :
1
7
7 6 5 4 3 2 1
Sample Output 2 :
0
Explanation :
We can make the maximum profit by not buying the stock.
*/

/*__________________________PROGRAM__________________________*/

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
In this case:

Buy on day 0 (price 1) and sell on day 1 (price 2): Profit = 2 - 1 = 1
Buy on day 1 (price 2) and sell on day 2 (price 3): Profit = 3 - 2 = 1
Buy on day 3 (price 0) and sell on day 4 (price 4): Profit = 4 - 0 = 4
Buy on day 4 (price 4) and sell on day 5 (price 6): Profit = 6 - 4 = 2
*/
