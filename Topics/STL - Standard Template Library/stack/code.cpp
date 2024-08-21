#include <iostream>
#include <stack>
#define endl "\n"
using namespace std;

void explainStack() {
    stack<int> st;

    st.push(1);        // stack: Top -> [1]
    st.push(2);        // stack: Top -> [2, 1]
    st.push(3);        // stack: Top -> [3, 2, 1]
    st.push(4);        // stack: Top -> [4, 3, 2, 1]
    st.emplace(5);     // stack: Top -> [5, 4, 3, 2, 1]

    cout << st.top() << endl; // output -> 5
    
    st.pop();          // stack: Top -> [4, 3, 2, 1]

    cout << st.size() << endl; // output -> 4

    cout << st.empty() << endl; // output -> 0 (false, as stack is not empty)


    // Print full stack
    cout << "Stack elements: ";
    stack<int> temp;
    while (!st.empty()) {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;

    // Restore original stack -> restoring stack is important
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
    //output -> Stack elements: 4 3 2 1

    stack<int> st1;
    st1.swap(st);     // Swaps contents of st1 and st
}

int main() {
    explainStack();
    return 0;
}
