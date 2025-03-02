// https://www.geeksforgeeks.org/problems/power-set4302/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    vector<string> AllPossibleStrings(string s)
    {
        int n = s.length();
        vector<string> result;

        int totalSubsets = (1 << n);
        for (int i = 1; i < totalSubsets; i++)
        {
            string subseq = "";

            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    subseq += s[j];
                }
            }

            result.push_back(subseq);
        }

        sort(result.begin(), result.end());

        return result;
    }
};