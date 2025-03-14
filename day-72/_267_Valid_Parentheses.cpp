// https://leetcode.com/problems/valid-parentheses/

class Solution
{
public:
    bool isValid(const string &expr)
    {
        stack<char> st;

        for (char c : expr)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else if (c == ')' || c == ']' || c == '}')
            {
                if (st.empty())
                    return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};