// https://leetcode.com/problems/longest-common-prefix/

class Solution
{
public:
    bool isCommonPrefix(vector<string> &strs, int length)
    {
        string prefix = strs[0].substr(0, length);
        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i].substr(0, length) != prefix)
            {
                return false;
            }
        }
        return true;
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        int left = 0, right = strs[0].size();
        while (left < right)
        {
            int mid = left + (right - left + 1) / 2;
            if (isCommonPrefix(strs, mid))
            {
                left = mid;
            }
            else
            {
                right = mid - 1;
            }
        }
        return strs[0].substr(0, left);
    }
};
