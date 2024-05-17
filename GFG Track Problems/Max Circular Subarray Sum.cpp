// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/max-circular-subarray-sum-1587115620

class Solution {
public:
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num) {
        int maxSum = kadane(arr, num);
        
        if (maxSum < 0)
            return maxSum;

        int totalSum = 0;
        for (int i = 0; i < num; i++)
            totalSum += arr[i];

        // Calculate the minimum subarray sum
        int minSum = kadaneMin(arr, num);

        // Calculate the maximum sum of a circular subarray
        int circularSum = totalSum - minSum;

        // Return the maximum of the two sums
        return max(maxSum, circularSum);
    }

private:
    int kadane(int arr[], int num) {
        int maxSum = arr[0];
        int currSum = arr[0];

        for (int i = 1; i < num; i++) {
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }

    int kadaneMin(int arr[], int num) {
        int minSum = arr[0];
        int currSum = arr[0];

        for (int i = 1; i < num; i++) {
            currSum = min(arr[i], currSum + arr[i]);
            minSum = min(minSum, currSum);
        }

        return minSum;
    }
};
