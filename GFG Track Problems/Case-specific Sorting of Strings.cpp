// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-Strings/problem/case-specific-sorting-of-strings4845

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n) {
        string lower, upper;

        // Separate lowercase and uppercase characters.
        for (char c : str) {
            if (islower(c)) {
                lower.push_back(c);
            } else {
                upper.push_back(c);
            }
        }

        // Sort the separated strings.
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        // Merge the sorted strings while maintaining the original order.
        string result;
        int i = 0, j = 0;
        for (char c : str) {
            if (islower(c)) {
                result.push_back(lower[i++]);
            } else {
                result.push_back(upper[j++]);
            }
        }

        return result;
    }
};