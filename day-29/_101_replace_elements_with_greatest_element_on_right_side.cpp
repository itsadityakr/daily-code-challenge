// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size();
        int greatest = -1;

        for (int i = n - 1; i >= 0; --i)
        {
            int current = arr[i];
            arr[i] = greatest;
            greatest = max(greatest, current);
        }

        return arr;
    }
};