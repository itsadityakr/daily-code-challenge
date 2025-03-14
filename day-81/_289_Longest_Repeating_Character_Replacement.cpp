// _289_Longest_Repeating_Character_Replacement.cpp

// https://leetcode.com/problems/longest-repeating-character-replacement/

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int left = 0;
        int right = 0;
        int maxFrequency = 0;
        int length = s.length();
        int result = 0;
        vector<int> count(26, 0);

        while (right < length)
        {
            count[s[right] - 'A']++;
            maxFrequency = max(maxFrequency, count[s[right] - 'A']);

            while ((right - left + 1) - maxFrequency > k)
            {
                count[s[left] - 'A']--;
                left++;
            }

            result = max(result, right - left + 1);
            right++;
        }

        return result;
    }
};