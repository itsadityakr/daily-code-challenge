// https://leetcode.com/problems/container-with-most-water/submissions/1523177256/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int left = 0, right = n - 1, maxWater = 0;
        while (left < right)
        {
            int weight = right - left;
            int minBarHeight = min(height[left], height[right]);
            int currentArea = weight * minBarHeight;
            maxWater = max(maxWater, currentArea);
            height[left] < height[right] ? left++ : right--;
        }
        return maxWater;
    }
};