class Solution
{
public:
    vector<int> assignElements(vector<int> &groups, vector<int> &elements)
    {
        unordered_map<int, int> mp;

        for (int j = 0; j < elements.size(); j++)
        {
            if (mp.find(elements[j]) == mp.end())
            {
                mp[elements[j]] = j;
            }
        }

        vector<int> assigned(groups.size(), -1);

        for (int i = 0; i < groups.size(); i++)
        {
            int minIndex = INT_MAX;

            for (int d = 1; d * d <= groups[i]; d++)
            {
                if (groups[i] % d == 0)
                {
                    if (mp.find(d) != mp.end())
                    {
                        minIndex = min(minIndex, mp[d]);
                    }
                    if (mp.find(groups[i] / d) != mp.end())
                    {
                        minIndex = min(minIndex, mp[groups[i] / d]);
                    }
                }
            }

            if (minIndex != INT_MAX)
            {
                assigned[i] = minIndex;
            }
        }

        return assigned;
    }
};