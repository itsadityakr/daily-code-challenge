// https://leetcode.com/problems/reverse-words-in-a-string/

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n)
        {
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n)
                break;
            int j = i;
            while (j < n && s[j] != ' ')
                j++;
            words.push_back(s.substr(i, j - i));
            i = j;
        }

        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++)
        {
            if (i > 0)
                result += " ";
            result += words[i];
        }

        return result;
    }
};
