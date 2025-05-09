// https://leetcode.com/problems/sliding-window-maximum/

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> left(n), right(n), result;

        left[0] = nums[0];
        right[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++)
        {
            if (i % k == 0)
            {
                left[i] = nums[i];
            }
            else
            {
                left[i] = max(left[i - 1], nums[i]);
            }

            int j = n - i - 1;
            if ((j + 1) % k == 0)
            {
                right[j] = nums[j];
            }
            else
            {
                right[j] = max(right[j + 1], nums[j]);
            }
        }

        for (int i = 0; i <= n - k; i++)
        {
            result.push_back(max(left[i + k - 1], right[i]));
        }

        return result;
    }
};
