// https://www.geeksforgeeks.org/problems/count-digits5716/0

class Solution
{
public:
    int evenlyDivides(int n)
    {
        int count = 0;
        int original_n = n;

        while (n > 0)
        {
            int digit = n % 10;
            n /= 10;

            if (digit != 0 && original_n % digit == 0)
            {
                count++;
            }
        }

        return count;
    }
};