// https://leetcode.com/problems/valid-parentheses/description/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& expr) {
    stack<char> st;

    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string expression;
    cin >> expression;

    if (isBalanced(expression)) {
        cout <<true<< endl;
    } else {
        cout <<false<< endl;
    }

    return 0;
}
