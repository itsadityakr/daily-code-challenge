// https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1

class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        stack<string> s;
        int length = pre_exp.size();

        for (int i = length - 1; i >= 0; i--)
        {
            char ch = pre_exp[i];

            if (isalnum(ch))
            {
                string operand(1, ch);
                s.push(operand);
            }
            else
            {
                string operand1 = s.top();
                s.pop();
                string operand2 = s.top();
                s.pop();
                string expression = "(" + operand1 + ch + operand2 + ")";
                s.push(expression);
            }
        }
        return s.top();
    }
};