#include <bits/stdc++.h> // Includes all standard libraries
#define endl "\n"        // Defines endl as a newline for easier use
using namespace std;

class Solution
{
public:
    // Function to find the majority element using Boyer-Moore Voting Algorithm
    int boyerMooreVotingAlgorithm_Nby2(vector<int> &nums)
    {
        int count = 0;      // Counter for the current candidate
        int candidate = -1; // Variable to store the current candidate for majority element

        // First pass: Find a candidate for the majority element
        for (int num : nums)
        {
            if (count == 0)
            {
                // If count is 0, set the current number as the candidate
                candidate = num;
                count = 1;
            }
            else if (num == candidate)
            {
                // If the current number is the same as the candidate, increment the count
                count++;
            }
            else
            {
                // If the current number is different, decrement the count
                count--;
            }
        }

        // Second pass: Verify if the candidate is indeed the majority element
        count = 0;
        for (int num : nums)
        {
            if (num == candidate)
            {
                count++;
            }
        }

        // Check if the candidate appears more than n/2 times
        if (count > nums.size() / 2)
        {
            return candidate; // Return the majority element
        }
        return -1; // If no majority element found, return -1
    }
};

int main()
{
    Solution sol;

    // Example usage of the Boyer-Moore Voting Algorithm
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    // Call the function to find the majority element
    int majorityElement = sol.boyerMooreVotingAlgorithm_Nby2(nums);

    // Output the result
    if (majorityElement != -1)
    {
        cout << "The majority element is: " << majorityElement << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}

// //     vector<int> boyerMooreVotingAlgorithm_NbyK(vector<int> &nums, int k)
// {
//     // Edge case: If k is less than 2, return an empty vector
//     if (k < 2)
//         return {};

//     // Step 1: Initialize candidates and their counts
//     unordered_map<int, int> candidates; // Key: candidate, Value: count

//     // First Pass: Find potential candidates
//     for (int num : nums)
//     {
//         // If the number is already a candidate, increment its count
//         if (candidates.find(num) != candidates.end())
//         {
//             candidates[num]++;
//         }
//         // If there are fewer than k-1 candidates, add this number as a new candidate
//         else if (candidates.size() < k - 1)
//         {
//             candidates[num] = 1;
//         }
//         // Otherwise, decrement the count of all candidates
//         else
//         {
//             for (auto it = candidates.begin(); it != candidates.end();)
//             {
//                 it->second--;
//                 if (it->second == 0)
//                 {
//                     it = candidates.erase(it); // Remove candidate if count drops to 0
//                 }
//                 else
//                 {
//                     ++it;
//                 }
//             }
//         }
//     }

//     // Step 2: Verify the candidates
//     vector<int> result;
//     for (auto &candidate : candidates)
//     {
//         int count = 0;
//         for (int num : nums)
//         {
//             if (num == candidate.first)
//             {
//                 count++;
//             }
//         }
//         // If the candidate appears more than n/k times, add it to the result
//         if (count > nums.size() / k)
//         {
//             result.push_back(candidate.first);
//         }
//     }

//     return result;
// }
// }
// ;