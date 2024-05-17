// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/maximum-index-1587115620

class Solution{
    public:
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) {
        if (n <= 1)
            return 0;

        // Array to store the minimum element from the left
        int leftMin[n];
        leftMin[0] = a[0];
        for (int i = 1; i < n; ++i)
            leftMin[i] = min(leftMin[i - 1], a[i]);

        // Array to store the maximum element from the right
        int rightMax[n];
        rightMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i)
            rightMax[i] = max(rightMax[i + 1], a[i]);

        int maxDiff = -1;
        int i = 0, j = 0;
        while (i < n && j < n) {
            if (leftMin[i] <= rightMax[j]) {
                maxDiff = max(maxDiff, j - i);
                ++j;
            } else {
                ++i;
            }
        }

        return maxDiff;
    }
};