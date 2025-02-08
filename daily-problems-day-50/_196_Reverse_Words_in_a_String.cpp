// https://leetcode.com/problems/reverse-words-in-a-string/

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word)
        {
            words.push_back(word);
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

// class Solution
// {
// public:
//     string reverseWords(string s)
//     {
//         removeExtraSpaces(s);
//         reverse(s.begin(), s.end());
//         reverseEachWord(s);
//         return s;
//     }

// private:
//     void removeExtraSpaces(string &s)
//     {
//         int n = s.size(), i = 0, j = 0;
//         while (i < n && s[i] == ' ')
//             i++;
//         while (i < n)
//         {
//             if (s[i] != ' ')
//             {
//                 s[j++] = s[i++];
//             }
//             else if (j > 0 && s[j - 1] != ' ')
//             {
//                 s[j++] = ' ';
//                 while (i < n && s[i] == ' ')
//                     i++;
//             }
//         }
//         if (j > 0 && s[j - 1] == ' ')
//             j--;
//         s.resize(j);
//     }

//     void reverseEachWord(string &s)
//     {
//         int start = 0, end = 0, n = s.size();
//         while (start < n)
//         {
//             while (end < n && s[end] != ' ')
//                 end++;
//             reverse(s.begin() + start, s.begin() + end);
//             start = end + 1;
//             end++;
//         }
//     }
// };
