// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/cip-unordered-set/problem/count-only-repeated2047

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        if (n == 0)
            return {-1, -1};

        int s = 0;
        int e = n - 1;
        while (s < e) {
            int m = (s + e) / 2;

            // if arr[m] = m + arr[0], there is no repeating element in [s..m]
            if (arr[m] >= m + arr[0])
                s = m + 1;

            // if arr[m] < m + arr[0], there is a repeating element in [s..m]
            else
                e = m;
        }

        // Count the frequency of the repeating element
        long count = n - (arr[n - 1] - arr[0]);

        // If count is 1, it means no element is repeating
        if (count == 1)
            return {-1, -1};
        
        return {arr[s], count};
    }
};