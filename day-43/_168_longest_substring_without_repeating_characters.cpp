// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> lastIndex;
        int maxLength = 0, left = 0, right = 0;

        while (right < s.size())
        {
            char ch = s[right];
            if (lastIndex.count(ch) && lastIndex[ch] >= left)
            {
                left = lastIndex[ch] + 1;
            }
            lastIndex[ch] = right;
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        return maxLength;
    }
};