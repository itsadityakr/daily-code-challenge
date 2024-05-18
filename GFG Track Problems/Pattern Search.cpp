// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Strings/problem/distinct-pattern-search-1587115620

class Solution {
public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) {
        int M = pat.length();
        int N = txt.length();

        // Calculate the lps array (Longest Prefix which is also a Suffix)
        vector<int> lps(M, 0);
        computeLPSArray(pat, M, lps);

        int i = 0; // Index for txt[]
        int j = 0; // Index for pat[]
        while (i < N) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }
            if (j == M) {
                return true; // Pattern found
            } else if (i < N && pat[j] != txt[i]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return false; // Pattern not found
    }

private:
    // Function to compute the lps array for the given pattern.
    void computeLPSArray(string pat, int M, vector<int>& lps) {
        int len = 0; // Length of the previous longest prefix suffix
        lps[0] = 0; // lps[0] is always 0

        int i = 1;
        while (i < M) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
};
