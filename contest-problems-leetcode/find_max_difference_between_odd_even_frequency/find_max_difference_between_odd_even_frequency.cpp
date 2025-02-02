class Solution
{
public:
    int maxDifference(string s)
    {
        vector<int> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int min_even = INT_MAX;
        int max_odd = INT_MIN;

        for (int count : freq)
        {
            if (count == 0)
                continue;

            if (count % 2 == 0)
            {
                min_even = min(min_even, count);
            }
            else
            {
                max_odd = max(max_odd, count);
            }
        }

        return max_odd - min_even;
    }
}