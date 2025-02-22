// https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-number-of-substrings

class Solution
{
public:
    int countAtMostKDistinct(string &s, int k)
    {
        if (k == 0)
            return 0;

        unordered_map<char, int> freq;
        int left = 0, count = 0, distinctCount = 0;

        for (int right = 0; right < s.size(); right++)
        {
            if (++freq[s[right]] == 1)
                distinctCount++;

            while (distinctCount > k)
            {
                if (--freq[s[left]] == 0)
                    distinctCount--;
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }

    int countSubstr(string &s, int k)
    {
        return countAtMostKDistinct(s, k) - countAtMostKDistinct(s, k - 1);
    }
};