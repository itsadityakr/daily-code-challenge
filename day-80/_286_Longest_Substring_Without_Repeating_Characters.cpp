// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> lastIndex;
        int maxLen = 0, left = 0;

        for (int right = 0; right < s.length(); right++)
        {
            if (lastIndex.count(s[right]))
            {
                left = max(left, lastIndex[s[right]] + 1);
            }

            lastIndex[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};