#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr, int n) {
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    
    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 10};
    int n = arr.size();
    vector<int> result = nextGreaterElement(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Initialization:

result is a vector initialized with -1 for all elements. This will eventually hold the next greater element for each position.
s is a stack used to keep track of indices of the elements in arr.
Processing:

The code iterates through each element of the array.
For each element, it checks if the current element is greater than the element corresponding to the index stored at the top of the stack.
If so, it updates the result for that index and pops the index from the stack.
It then pushes the current index onto the stack.
Result:

After processing all elements, the result vector contains the next greater element for each position in arr. If no greater element exists, it remains -1.
Example
Given arr = [4, 5, 2, 10], the function would return [5, 10, 10, -1]:

For 4, the next greater element is 5.
For 5, the next greater element is 10.
For 2, the next greater element is 10.
For 10, there is no greater element, so it remains -1.
*/