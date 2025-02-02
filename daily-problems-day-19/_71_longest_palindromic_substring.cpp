// https://leetcode.com/problems/longest-palindromic-substring/description/
#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    int start = 0, maxLength = 1;

    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLength) {
                start = l;
                maxLength = r - l + 1;
            }
            l--;
            r++;
        }
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLength) {
                start = l;
                maxLength = r - l + 1;
            }
            l--;
            r++;
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}
