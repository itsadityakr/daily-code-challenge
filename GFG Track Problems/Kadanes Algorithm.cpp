// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/kadanes-algorithm-1587115620

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){
        long long int ans = -10000000, max = 0;
        
        for(long long int i = 0; i < n; i++)
        {
            max = max + a[i];
            //cout << max << " ";
            if(ans <= max) ans = max;
            if(max < 0) max = 0;
        }
        return ans;
    }
};