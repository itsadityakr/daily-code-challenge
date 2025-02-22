// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/1531100095/

class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int left = 1, right = *max_element(nums.begin(), nums.end());

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int sum = calculateSum(nums, mid);

            if (sum <= threshold)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }

    int calculateSum(vector<int> &nums, int divisor)
    {
        int sum = 0;
        for (int num : nums)
        {
            sum += (num + divisor - 1) / divisor;
        }
        return sum;
    }
};