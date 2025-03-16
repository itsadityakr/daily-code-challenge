// _292_Number_of_Substrings_Containing_All_Three_Characters.cpp

// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/

class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size(), left = 0, result = 0;
        vector<int> count(3, 0);

        for (int right = 0; right < n; right++)
        {
            count[s[right] - 'a']++;

            while (count[0] > 0 && count[1] > 0 && count[2] > 0)
            {
                result += (n - right);
                count[s[left] - 'a']--;
                left++;
            }
        }

        return result;
    }
};
