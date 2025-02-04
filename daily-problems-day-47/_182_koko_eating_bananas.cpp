// https://leetcode.com/problems/koko-eating-bananas/

class Solution
{
public:
    long long calculateHours(vector<int> &piles, int speed)
    {
        long long hours = 0;
        for (int pile : piles)
        {
            hours += (pile + speed - 1) / speed;
        }
        return hours;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (calculateHours(piles, mid) <= h)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
