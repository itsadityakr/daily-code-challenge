// https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1

class Solution
{
public:
    string postToPre(string post_exp)
    {
        stack<string> s;
        int length = post_exp.size();

        for (int i = 0; i < length; i++)
        {
            char ch = post_exp[i];

            if (isalnum(ch))
            {
                string operand(1, ch);
                s.push(operand);
            }
            else
            {
                string operand2 = s.top();
                s.pop();
                string operand1 = s.top();
                s.pop();
                string expression = ch + operand1 + operand2;
                s.push(expression);
            }
        }
        return s.top();
    }
};