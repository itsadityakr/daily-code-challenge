// https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    vector<int> leftSmaller(int n, int a[])
    {
        vector<int> result;
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && s.top() >= a[i])
                s.pop();

            if (s.empty())
                result.push_back(-1);
            else
                result.push_back(s.top());

            s.push(a[i]);
        }

        return result;
    }
};