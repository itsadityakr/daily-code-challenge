// https://leetcode.com/problems/minimum-window-substring/description/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string minWindow(string s, string t) {
    if (s.empty() || t.empty()) {
        return "";
    }

    unordered_map<char, int> tFreq;
    for (char c : t) {
        tFreq[c]++;
    }

    unordered_map<char, int> windowFreq;
    int left = 0, right = 0;
    int required = tFreq.size();
    int formed = 0;
    int minLen = INT_MAX;
    int minStart = 0;

    while (right < s.size()) {
        char c = s[right];
        windowFreq[c]++;

        if (tFreq.count(c) && windowFreq[c] == tFreq[c]) {
            formed++;
        }

        while (left <= right && formed == required) {
            char startChar = s[left];

            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }

            windowFreq[startChar]--;
            if (tFreq.count(startChar) && windowFreq[startChar] < tFreq[startChar]) {
                formed--;
            }

            left++;
        }

        right++;
    }

    return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
}

int main() {
    string s, t;
    cin >> s >> t;

    string result = minWindow(s, t);
    cout << result << endl;

    return 0;
}
