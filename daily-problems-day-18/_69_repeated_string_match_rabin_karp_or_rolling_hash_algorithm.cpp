// https://leetcode.com/problems/repeated-string-match/

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

const int d = 256;
const int q = 101;

bool rabinKarpSubstring(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    int patternHash = 0;
    int textHash = 0;
    int h = 1;

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;
    for (int i = 0; i < m; i++)
    {
        patternHash = (d * patternHash + pattern[i]) % q;
        textHash = (d * textHash + text[i]) % q;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (patternHash == textHash)
        {
            bool match = true;
            for (int j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                {
                    match = false;
                    break;
                }
            }
            if (match)
            {
                return true;
            }
        }

        if (i < n - m)
        {
            textHash = (d * (textHash - text[i] * h) + text[i + m]) % q;
            if (textHash < 0)
                textHash = (textHash + q);
        }
    }
    return false;
}

int repeatedStringMatch(string a, string b)
{
    int lenA = a.size(), lenB = b.size(),
        repeatCount = (lenB + lenA - 1) / lenA;
    string repeatedA = "";
    for (int i = 0; i < repeatCount; i++)
        repeatedA += a;
    if (rabinKarpSubstring(repeatedA, b))
        return repeatCount;
    repeatedA += a;
    if (rabinKarpSubstring(repeatedA, b))
        return repeatCount + 1;
    return -1;
}

int main() {
    string a = "abcd", b = "cdabcdab";
    cout << repeatedStringMatch(a, b) << endl;

    a = "a", b = "aa";
    cout << repeatedStringMatch(a, b) << endl;

    a = "abc", b = "xyz";
    cout << repeatedStringMatch(a, b) << endl;

    return 0;
}