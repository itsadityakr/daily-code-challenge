#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;

    for (const string &token : tokens)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (token == "+")
                st.push(a + b);
            else if (token == "-")
                st.push(a - b);
            else if (token == "*")
                st.push(a * b);
            else if (token == "/")
                st.push(a / b);
        }
        else
        {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"}; // Example: (2 + 1) * 3
    cout << evalRPN(tokens) << endl;

    vector<string> tokens2 = {"4", "13", "5", "/", "+"}; // Example: 4 + (13 / 5)
    cout << evalRPN(tokens2) << endl;

    vector<string> tokens3 = {"10", "6", "9", "3", "/", "-", "*", "11", "+", "17", "5", "+", "*"}; // Complex expression
    cout << evalRPN(tokens3) << endl;

    return 0;
}
