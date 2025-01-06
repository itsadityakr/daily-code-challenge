// https://leetcode.com/problems/longest-happy-prefix/description/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> computeLPSArray(string pattern) {
    int m = pattern.length();
    vector<int> lps(m, 0);
    int len = 0, i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                i++;
            }
        }
    }
    return lps;
}

//
// bool KMPSearch(string text, string pattern) {
//     int n = text.length(), m = pattern.length();
//     if (m == 0) return true;
//     vector<int> lps = computeLPSArray(pattern);
//     int i = 0, j = 0;
//     while (i < n) {
//         if (text[i] == pattern[j]) {
//             i++;
//             j++;
//         }
//         if (j == m) {
//             return true;
//         } else if (i < n && text[i] != pattern[j]) {
//             if (j != 0) {
//                 j = lps[j - 1];
//             } else {
//                 i++;
//             }
//         }
//     }
//     return false;
// }
//

string longestPrefix(string s) {
    int n = s.length();
    vector<int> lps = computeLPSArray(s);
    int longestPrefixLength = lps[n - 1];
    return s.substr(0, longestPrefixLength);
}

int main() {
    string s1 = "level";
    string s2 = "ababab";
    cout << "Longest happy prefix of 'level': " << longestPrefix(s1) << endl;
    cout << "Longest happy prefix of 'ababab': " << longestPrefix(s2) << endl;
    // string text = "ABABDABACDABABCABAB", pattern = "ABABCABAB";
    // cout << (KMPSearch(text, pattern) ? "Pattern found" : "Pattern not found") << endl;
    return 0;
}

