#include <bits/stdc++.h>
using namespace std;

vector<int> getNextPermutation(vector<int> &nums, int n) {
    int index = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        reverse(nums.begin(), nums.end());
        return nums;
    }

    for (int i = n - 1; i > index; i--) {
        if (nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }

    reverse(nums.begin() + index + 1, nums.end());
    return nums;
}

int main() {
    vector<int> A = {1, 2, 3};
    int N = A.size();

    A = getNextPermutation(A, N);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
getNextPermutation Function:

Step 1: Finds the largest index i such that nums[i] < nums[i + 1]. This is the point where the permutation can be incremented.
Step 2: If no such index is found, the array is sorted in descending order, meaning it is the last permutation. Thus, the function reverses the entire array to get the smallest permutation.
Step 3: Finds the smallest index j greater than index such that nums[j] > nums[index] and swaps the values at these indices.
Step 4: Reverses the subarray from index + 1 to the end to get the next smallest lexicographical permutation.
main Function:

Initializes the vector A with a permutation.
Calls getNextPermutation to find the next permutation.
Prints the next permutation to the console.
*/
