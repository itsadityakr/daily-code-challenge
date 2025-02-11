#include<bits/stdc++.h> // Includes all standard libraries
#define endl "\n"       // Defines endl as a newline for easier use
using namespace std;

class Solution {
public:
    // Function to compute the prefix sum array
    vector<int> prefixSumCalculator(vector<int> &nums) {
        // Create a prefix sum array of the same size as nums, initialized to 0
        vector<int> prefixSumArray(nums.size(), 0);

        // The first element of the prefix sum array is the same as the first element of nums
        prefixSumArray[0] = nums[0];

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Compute the prefix sum at index i by adding the current element to the previous prefix sum
            prefixSumArray[i] = prefixSumArray[i - 1] + nums[i];
        }

        // Return the computed prefix sum array
        return prefixSumArray;
    }

    // Function to compute the prefix sum in-place (modifies the input array)
    void prefixSumCalculatorInPlace(vector<int> &nums) {
        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Update the current element by adding the previous element (cumulative sum)
            nums[i] += nums[i - 1];
        }
        // The input array nums now contains the prefix sums
    }

    // Function to compute the sum of a subarray from index left to right
    int sumOfSubQueries(vector<int> &nums, int left, int right) {
        // If left is 0, the sum is simply the prefix sum at index right
        if (left == 0) {
            return nums[right];
        }
        // Otherwise, compute the sum as prefix[right] - prefix[left - 1]
        return nums[right] - nums[left - 1];
    }
};

int main() {
    Solution sol; // Create an object of the Solution class
    vector<int> nums = {1, 2, 3, 4, 5}; // Input array

    // Test prefixSumCalculator
    vector<int> prefix = sol.prefixSumCalculator(nums); // Compute prefix sum array
    cout << "Prefix Sum Array: ";
    for (int num : prefix) {
        cout << num << " "; // Print the prefix sum array
    }
    cout << endl;

    // Test prefixSumCalculatorInPlace
    sol.prefixSumCalculatorInPlace(nums); // Compute prefix sum in-place
    cout << "In-Place Prefix Sum Array: ";
    for (int num : nums) {
        cout << num << " "; // Print the modified array (now contains prefix sums)
    }
    cout << endl;

    // Test sumOfSubQueries
    int sum = sol.sumOfSubQueries(nums, 1, 3); // Compute sum of subarray from index 1 to 3
    cout << "Sum of subarray from index 1 to 3: " << sum << endl;

    return 0; // End of program
}