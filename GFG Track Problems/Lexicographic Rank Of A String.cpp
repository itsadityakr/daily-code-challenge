// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Strings/problem/rank-the-permutations-1587115621

#define MOD 1000000007
class Solution {
  public:
    // Function to find lexicographic rank of a string.


// Utility function to calculate factorial % MOD
long long factorial(int n) {
    static vector<long long> fact(256, 0);
    if (fact[0] == 0) {
        fact[0] = 1;
        for (int i = 1; i < 256; ++i) {
            fact[i] = (fact[i-1] * i) % MOD;
        }
    }
    return fact[n];
}

// Function to find lexicographic rank of a string.
int findRank(string S) {
    int n = S.length();
    vector<int> count(256, 0);

    // Count occurrences of each character
    for (char c : S) {
        if (++count[c] > 1) {
            return 0; // If character is repeated, return 0
        }
    }

    long long rank = 1;

    for (int i = 0; i < n; ++i) {
        // Count smaller characters on the right of S[i]
        int smaller = 0;
        for (int j = 0; j < S[i]; ++j) {
            smaller += count[j];
        }

        // Update rank based on smaller characters
        rank = (rank + smaller * factorial(n - i - 1)) % MOD;

        // Reduce count of current character
        count[S[i]]--;
    }

    return (int)rank;
}
};