// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/rearrange-an-array-with-o1-extra-space3142

class Solution{
public:
    // Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    // with O(1) extra space.
    void arrange(long long arr[], int n) {
        for (int i = 0; i < n; i++) {
            // Store the new value at arr[i]
            arr[i] += (arr[arr[i]] % n) * n;
        }
        // Extract the new values from the modified array
        for (int i = 0; i < n; i++) {
            arr[i] /= n;
        }
    }
};