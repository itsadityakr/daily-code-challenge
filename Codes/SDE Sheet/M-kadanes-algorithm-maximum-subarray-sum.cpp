#include<iostream>
#include<vector>
#include <climits> 
using namespace std;
#define endl "\n"

/* //Brute Force TC-> O(n^3), SC-> O(1)

long long maxSubarraySum(const vector<int>& arr, int n) {
    long long sum,max_e = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            sum=0;
            for (int k = i; k <= j; ++k) {
                sum+=arr[k];
            }
            max_e = max(max_e, sum);
        }
    }
    return max_e;
}
*/

/* //Better Approach TC-> O(n^2), SC-> O(1)

long long maxSubarraySum(const vector<int>& arr, int n) {
    long long sum,max_e = 0;
    for (int i = 0; i < n; ++i) {
        sum=0;
        for (int j = i; j < n; ++j) {
            sum+=arr[k];
            max_e = max(max_e, sum);
        }
    }
    return max_e;
}
*/

//Optimal Approach TC-> O(n), SC-> O(1) [KADANE's Algorithm]

/*long long maxSubarraySum(const vector<int>& arr, int n) {
    long long maxi = 0; // Initialize maxi to the smallest possible value
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add current element to the sum
        if (sum > maxi) {
            maxi = sum; // Update maxi if the current sum is larger
        }
        if (sum < 0) {
            sum = 0; // Reset sum if it becomes negative
        }
    }

    // To consider the sum of the empty subarray
    // Uncomment the following line if you need to account for an empty subarray.
    // if (maxi < 0) maxi = 0;

    return maxi; // Return the maximum subarray sum
}
*/

//Print Sub Array Optimal Approach TC-> O(n), SC-> O(1)
long long maxSubarraySum(const vector<int>& arr, int n) {
    long long maxi = LLONG_MIN; // Initialize maxi to the smallest possible value
    long long sum = 0;

    int start = 0; // Starting index of the current subarray
    int ansStart = -1, ansEnd = -1; // Indices of the maximum subarray

    for (int i = 0; i < n; i++) {
        if (sum == 0) {
            start = i; // Update start index when the sum is reset
        }

        sum += arr[i]; // Add current element to sum

        if (sum > maxi) {
            maxi = sum; // Update maxi if the current sum is greater
            ansStart = start; // Update the starting index of the maximum subarray
            ansEnd = i; // Update the ending index of the maximum subarray
        }

        // If sum < 0: reset sum to 0 and update start index
        if (sum < 0) {
            sum = 0;
        }
    }

    // Print the subarray with the maximum sum
    cout << "The subarray with the maximum sum is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i];
        if (i < ansEnd) cout << ", "; // Add a comma separator for readability
    }
    cout << "]\n";

    // To consider the sum of the empty subarray
    // Uncomment the following check if needed:
    // if (maxi < 0) maxi = 0;

    return maxi; // Return the maximum subarray sum
}

int main()
{
    vector<int>arr={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    cout<<maxSubarraySum(arr,n);
    return 0;
}

/*
Initialization:

maxi is initialized to a very small value (-∞) to ensure any subarray sum will be larger.
sum starts at 0, accumulating the sum of the current subarray.
start is used to track the beginning of the current subarray.
ansStart and ansEnd track the start and end indices of the subarray with the maximum sum.
Iterate Through Array:

For each element, check if sum is 0. If it is, update start to the current index.
Add the current element to sum.
If sum exceeds maxi, update maxi, ansStart, and ansEnd.
If sum becomes negative, reset it to 0, indicating the end of the current subarray and the potential start of a new one.
Print the Subarray:

After identifying the maximum subarray, loop from ansStart to ansEnd and print each element.
Return:

The function returns maxi, the sum of the maximum subarray.
*/