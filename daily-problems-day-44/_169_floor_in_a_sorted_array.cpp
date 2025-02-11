// https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

class Solution
{
public:
    vector<int> getFloorAndCeil(int x, vector<int> &nums)
    {
        vector<int> result(2, -1);
        int floor = INT_MIN;
        int ceil = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= x && nums[i] > floor)
            {
                floor = nums[i];
            }
            if (nums[i] >= x && nums[i] < ceil)
            {
                ceil = nums[i];
            }
        }

        if (floor != INT_MIN)
        {
            result[0] = floor;
        }
        if (ceil != INT_MAX)
        {
            result[1] = ceil;
        }

        return result;
    }
};