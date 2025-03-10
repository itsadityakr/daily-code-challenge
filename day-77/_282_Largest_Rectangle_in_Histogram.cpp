// https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int maxArea = 0;
        heights.push_back(0);

        for (int i = 0; i < heights.size(); ++i)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - st.top() - 1;
                }
                int area = height * width;
                if (area > maxArea)
                {
                    maxArea = area;
                }
            }
            st.push(i);
        }

        return maxArea;
    }
};