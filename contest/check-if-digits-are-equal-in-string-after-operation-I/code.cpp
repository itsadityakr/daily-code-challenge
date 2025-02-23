class Solution
{
public:
    bool hasSameDigits(string s)
    {
        while (s.length() > 2)
        {
            string newS = "";
            for (size_t i = 1; i < s.length(); i++)
            {
                int sC = ((s[i - 1] - '0') + (s[i] - '0')) % 10;
                newS += (sC + '0');
            }
            s = newS;
        }
        return s[0] == s[1];
    }
};