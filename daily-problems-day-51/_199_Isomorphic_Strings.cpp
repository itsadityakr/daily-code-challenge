// https://leetcode.com/problems/isomorphic-strings/

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mapS, mapT;

        for (int i = 0; i < s.length(); i++)
        {
            char chS = s[i], chT = t[i];

            if (mapS.count(chS) && mapS[chS] != chT)
                return false;
            if (mapT.count(chT) && mapT[chT] != chS)
                return false;

            mapS[chS] = chT;
            mapT[chT] = chS;
        }

        return true;
    }
};
