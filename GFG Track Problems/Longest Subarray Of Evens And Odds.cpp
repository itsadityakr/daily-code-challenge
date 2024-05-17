// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/longest-subarray-of-evens-and-odds

class Solution {
public:
    // Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) { 
        // Initializing dp
        int dp = 1;

        // Initializing ans to store the final answer
        int ans = 1;

        // Traversing the array from index 1 to N - 1
        for (int i = 1; i < n; i++) {
            // Checking if current and previous elements have different parity
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || 
                (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
                // Updating dp with (previous dp value) + 1
                dp = dp + 1;

                // Storing max element so far to ans
                ans = max(ans, dp);
            } else {
                // If the parity is the same, reset dp to 1
                dp = 1;
            }
        }

        // Returning the final answer
        return ans;
    } 
};