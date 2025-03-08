// https://leetcode.com/problems/trapping-rain-water/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        if (n == 0)
        {
            return 0;
        }

        stack<int> st;
        int trappedWater = 0;

        for (int i = 0; i < n; i++)
        {
            while (st.size() > 0 && height[i] > height[st.top()])
            {
                int top = st.top();
                st.pop();

                if (st.size() == 0)
                {
                    break;
                }

                int left = st.top();
                int width = i - left - 1;
                int heightDiff = min(height[i], height[left]) - height[top];

                trappedWater = trappedWater + (width * heightDiff);
            }
            st.push(i);
        }
        return trappedWater;
    }
};