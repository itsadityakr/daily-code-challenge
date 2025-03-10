// https://leetcode.com/problems/sum-of-subarray-ranges/

class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        int n = nums.size();
        long long res = 0;

        vector<int> prevSmaller(n, -1), nextSmaller(n, n);
        stack<int> st;

        for (int i = 0; i < n; ++i)
        {
            while (!st.empty() && nums[st.top()] > nums[i])
            {
                nextSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; --i)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
            {
                prevSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for (int i = 0; i < n; ++i)
        {
            res -= (long long)nums[i] * (i - prevSmaller[i]) *
                   (nextSmaller[i] - i);
        }

        vector<int> prevGreater(n, -1), nextGreater(n, n);
        while (!st.empty())
            st.pop();

        for (int i = 0; i < n; ++i)
        {
            while (!st.empty() && nums[st.top()] < nums[i])
            {
                nextGreater[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; --i)
        {
            while (!st.empty() && nums[st.top()] <= nums[i])
            {
                prevGreater[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for (int i = 0; i < n; ++i)
        {
            res += (long long)nums[i] * (i - prevGreater[i]) *
                   (nextGreater[i] - i);
        }

        return res;
    }
};