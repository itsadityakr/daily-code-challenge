// _295_Minimum_Window_Substring.cpp

// https://leetcode.com/problems/minimum-window-substring/description/

class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (s.empty() || t.empty())
            return "";

        unordered_map<char, int> t_count;
        for (char c : t)
            t_count[c]++;

        int left = 0, right = 0, minLen = INT_MAX, minStart = 0;
        int required = t_count.size(), formed = 0;
        unordered_map<char, int> window_count;

        while (right < s.length())
        {
            char c = s[right];
            window_count[c]++;

            if (t_count.count(c) && window_count[c] == t_count[c])
                formed++;

            while (formed == required)
            {
                if (right - left + 1 < minLen)
                {
                    minLen = right - left + 1;
                    minStart = left;
                }

                char leftChar = s[left];
                window_count[leftChar]--;
                if (t_count.count(leftChar) && window_count[leftChar] < t_count[leftChar])
                    formed--;

                left++;
            }
            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};