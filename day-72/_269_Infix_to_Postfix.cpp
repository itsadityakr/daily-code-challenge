// https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

class Solution
{
public:
    static int precedence(char op)
    {
        if (op == '^')
        {
            return 3;
        }
        if (op == '*' || op == '/')
        {
            return 2;
        }
        if (op == '+' || op == '-')
        {
            return 1;
        }
        return 0;
    }

    static bool isOperator(char c)
    {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            return true;
        }
        return false;
    }

    string infixToPostfix(string &s)
    {
        string result;
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];

            if (isalnum(c))
            {
                result = result + c;
            }
            else if (c == '(')
            {
                st.push(c);
            }
            else if (c == ')')
            {
                while (st.empty() == false && st.top() != '(')
                {
                    result = result + st.top();
                    st.pop();
                }
                st.pop();
            }
            else if (isOperator(c) == true)
            {
                while (st.empty() == false && precedence(st.top()) >= precedence(c))
                {
                    result = result + st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (st.empty() == false)
        {
            result = result + st.top();
            st.pop();
        }

        return result;
    }
};