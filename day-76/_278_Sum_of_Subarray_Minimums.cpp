// https://leetcode.com/problems/sum-of-subarray-minimums/

class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> ple(n, -1), nle(n, n);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();
            ple[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() &&
                   arr[st.top()] >= arr[i])
                st.pop();
            nle[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long result = 0;
        for (int i = 0; i < n; i++)
        {
            long long left = i - ple[i];
            long long right = nle[i] - i;
            result = (result + arr[i] * left * right) % MOD;
        }

        return result;
    }
};