// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Strings/problem/given-two-strings-find-if-first-string-is-a-subsequence-of-second

#include <string>
using namespace std;

class Solution {
public:
    // Function to check if string A is a subsequence of string B.
    bool isSubSequence(string A, string B) {
        int i = 0, j = 0;
        int m = A.length(), n = B.length();

        // Traverse both strings
        while (i < m && j < n) {
            // If current characters match, move to next character in A
            if (A[i] == B[j]) {
                i++;
            }
            // Move to next character in B
            j++;
        }

        // If all characters of A were found in B in the same order, return true
        return i == m;
    }
};