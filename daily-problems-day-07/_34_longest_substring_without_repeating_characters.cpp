// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include<iostream>
#include<String>
#include<vector>

int lengthOfLongestSubstring(string str) {
    int longest = 0, windowStart = -1;
    vector<int> charIndex(256, -1);
    for (int windowEnd = 0; windowEnd < str.size(); ++windowEnd) {
        if (charIndex[str[windowEnd]] > windowStart) {
            windowStart = charIndex[str[windowEnd]];
        }
        charIndex[str[windowEnd]] = windowEnd;
        longest = max(longest, windowEnd - windowStart);
    }
    return longest;
}

int main(){
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}