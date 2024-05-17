// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/trapping-rain-water-1587115621

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long int trappedWater = 0;
        if (n == 0 || n == 1 || n == 2) return 0;
        int leftMax[n], rightMax[n];
        leftMax[0] = arr[0];
        rightMax[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], arr[i]);
            rightMax[n - 1 - i] = max(rightMax[n - i], arr[n - i - 1]);
        }
        for (int i = 0; i < n; i++) {
            trappedWater += min(leftMax[i], rightMax[i]) - arr[i];
        }
        return trappedWater;
    }
};