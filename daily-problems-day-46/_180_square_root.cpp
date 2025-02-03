// https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

class Solution
{
public:
    int floorSqrt(int n)
    {
        int left = 1, right = n, ans = 0;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == n)
                return mid;
            else if (square < n)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return ans;
    }
};