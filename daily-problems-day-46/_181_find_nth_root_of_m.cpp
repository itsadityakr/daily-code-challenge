// https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m

class Solution
{
public:
    long long power(long long base, int exp, int m)
    {
        long long result = 1;
        while (exp > 0)
        {
            result *= base;
            if (result > m)
                return -1;
            exp--;
        }
        return result;
    }

    int nthRoot(int n, int m)
    {
        int left = 1, right = m;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long res = power(mid, n, m);

            if (res == m)
                return mid;
            else if (res == -1 || res > m)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1;
    }
};