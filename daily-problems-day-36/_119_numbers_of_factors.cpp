// https://www.geeksforgeeks.org/problems/number-of-factors1435/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution
{
public:
    int countFactors(int N)
    {
        int count = 0;
        for (int i = 1; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                count++;
                if (i != N / i)
                    count++;
            }
        }
        return count;
    }
};