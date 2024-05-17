// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Arrays/problem/-rearrange-array-alternately-1587115620

class Solution{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange the array elements alternately.
    void rearrange(long long *arr, int n) {
        // Initialize pointers
        int left = 0, right = n - 1;

        // Store the maximum and minimum elements
        long long max_elem = arr[n - 1] + 1;
        long long min_elem = arr[0] - 1;

        // Rearrange the array alternatively
        for (int i = 0; i < n; i++) {
            // Assign max element to even indices
            if (i % 2 == 0) {
                arr[i] += (arr[right--] % max_elem) * max_elem;
            }
            // Assign min element to odd indices
            else {
                arr[i] += (arr[left++] % max_elem) * max_elem;
            }
        }

        // Assign rearranged values to array
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] / max_elem;
        }
    }
};


// } Driver Code Ends