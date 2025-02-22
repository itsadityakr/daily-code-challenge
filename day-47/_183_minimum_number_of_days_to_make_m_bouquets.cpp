// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/1531099031/

class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long total_flowers = (long long)m * k;
        if (total_flowers > bloomDay.size())
            return -1;

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid))
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

    bool canMakeBouquets(vector<int> &bloomDay, int m, int k, int days)
    {
        int bouquets = 0;
        int flowers = 0;

        for (int bloom : bloomDay)
        {
            if (bloom <= days)
            {
                flowers++;
                if (flowers == k)
                {
                    bouquets++;
                    flowers = 0;
                }
            }
            else
            {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }
};