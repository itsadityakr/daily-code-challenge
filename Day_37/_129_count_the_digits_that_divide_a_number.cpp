// https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/

class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0;
        int original_num = num;

        while (num > 0)
        {
            int digit = num % 10;
            num /= 10;

            if (original_num % digit == 0)
            {
                count++;
            }
        }

        return count;
    }
};
