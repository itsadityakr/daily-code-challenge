// https://leetcode.com/problems/trapping-rain-water/description/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.empty())
            return 0;

        int left = 0, right = height.size() - 1;
        int left_max = height[left], right_max = height[right];
        int water_trapped = 0;

        while (left < right)
        {
            if (left_max < right_max)
            {
                left++;
                left_max = max(left_max, height[left]);
                water_trapped += left_max - height[left];
            }
            else
            {
                right--;
                right_max = max(right_max, height[right]);
                water_trapped += right_max - height[right];
            }
        }

        return water_trapped;
    }
};