// https://leetcode.com/problems/valid-anagram/

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size())
                return false;
            unordered_map<char, int> freq;
            for (char ch : s) {
                freq[ch]++;
            }
            for (char ch : t) {
                if (freq[ch] == 0)
                    return false;
                freq[ch]--;
            }
            return true;
        }
    };
